
<html>
  <head>
    <title>Peaklist Creation</title>
  </head>
  <body>

    <h1>File Upload</h1>

    <h2>Structure File</h2>
    <@ww.form method="post" enctype="multipart/form-data">
      <@ww.file label="Structure file" name="structureFile"/>
      <@ww.submit label="Upload"/>
    </@ww.form>

    <h2>Peaklist File</h2>
    <@ww.form method="post" enctype="multipart/form-data">
      <@ww.file label="Peaklist file" name="peaklistFile"/>
      <@ww.submit label="Upload"/>
    </@ww.form>

    <h1>Structures</h1>
    <#if action.hasStructureFile()>
    <p>
      Parsed from file: ${structureFileFileName}
    </p>
    </#if>
    <table>      
      <thead>
	<tr>
	  <th>Encoding</th>
	</tr>
      </thead>
      <tbody>
	<#list structures as s>
	<tr>
	  <td>${s}</td> 
	</tr>
	</#list>
      </tbody>
    </table>

    <h1>Peaks</h1
    <#if action.hasPeaklistFile()>
    <p>
      Parsed from file: ${peaklistFileFileName}
    </p>
    </#if>
    <table>
      <thead>
	<tr>
	  <th>Mass to charge</th>
	  <th>Intensity</th>
	</tr>
      </thead>
      <tbody>
	<#list peaks as p>
	<tr>
	  <td>${p.getMZ()}</td> 
	  <td>${p.intensity}</td>
	</tr>
	</#list>
      </tbody>
    </table>

    <h1>Annotations</h1
    <#list action.getAnnotations().entrySet() as e>
      <p>Structure: ${e.key}</p>
      <table>
	<thead>
	  <tr>
	    <th>Mass to charge</th>
	    <th>Intensity</th>
	    <th>Fragment</th>
	    <th>Type</th>
	    <th>Accuracy</th>
	    <th>Accuracy PPM</th>
	    <th>Fragment m/z</th>
	    <th>Ions</th>
	    <th>Neutral exchanges</th>
	  </tr>
	</thead>
	<tbody>
	  <#list e.getValue().getPeakAnnotations() as pa>
	  <tr>
	    <td>${pa.getMZ()}</td> 
	    <td>${pa.getIntensity()}</td>
	    <#if pa.isAnnotated() >
	    <td>${pa.getFragment()}</td>
	    <td>${pa.getFragmentType()}</td>
	    <#else>
	    <td></td>
	    <td></td>
	    </#if>
	    <td>${pa.getAccuracy()}</td>
	    <td>${pa.getAccuracyPPM()}</td>
	    <td>${pa.getAnnotationMZ()}</td>
	    <td>${pa.getIons()}</td>
	    <td>${pa.getNeutralExchanges()}</td>
	  </tr>
	  </#list>
	</tbody>
      </table>
    </#list>
  </body>
</html>