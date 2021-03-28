/*
*   EuroCarbDB, a framework for carbohydrate bioinformatics
*
*   Copyright (c) 2006-2009, Eurocarb project, or third-party contributors as
*   indicated by the @author tags or express copyright attribution
*   statements applied by the authors.  
*
*   This copyrighted material is made available to anyone wishing to use, modify,
*   copy, or redistribute it subject to the terms and conditions of the GNU
*   Lesser General Public License, as published by the Free Software Foundation.
*   A copy of this license accompanies this distribution in the file LICENSE.txt.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
*   or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
*   for more details.
*
*   Last commit: $Rev: 1210 $ by $Author: glycoslave $ on $Date:: 2009-06-11 #$  
*/
package org.eurocarbdb.action.user;

import java.util.List;

import javax.servlet.http.HttpServletRequest;

import org.openid4java.OpenIDException;
import org.openid4java.consumer.ConsumerException;
import org.openid4java.consumer.ConsumerManager;
import org.openid4java.consumer.VerificationResult;
import org.openid4java.discovery.DiscoveryInformation;
import org.openid4java.discovery.Identifier;
import org.openid4java.message.AuthRequest;
import org.openid4java.message.AuthSuccess;
import org.openid4java.message.ParameterList;
import org.openid4java.message.ax.AxMessage;
import org.openid4java.message.ax.FetchRequest;
import org.openid4java.message.ax.FetchResponse;
import org.openid4java.server.RealmVerifier;

/**
* Utility class for authenticating a user's OpenId credentials.
* 
* <i>The meat of this code was taken from http://code.google.com/p/openid4java/wiki/SampleConsumer.
* I only modified it to fix some syntax errors and make it suit my needs.</i>
* 
* @author zechariahs
*/
public class OpenIdAuthenticator
{
    /**
     * The manager used to authenticate a user.  The same manager 
     * must be used when making the authentication request, and 
     * authenticating the result.
     */
    public static ConsumerManager m_oManager;
    
    /**
     * The URL the OpenID provider should send its response to.
     */
    public static final String RETURN_URL = "http://localhost:8123/ecdb/acceptLogin.action";
    
    /**
     * Creates a new instance of OpenIdAuthenticator.
     */
    public OpenIdAuthenticator()
    {
        try
        {
            m_oManager = new ConsumerManager();
        } 
        catch (ConsumerException e)
        {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
    
    /**
     * Creates a new Authentication Request.
     * @param a_sOpenIdUrl The user's Open ID URL.
     * @param a_oRequest The request to use
     * @return The ActionForward used to forward a user to their OpenID provider.
     * @throws OpenIDException
     * @author zschwenk
     */
    public String createAuthenticationRequest(String a_sOpenIdUrl, HttpServletRequest a_oRequest) 
        throws OpenIDException
    {
        
        // Custom realm verifier - http://groups.google.com/group/openid4java/browse_thread/thread/ccd874fee1c0720c
        RealmVerifier oRealmVerifier = new RealmVerifier();
        m_oManager.setRealmVerifier(oRealmVerifier);
        
        // configure the return_to URL where your application will receive
        // the authentication responses from the OpenID provider
        String sReturnURL = RETURN_URL;


        // --- Forward proxy setup (only if needed) ---
        // ProxyProperties proxyProps = new ProxyProperties();
        // proxyProps.setProxyName("proxy.example.com");
        // proxyProps.setProxyPort(8080);
        // HttpClientFactory.setProxyProperties(proxyProps);

        // perform discovery on the user-supplied identifier
        List discoveries = m_oManager.discover(a_sOpenIdUrl);

        // attempt to associate with the OpenID provider
        // and retrieve one service endpoint for authentication
        DiscoveryInformation discovered = m_oManager.associate(discoveries);

        // store the discovery information in the user's session
        a_oRequest.getSession().setAttribute("openid-disc", discovered);

        // obtain a AuthRequest message to be sent to the OpenID provider
        AuthRequest authReq = m_oManager.authenticate(discovered, sReturnURL);
        
        // Attribute Exchange example: fetching the 'email' attribute
        FetchRequest fetch = FetchRequest.createFetchRequest();
        fetch.addAttribute("email",
                // attribute alias
                "http://schema.openid.net/contact/email",   // type URI
                true);                                      // required

        // attach the extension to the authentication request
        authReq.addExtension(fetch);

        // 
        // if (! discovered.isVersion2() )
        // {
        //     // Option 1: GET HTTP-redirect to the OpenID Provider endpoint
        //     // The only method supported in OpenID 1.x
        //     // redirect-URL usually limited ~2048 bytes
        //     
        //  afOpenId = new ActionForward(authReq.getDestinationUrl(true), true);
        // }
        // else
        // {
        //     // Option 2: HTML FORM Redirection (Allows payloads >2048 bytes)
        // 
        //  afOpenId = new ActionForward(authReq.getDestinationUrl(true), true);
        //     a_oRequest.getSession().setAttribute("parameterMap", authReq.getParameterMap());
        //     a_oRequest.getSession().setAttribute("destinationUrl", authReq.getDestinationUrl(true));
        // }

        return authReq.getDestinationUrl(true);
    }
    
    /**
     * Validates the authentication.
     * 
     * @param a_oRequest The request containing the authentication information.
     * @return true if the authentication is valid, otherwise false.
     * @throws OpenIDException
     * @author zschwenk
     */
    public String isAuthenticationValid(HttpServletRequest a_oRequest) 
        throws OpenIDException
    {
        
        String identifier = null;
        
        // extract the parameters from the authentication response
        // (which comes in as a HTTP request from the OpenID provider)
        ParameterList lstResponse =
                new ParameterList(a_oRequest.getParameterMap());

        // retrieve the previously stored discovery information
        DiscoveryInformation discovered = (DiscoveryInformation)a_oRequest.getSession().getAttribute("openid-disc");

        // extract the receiving URL from the HTTP request
        StringBuffer receivingURL = a_oRequest.getRequestURL();
        String queryString = a_oRequest.getQueryString();
        if (queryString != null && queryString.length() > 0)
            receivingURL.append("?").append(a_oRequest.getQueryString());

        // verify the response; ConsumerManager needs to be the same
        // (static) instance used to place the authentication request
        VerificationResult verification = m_oManager.verify(
                receivingURL.toString(),
                lstResponse, discovered);

        // examine the verification result and extract the verified identifier
        Identifier verified = verification.getVerifiedId();
        
        if (verified != null)
        {
            AuthSuccess authSuccess =
                    (AuthSuccess) verification.getAuthResponse();

            if (authSuccess.hasExtension(AxMessage.OPENID_NS_AX))
            {
                FetchResponse fetchResp = (FetchResponse) authSuccess
                        .getExtension(AxMessage.OPENID_NS_AX);

                List emails = fetchResp.getAttributeValues("email");
//                identifier = (String) emails.get(0);
            }
            
            identifier = verified.getIdentifier();
        }
        
        return identifier;
    }
    
}