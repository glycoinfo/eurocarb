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

package org.eurocarbdb.action.hplc;


import java.io.*;
import java.util.*;
import java.lang.*;
import org.apache.log4j.Logger;
import org.apache.commons.io.FileUtils;
import org.eurocarbdb.action.*;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.hplc.*;

import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import org.eurocarbdb.dataaccess.EntityManager;
import org.hibernate.*;
import org.hibernate.cfg.*;

import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

public class digestUpload extends EurocarbAction  {

       private File file;
       private int digest_id;
       private int profile_id;
       private String enzymeName;

       File targetDir = new File(System.getProperty("java.io.tmpdir"));
      // File tar = new File ("/tmp/digest_file.txt");

public String execute() throws Exception {



        if (submitAction.equals("Upload") && digest_id > 0 ) {
        
        File tar = new File ("/tmp/digest" + profile_id + digest_id + ".txt");
        
    FileUtils.copyFileToDirectory(file, targetDir);
           FileUtils.copyFile(file, tar);


       //File tarx = new File ("/tmp/digested" + digest_id + ".txt");
       //File tarx = new File ("/tmp/digested" + profile_id + digest_id + ".txt");
       //FileUtils.copyFile(tar, tarx); 

/*        boolean success = (new File("/tmp/digest_file.txt")).delete();
        if (!success) {
        // Deletion failed
        }
*/

    return SUCCESS;
      }

else {return INPUT;}



} //end execute




   public void setUpload(File file) {
          this.file = file;
       }


   public void setEnzymeName(String enzyme) {
        this.enzymeName = enzyme;
   }

   public String getEnzymeName() {
        return this.enzymeName;
   }

   public void setDigestId(int id) {
        this.digest_id = id;
    }

   public int getDigestId() {
        return this.digest_id;
    }

   public void setProfileId(int id) {
        this.profile_id = id;
    }

   public int getProfileId() {
        return this.profile_id;
    }


 

 



}
