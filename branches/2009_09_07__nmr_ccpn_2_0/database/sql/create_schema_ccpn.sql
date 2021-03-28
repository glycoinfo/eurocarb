
create table nmr.ACCO_ACCECONTSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ACCO_ACCEOBJE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ACCO_ACCESSCONTROLSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.ACCO_ACCESSOBJECT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTION TEXT, NAME VARCHAR(80) not null, ACCESSID int8 unique, ACCESSCONTROLSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, ACCESSCONTROLSTOREID));
create table nmr.ACCO_PERMISSION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, OPTYPE VARCHAR(32) not null, PERMISSION BOOLEAN not null, PERMISSIONCLASS VARCHAR(32) not null, ROLENAME VARCHAR(32) not null, ACCESSID int8 unique, ACCESSOBJECTID int8 not null, USERGROUPID int8 not null, primary key (DATAOBJECTID), unique (OPTYPE, PERMISSIONCLASS, ROLENAME, ACCESSOBJECTID, USERGROUPID));
create table nmr.ACCO_PERMISSION2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ACCO_USER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80) not null, PASSWORDHASHED TEXT, ACCESSID int8 unique, ACCESSCONTROLSTOREID int8 not null, PERSONID int8, primary key (DATAOBJECTID), unique (NAME, ACCESSCONTROLSTOREID));
create table nmr.ACCO_USER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ACCO_USERGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, ACCESSCONTROLSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, ACCESSCONTROLSTOREID));
create table nmr.ACCO_USERGROUP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ACCO_USERGROUP2LEADERS (LEADERID int8 not null, LEDGROUPID int8 not null, primary key (LEDGROUPID, LEADERID));
create table nmr.ACCO_USERGROUP2MEMBERS (MEMBERID int8 not null, USERGROUPID int8 not null, primary key (USERGROUPID, MEMBERID));
create table nmr.AFFI_AFFILIATIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.AFFI_AFFISTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.AFFI_GROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80), SERIAL INTEGER not null, URL VARCHAR(254), ACCESSID int8 unique, ORGANISATIONID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, ORGANISATIONID));
create table nmr.AFFI_GROUP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.AFFI_ORGA2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.AFFI_ORGANISATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CITY VARCHAR(80), COUNTRY VARCHAR(80), EMAILADDRESS VARCHAR(80), FAXNUMBER VARCHAR(80), NAME VARCHAR(80) not null, ORGANISATIONTYPE VARCHAR(80), PHONENUMBER VARCHAR(80), POSTALCODE VARCHAR(80), PROVINCE VARCHAR(80), SERIAL INTEGER not null, URL VARCHAR(254), ACCESSID int8 unique, AFFILIATIONSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, AFFILIATIONSTOREID));
create table nmr.AFFI_ORGA_ADDRESSES (ORGANISATIONID int8 not null, ADDRESS VARCHAR(254) not null, order_ int8 not null, primary key (ORGANISATIONID, order_));
create table nmr.AFFI_PERSINGROU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.AFFI_PERSINGROU_PHONNUMB (PERSONINGROUPID int8 not null, PHONENUMBER VARCHAR(80) not null, order_ int8 not null, primary key (PERSONINGROUPID, order_));
create table nmr.AFFI_PERSON (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, FAMILYNAME VARCHAR(80) not null, FAMILYTITLE VARCHAR(32), GIVENNAME VARCHAR(80), SERIAL INTEGER not null, TITLE VARCHAR(80), ACCESSID int8 unique, AFFILIATIONSTOREID int8 not null, CURRENTPERSONINGROUPID int8, primary key (DATAOBJECTID), unique (SERIAL, AFFILIATIONSTOREID));
create table nmr.AFFI_PERSON2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.AFFI_PERSONINGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DELIVERYADDRESS VARCHAR(254), EMAILADDRESS VARCHAR(80), ENDDATE TEXT, FAXNUMBER VARCHAR(80), MAILINGADDRESS VARCHAR(254), POSITION_ VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, GROUPID int8 not null, PERSONID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, PERSONID));
create table nmr.AFFI_PERSON_MIDDINIT (PERSONID int8 not null, MIDDLEINITIAL VARCHAR(32) not null, order_ int8 not null, primary key (PERSONID, order_));
create table nmr.CCCA_CHEMATOMCHAR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCA_CHEMATOMCHARGE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, PARTIALCHARGE FLOAT not null, SERIAL INTEGER not null, SUBTYPE INTEGER not null, ACCESSID int8 unique, CHEMCOMPCHARGEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHEMCOMPCHARGEID));
create table nmr.CCCA_CHEMATOMCHAR_VALIVEGATYPE (CHEMATOMCHARGEID int8 not null, VALIDVEGATYPE VARCHAR(80) not null, order_ int8 not null, primary key (CHEMATOMCHARGEID, order_));
create table nmr.CCCA_CHEMCOMPCHAR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCA_CHEMCOMPCHARGE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CCPCODE VARCHAR(80) not null, DETAILS VARCHAR(254), MOLTYPE VARCHAR(32) not null, SOURCENAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CCPCODE, MOLTYPE, SOURCENAME));
create table nmr.CCCA_CHEMCOMPVARCHAR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCA_CHEMCOMPVARCHAR2CHEMATOMCHAR (CHEMATOMCHARGEID int8 not null, CHEMCOMPVARCHARGEID int8 not null, primary key (CHEMCOMPVARCHARGEID, CHEMATOMCHARGEID));
create table nmr.CCCA_CHEMCOMPVARCHARGE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, LINKING VARCHAR(32) not null, ACCESSID int8 unique, CHEMCOMPCHARGEID int8 not null, primary key (DATAOBJECTID), unique (DESCRIPTOR, LINKING, CHEMCOMPCHARGEID));
create table nmr.CCCO_CHEMATOMCOOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCO_CHEMATOMCOORD (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, SERIAL INTEGER not null, SUBTYPE INTEGER not null, X FLOAT, Y FLOAT, Z FLOAT, ACCESSID int8 unique, CHEMCOMPCOORDID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHEMCOMPCOORDID));
create table nmr.CCCO_CHEMCOMPCOOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCO_CHEMCOMPCOORD (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CCPCODE VARCHAR(80) not null, DETAILS VARCHAR(254), MOLTYPE VARCHAR(32) not null, SOURCENAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CCPCODE, MOLTYPE, SOURCENAME));
create table nmr.CCCO_CHEMCOMPVARCOOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCCO_CHEMCOMPVARCOOR2CHEMATOMCOOR (CHEMATOMCOORDID int8 not null, CHEMCOMPVARCOORDID int8 not null, primary key (CHEMCOMPVARCOORDID, CHEMATOMCOORDID));
create table nmr.CCCO_CHEMCOMPVARCOORD (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, LINKING VARCHAR(32) not null, ACCESSID int8 unique, CHEMCOMPCOORDID int8 not null, primary key (DATAOBJECTID), unique (DESCRIPTOR, LINKING, CHEMCOMPCOORDID));
create table nmr.CCLB_ATOMLABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ISOTOPECODE VARCHAR(32) not null, NAME VARCHAR(32) not null, SUBTYPE INTEGER not null, WEIGHT FLOAT not null, ACCESSID int8 unique, ISOTOPOMERID int8 not null, primary key (DATAOBJECTID), unique (ISOTOPECODE, NAME, SUBTYPE, ISOTOPOMERID));
create table nmr.CCLB_ATOMLABEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCLB_CHEMCOMPLABE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCLB_CHEMCOMPLABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CCPCODE VARCHAR(80) not null, MOLTYPE VARCHAR(32) not null, ACCESSID int8 unique, LABELINGSCHEMEID int8 not null, primary key (DATAOBJECTID), unique (CCPCODE, MOLTYPE, LABELINGSCHEMEID));
create table nmr.CCLB_ISOTOPOMER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, WEIGHT FLOAT not null, ACCESSID int8 unique, CHEMCOMPLABELID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHEMCOMPLABELID));
create table nmr.CCLB_ISOTOPOMER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CCLB_LABELINGSCHEME (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, DETAILS VARCHAR(254), LONGNAME VARCHAR(80), NAME VARCHAR(32) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.CCLB_LABESCHE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEL_CHEMELEM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEL_CHEMELEMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ATOMNUMBER INTEGER, ATOMICRADIUS FLOAT, COVALENTRADIUS FLOAT, MASS FLOAT, NAME VARCHAR(32), SYMBOL VARCHAR(32) not null, ACCESSID int8 unique, CHEMELEMENTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SYMBOL, CHEMELEMENTSTOREID));
create table nmr.CHEL_CHEMELEMENTSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.CHEL_CHEMELEMSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEL_ISOTOPE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ABUNDANCE FLOAT, GYROMAGNETICRATIO FLOAT, HALFLIFE FLOAT, HALFLIFEERROR FLOAT, HALFLIFETYPE VARCHAR(32) not null, MAGNETICMOMENT FLOAT, MASS FLOAT, MASSNUMBER INTEGER not null, QUADRUPOLEMOMENT FLOAT, RECEPTIVITY FLOAT, SPIN VARCHAR(32), ACCESSID int8 unique, CHEMELEMENTID int8 not null, primary key (DATAOBJECTID), unique (MASSNUMBER, CHEMELEMENTID));
create table nmr.CHEL_ISOTOPE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_ABSTCHEMATOM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_ABSTRACTCHEMATOM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, SUBTYPE INTEGER not null, ACCESSID int8 unique, CHEMCOMPID int8 not null, primary key (DATAOBJECTID), unique (NAME, SUBTYPE, CHEMCOMPID));
create table nmr.CHEM_ATOMSYSNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ATOMNAME VARCHAR(32) not null, ATOMSUBTYPE INTEGER not null, SYSNAME VARCHAR(80) not null, ACCESSID int8 unique, NAMINGSYSTEMID int8 not null, primary key (DATAOBJECTID), unique (ATOMNAME, ATOMSUBTYPE, NAMINGSYSTEMID));
create table nmr.CHEM_ATOMSYSNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_ATOMSYSNAME_ALTSYSNAME (ATOMSYSNAMEID int8 not null, ALTSYSNAME VARCHAR(80) not null, order_ int8 not null, primary key (ATOMSYSNAMEID, order_));
create table nmr.CHEM_CHEMANGLE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ACCESSID int8 unique, CHEMCOMPID int8 not null, primary key (DATAOBJECTID));
create table nmr.CHEM_CHEMANGLE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMANGLE2CHEMATOMS (CHEMATOMID int8 not null, CHEMANGLEID int8 not null, order_chemAtoms_ int4 not null, primary key (CHEMANGLEID, order_chemAtoms_));
create table nmr.CHEM_CHEMATOM (ABSTRACTCHEMATOMID int8 not null, CHIRALITY VARCHAR(32), ELEMENTSYMBOL VARCHAR(32) not null, NUCLGROUPTYPE VARCHAR(32), SHORTVEGATYPE VARCHAR(80), WATEREXCHANGEABLE BOOLEAN not null, CHEMATOMSETID int8, primary key (ABSTRACTCHEMATOMID));
create table nmr.CHEM_CHEMATOMSET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DISTCORR FLOAT not null, ISEQUIVALENT BOOLEAN, ISPROCHIRAL BOOLEAN not null, NAME VARCHAR(32) not null, SUBTYPE INTEGER not null, ACCESSID int8 unique, CHEMATOMSETID int8, CHEMCOMPID int8 not null, primary key (DATAOBJECTID), unique (NAME, SUBTYPE, CHEMCOMPID));
create table nmr.CHEM_CHEMATOMSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMBOND (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, BONDTYPE VARCHAR(32) not null, STEREOCHEM VARCHAR(32), ACCESSID int8 unique, CHEMCOMPID int8 not null, primary key (DATAOBJECTID));
create table nmr.CHEM_CHEMBOND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMBOND2CHEMATOMS (CHEMATOMID int8 not null, CHEMBONDID int8 not null, primary key (CHEMBONDID, CHEMATOMID));
create table nmr.CHEM_CHEMCOMP (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, BASEGLYCOCTCODE TEXT, BEILSTEINCODE VARCHAR(32), CASREGCODE VARCHAR(32), CCPCODE VARCHAR(80) not null, CODE3LETTER VARCHAR(3), DETAILS VARCHAR(254), HASSTDCHIRALITY BOOLEAN, MERCKCODE VARCHAR(32), MOLTYPE VARCHAR(32) not null, NAME VARCHAR(254), SIGMAALDRICHCODE VARCHAR(32), ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CCPCODE, MOLTYPE));
create table nmr.CHEM_CHEMCOMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMCOMPSYSNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SYSNAME VARCHAR(32) not null, ACCESSID int8 unique, NAMINGSYSTEMID int8 not null, primary key (DATAOBJECTID), unique (SYSNAME, NAMINGSYSTEMID));
create table nmr.CHEM_CHEMCOMPSYSNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMCOMPVAR (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, FORMALCHARGE INTEGER not null, GLYCOCTCODE TEXT, ISAROMATIC BOOLEAN not null, ISDEFAULTVAR BOOLEAN not null, ISPARAMAGNETIC BOOLEAN not null, LINKING VARCHAR(32) not null, NONSTEREOSMILES TEXT, STEREOSMILES TEXT, VARNAME VARCHAR(254), ACCESSID int8 unique, CHEMCOMPID int8 not null, primary key (DATAOBJECTID), unique (DESCRIPTOR, LINKING, CHEMCOMPID));
create table nmr.CHEM_CHEMCOMPVAR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMCOMPVAR2CHEMATOMS (CHEMATOMID int8 not null, CHEMCOMPVARID int8 not null, primary key (CHEMCOMPVARID, CHEMATOMID));
create table nmr.CHEM_CHEMCOMPVAR2SPECSYSNAME (SPECIFICSYSNAMEID int8 not null, SPECIFICCHEMCOMPVARID int8 not null, primary key (SPECIFICCHEMCOMPVARID, SPECIFICSYSNAMEID));
create table nmr.CHEM_CHEMCOMP_COMMNAME (CHEMCOMPID int8 not null, COMMONNAME VARCHAR(254) not null, order_ int8 not null, primary key (CHEMCOMPID, order_));
create table nmr.CHEM_CHEMCOMP_KEYWORDS (CHEMCOMPID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (CHEMCOMPID, order_));
create table nmr.CHEM_CHEMTORS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_CHEMTORS2CHEMATOMS (CHEMATOMID int8 not null, CHEMTORSIONID int8 not null, order_chemAtoms_ int4 not null, primary key (CHEMTORSIONID, order_chemAtoms_));
create table nmr.CHEM_CHEMTORSION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32), ACCESSID int8 unique, CHEMCOMPID int8 not null, primary key (DATAOBJECTID));
create table nmr.CHEM_CHEMTORSIONSYSNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SYSNAME VARCHAR(32), ACCESSID int8 unique, CHEMTORSIONID int8 not null, NAMINGSYSTEMID int8 not null, primary key (DATAOBJECTID), unique (CHEMTORSIONID, NAMINGSYSTEMID));
create table nmr.CHEM_CHEMTORSSYSNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_LINKATOM (ABSTRACTCHEMATOMID int8 not null, BOUNDLINKENDID int8 unique, REMOTELINKENDID int8 unique, primary key (ABSTRACTCHEMATOMID));
create table nmr.CHEM_LINKEND (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LINKCODE VARCHAR(32) not null, ACCESSID int8 unique, BOUNDCHEMATOMID int8 not null, BOUNDLINKATOMID int8 not null unique, CHEMCOMPID int8 not null, REMOTECHEMATOMID int8, REMOTELINKATOMID int8 unique, primary key (DATAOBJECTID), unique (LINKCODE, CHEMCOMPID));
create table nmr.CHEM_LINKEND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_NAMINGSYSTEM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, ACCESSID int8 unique, ATOMREFERENCEID int8, ATOMSETREFERENCEID int8, CHEMCOMPID int8 not null, primary key (DATAOBJECTID), unique (NAME, CHEMCOMPID));
create table nmr.CHEM_NAMISYST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_NONSTDCHEMCOMP (CHEMCOMPID int8 not null, primary key (CHEMCOMPID));
create table nmr.CHEM_STDCHEMCOMP (CHEMCOMPID int8 not null, CODE1LETTER VARCHAR(32) not null, primary key (CHEMCOMPID));
create table nmr.CHEM_STER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CHEM_STER2CHEMATOMS (CHEMATOMID int8 not null, STEREOCHEMISTRYID int8 not null, order_chemAtoms_ int4 not null, primary key (STEREOCHEMISTRYID, order_chemAtoms_));
create table nmr.CHEM_STEREOCHEMISTRY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, VALUE VARCHAR(32) not null, ACCESSID int8 unique, CHEMCOMPID int8 not null, REFSTEREOCHEMISTRYID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHEMCOMPID));
create table nmr.CITA_BOOKCITATION (CITATIONID int8 not null, BOOKSERIES VARCHAR(254), BOOKTITLE VARCHAR(254), ISBN VARCHAR(80), PUBLISHER VARCHAR(254), PUBLISHERCITY VARCHAR(254), VOLUME VARCHAR(80), primary key (CITATIONID));
create table nmr.CITA_CITASTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CITA_CITATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CASABSTRACTCODE VARCHAR(80), DETAILS VARCHAR(254), DOI VARCHAR(254), FIRSTPAGE VARCHAR(80), LASTPAGE VARCHAR(80), MEDLINEUICODE VARCHAR(80), PUBMEDID VARCHAR(80), SERIAL INTEGER not null, STATUS VARCHAR(80), TITLE TEXT, YEAR INTEGER, ACCESSID int8 unique, CITATIONSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CITATIONSTOREID));
create table nmr.CITA_CITATION2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CITA_CITATION2AUTHORS (AUTHORID int8 not null, AUTHORCITATIONID int8 not null, order_authors_ int4 not null, primary key (AUTHORCITATIONID, order_authors_));
create table nmr.CITA_CITATION2EDITORS (EDITORID int8 not null, EDITORCITATIONID int8 not null, order_editors_ int4 not null, primary key (EDITORCITATIONID, order_editors_));
create table nmr.CITA_CITATIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.CITA_CITATION_KEYWORDS (CITATIONID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (CITATIONID, order_));
create table nmr.CITA_CONFERENCECITATION (CITATIONID int8 not null, ABSTRACTNUMBER VARCHAR(80), CITY VARCHAR(80), CONFERENCESITE VARCHAR(80), CONFERENCETITLE VARCHAR(254), COUNTRY VARCHAR(80), ENDDATE TEXT, STARTDATE TEXT, STATEPROVINCE VARCHAR(80), primary key (CITATIONID));
create table nmr.CITA_JOURNALCITATION (CITATIONID int8 not null, ASTM VARCHAR(80), CSD VARCHAR(80), ISSN VARCHAR(80), ISSUE VARCHAR(80), JOURNALABBREVIATION VARCHAR(80), JOURNALFULLNAME VARCHAR(254), VOLUME VARCHAR(80), primary key (CITATIONID));
create table nmr.CITA_THESISCITATION (CITATIONID int8 not null, CITY VARCHAR(80), COUNTRY VARCHAR(80), INSTITUTION VARCHAR(254), STATEPROVINCE VARCHAR(80), primary key (CITATIONID));
create table nmr.CLAS_ABSTCATE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CLAS_ABSTRACTCATEGORY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (DATAOBJECTID));
create table nmr.CLAS_CLAS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.CLAS_CLASSIFICATION (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAMINGSYSTEM VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAMINGSYSTEM));
create table nmr.CLAS_EXPERIMENTTYPE (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_HAZARDPHRASE (ABSTRACTCATEGORYID int8 not null, PHRASE VARCHAR(254), CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_HOLDERCATEGORY (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_INSTRUMENTTYPE (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_INSTTYPE2EXPETYPE (EXPERIMENTTYPEID int8 not null, INSTRUMENTTYPEID int8 not null, primary key (INSTRUMENTTYPEID, EXPERIMENTTYPEID));
create table nmr.CLAS_INSTTYPE2INST (INSTRUMENTTYPEID int8 not null, INSTRUMENTID int8 not null, primary key (INSTRUMENTTYPEID, INSTRUMENTID));
create table nmr.CLAS_SAMPCATE2EXPETYPE (EXPERIMENTTYPEID int8 not null, SAMPLECATEGORYID int8 not null, primary key (SAMPLECATEGORYID, EXPERIMENTTYPEID));
create table nmr.CLAS_SAMPLECATEGORY (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_SAMPLECOMPONENTCATEGORY (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_TARGETSCOREBOARD (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_TARGETSTATUS (ABSTRACTCATEGORYID int8 not null, CLASSIFICATIONID int8 not null, primary key (ABSTRACTCATEGORYID));
create table nmr.CLAS_TARGSTAT2TARGSCOR (TARGETSCOREBOARDID int8 not null, TARGETSTATUSID int8 not null, primary key (TARGETSTATUSID, TARGETSCOREBOARDID));
create table nmr.COOR_ATOM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, ACCESSID int8 unique, RESIDUEID int8 not null, primary key (DATAOBJECTID), unique (NAME, RESIDUEID));
create table nmr.COOR_ATOM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.COOR_CHAIN (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CODE VARCHAR(80) not null, ACCESSID int8 unique, STRUCTUREENSEMBLEID int8 not null, primary key (DATAOBJECTID), unique (CODE, STRUCTUREENSEMBLEID));
create table nmr.COOR_CHAIN2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.COOR_COORD (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ALTLOCATIONCODE VARCHAR(80) not null, BFACTOR FLOAT not null, OCCUPANCY FLOAT not null, X FLOAT, Y FLOAT, Z FLOAT, ACCESSID int8 unique, ATOMID int8 not null, MODELID int8 not null, primary key (DATAOBJECTID), unique (ALTLOCATIONCODE, ATOMID, MODELID));
create table nmr.COOR_COORD2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.COOR_MODEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, STRUCTUREENSEMBLEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, STRUCTUREENSEMBLEID));
create table nmr.COOR_MODEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.COOR_RESIDUE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SEQCODE INTEGER not null, SEQID INTEGER not null, SEQINSERTCODE VARCHAR(80) not null, ACCESSID int8 unique, CHAINID int8 not null, primary key (DATAOBJECTID), unique (SEQID, CHAINID));
create table nmr.COOR_RESIDUE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.COOR_STRUCTUREENSEMBLE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, ATOMNAMINGSYSTEM VARCHAR(80), DETAILS VARCHAR(254), ENSEMBLEID INTEGER not null, RESNAMINGSYSTEM VARCHAR(80), ACCESSID int8 unique, MOLSYSTEMID int8 not null, STRUCTUREGENERATIONID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, ENSEMBLEID, MOLSYSTEMID));
create table nmr.COOR_STRUENSE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DBR_DATABASE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, DETAILS TEXT, FULLNAME TEXT, NAME VARCHAR(80) not null, URL TEXT, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.DBR_DATABASE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DBR_ENTRY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ALTCODE VARCHAR(32), CODE VARCHAR(32), DETAILS TEXT, NAME VARCHAR(32), RELEASE VARCHAR(80), SERIAL INTEGER not null, SUBCODE VARCHAR(32), URL TEXT, ACCESSID int8 unique, DATABASEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, DATABASEID));
create table nmr.DBR_ENTRY2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_ABSTDATASTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_ABSTRACTDATASTORE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), PATH VARCHAR(254) not null, SERIAL INTEGER not null, ACCESSID int8 unique, DATALOCATIONSTOREID int8 not null, DATAURLID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, DATALOCATIONSTOREID));
create table nmr.DLOC_BLOCBINAMATR_BLOCKSIZES (BLOCKEDBINARYMATRIXID int8 not null, BLOCKSIZE INTEGER not null, order_ int8 not null, primary key (BLOCKEDBINARYMATRIXID, order_));
create table nmr.DLOC_BLOCKEDBINARYMATRIX (NUMERICMATRIXID int8 not null, BLOCKHEADERSIZE INTEGER not null, HASBLOCKPADDING BOOLEAN not null, NBYTE INTEGER not null, primary key (NUMERICMATRIXID));
create table nmr.DLOC_COMPONENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, AMPLITUDE FLOAT not null, ANNOTATION VARCHAR(80), REGIONID INTEGER, SERIAL INTEGER not null, STATUS VARCHAR(32) not null, ACCESSID int8 unique, SHAPEMATRIXID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, SHAPEMATRIXID));
create table nmr.DLOC_COMPONENT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_COMPONENTSHAPE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, SHAPEMATRIXID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, SHAPEMATRIXID));
create table nmr.DLOC_COMPSHAP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_COMPSHAP_DIMS (COMPONENTSHAPEID int8 not null, DIM INTEGER not null, order_ int8 not null, primary key (COMPONENTSHAPEID, order_));
create table nmr.DLOC_DATALOCASTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_DATALOCATIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.DLOC_DATAURL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80), SERIAL INTEGER not null, URLID int8 not null unique, ACCESSID int8 unique, DATALOCATIONSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, DATALOCATIONSTOREID));
create table nmr.DLOC_DATAURL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.DLOC_MIMETYPEDATASTORE (ABSTRACTDATASTOREID int8 not null, MIMETYPE VARCHAR(80) not null, NMRDATASOURCEIMAGEID int8 unique, primary key (ABSTRACTDATASTOREID));
create table nmr.DLOC_NUMEMATR_ISCOMPLEX (NUMERICMATRIXID int8 not null, ISCOMPLEX BOOLEAN not null, order_ int8 not null, primary key (NUMERICMATRIXID, order_));
create table nmr.DLOC_NUMEMATR_NUMPOINTS (NUMERICMATRIXID int8 not null, NUMPOINTS INTEGER not null, order_ int8 not null, primary key (NUMERICMATRIXID, order_));
create table nmr.DLOC_NUMERICMATRIX (ABSTRACTDATASTOREID int8 not null, COMPLEXSTOREDBY VARCHAR(32) not null, FILETYPE VARCHAR(32), ISBIGENDIAN BOOLEAN not null, NUMRECORDS INTEGER not null, NUMBERTYPE VARCHAR(32) not null, SCALEFACTOR FLOAT not null, primary key (ABSTRACTDATASTOREID));
create table nmr.DLOC_SHAPEMATRIX (NUMERICMATRIXID int8 not null, DATAENCODING VARCHAR(32) not null, ISRECONSTRUCTABLE BOOLEAN not null, ISRESOLVED BOOLEAN not null, NUMSHAPES INTEGER not null, primary key (NUMERICMATRIXID));
create table nmr.ENTR_ENTRMOLE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ENTR_ENTRY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, BMRBPROCESSING VARCHAR(254), DETAILS TEXT, ENTRYTYPE VARCHAR(80) not null, EXPERIMENTLISTDETAILS VARCHAR(254), NAME VARCHAR(80) not null, TITLE VARCHAR(254), ACCESSID int8 unique, MOLSYSTEMID int8, NMRENTRYSTOREID int8 not null, PRIMARYCITATIONID int8, STUDYID int8, order_nmrEntriesPrimary_ int4, primary key (DATAOBJECTID), unique (NAME, NMRENTRYSTOREID));
create table nmr.ENTR_ENTRY2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ENTR_ENTRY2AUTHORS (AUTHORID int8 not null, AUTHOREDENTRYID int8 not null, order_authors_ int4 not null, primary key (AUTHOREDENTRYID, order_authors_));
create table nmr.ENTR_ENTRY2CONTPERS (CONTACTPERSONID int8 not null, CONTACTENTRYID int8 not null, primary key (CONTACTENTRYID, CONTACTPERSONID));
create table nmr.ENTR_ENTRY2DERIDATALIST (DERIVEDDATALISTID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, DERIVEDDATALISTID));
create table nmr.ENTR_ENTRY2EXPE (EXPERIMENTID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, EXPERIMENTID));
create table nmr.ENTR_ENTRY2LABO (LABORATORYID int8 not null, NMRENTRYID int8 not null, primary key (NMRENTRYID, LABORATORYID));
create table nmr.ENTR_ENTRY2MEASLIST (MEASUREMENTLISTID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, MEASUREMENTLISTID));
create table nmr.ENTR_ENTRY2OTHECITA (OTHERCITATIONID int8 not null, NMRENTRYID int8 not null, primary key (NMRENTRYID, OTHERCITATIONID));
create table nmr.ENTR_ENTRY2PEAKLISTS (PEAKLISTID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, PEAKLISTID));
create table nmr.ENTR_ENTRY2SOFTWARE (SOFTWAREID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, SOFTWAREID));
create table nmr.ENTR_ENTRY2STRUANAL (STRUCTUREANALYSISID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, STRUCTUREANALYSISID));
create table nmr.ENTR_ENTRY2STRUGENE (STRUCTUREGENERATIONID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, STRUCTUREGENERATIONID));
create table nmr.ENTR_ENTRY2STRUGROU (STRUCTUREGROUPID int8 not null, ENTRYID int8 not null, primary key (ENTRYID, STRUCTUREGROUPID));
create table nmr.ENTR_ENTRYMOLECULE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, PRODUCTIONMETHOD VARCHAR(80) not null, SOURCETYPE VARCHAR(80) not null, VECTORTYPE VARCHAR(80), ACCESSID int8 unique, ENTRYID int8 not null, EXPERIMENTALSOURCEID int8, MOLECULEID int8 not null, primary key (DATAOBJECTID), unique (ENTRYID, MOLECULEID));
create table nmr.ENTR_ENTRY_KEYWORDS (ENTRYID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (ENTRYID, order_));
create table nmr.ENTR_NMRENTRSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ENTR_NMRENTRYSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.ENTR_RELAENTR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ENTR_RELATEDENTRY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DBCODE VARCHAR(80) not null, DBNAME VARCHAR(80) not null, DETAILS VARCHAR(254), RELATIONSHIP VARCHAR(80), ACCESSID int8 unique, ENTRYID int8 not null, primary key (DATAOBJECTID), unique (DBCODE, DBNAME, ENTRYID));
create table nmr.ENTR_STUDY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(80) not null, STUDYTYPE VARCHAR(80), ACCESSID int8 unique, NMRENTRYSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, NMRENTRYSTOREID));
create table nmr.ENTR_STUDY2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.ENTR_STUDY_KEYWORDS (STUDYID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (STUDYID, order_));
create table nmr.HOLD_ABSTHOLDTYPE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.HOLD_ABSTHOLDTYPE2HOLDCATE (HOLDERCATEGORYID int8 not null, ABSTRACTHOLDERTYPEID int8 not null, primary key (ABSTRACTHOLDERTYPEID, HOLDERCATEGORYID));
create table nmr.HOLD_ABSTRACTHOLDERTYPE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(32) not null, ACCESSID int8 unique, HOLDERSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, HOLDERSTOREID));
create table nmr.HOLD_HOLDER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, COLPOSITION INTEGER, DETAILS TEXT, ENDDATE TEXT, NAME VARCHAR(80) not null, ROWPOSITION INTEGER, STARTDATE TEXT, SUBPOSITION INTEGER, ACCESSID int8 unique, HOLDERID int8, HOLDERSTOREID int8 not null, HOLDERTYPEID int8, primary key (DATAOBJECTID), unique (NAME, HOLDERSTOREID));
create table nmr.HOLD_HOLDER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.HOLD_HOLDER2HOLDCATE (HOLDERCATEGORYID int8 not null, HOLDERID int8 not null, primary key (HOLDERID, HOLDERCATEGORYID));
create table nmr.HOLD_HOLDERLOCATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ENDDATE TEXT, SERIAL INTEGER not null, STARTDATE TEXT not null, ACCESSID int8 unique, HOLDERID int8 not null, LOCATIONID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, HOLDERID));
create table nmr.HOLD_HOLDERSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.HOLD_HOLDERTYPE (ABSTRACTHOLDERTYPEID int8 not null, HOLDHOLDERFLAG BOOLEAN, MAXCOLUMN INTEGER, MAXROW INTEGER, MAXSUBPOSITION INTEGER, MAXVOLUME FLOAT, MAXVOLUMEDISPLAYUNIT VARCHAR(32), primary key (ABSTRACTHOLDERTYPEID));
create table nmr.HOLD_HOLDERTYPEPOSITION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, COLPOSITION INTEGER, DETAILS TEXT, MAXVOLUME FLOAT, MAXVOLUMEDIPLAYUNIT VARCHAR(32), NAME VARCHAR(32), ROWPOSITION INTEGER, SERIAL INTEGER not null, SUBPOSITION INTEGER, ACCESSID int8 unique, HOLDERTYPEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, HOLDERTYPEID));
create table nmr.HOLD_HOLDLOCA2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.HOLD_HOLDSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.HOLD_HOLDTYPEPOSI2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.HOLD_PINTYPE (ABSTRACTHOLDERTYPEID int8 not null, LENGTH FLOAT, LOOPLENGTH FLOAT, LOOPTYPE VARCHAR(80), WIREWIDTH FLOAT, primary key (ABSTRACTHOLDERTYPEID));
create table nmr.HOLD_REFSAMPLEPOSITION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, COLPOSITION INTEGER, ROWPOSITION INTEGER, SERIAL INTEGER not null, SUBPOSITION INTEGER, ACCESSID int8 unique, HOLDERID int8 not null, REFSAMPLEID int8, primary key (DATAOBJECTID), unique (SERIAL, HOLDERID));
create table nmr.HOLD_REFSAMPPOSI2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.IMPL_APPLICATIONDATA (MEMOPSDATATYPEOBJECTID int8 not null, ApplicationData_TYPE varchar(255) not null, APPLICATION VARCHAR(80) not null, KEYWORD VARCHAR(80) not null, AppDataString_VALUE TEXT, AppDataDouble_VALUE FLOAT8, AppDataFloat_VALUE FLOAT, AppDataLong_VALUE INTEGER, AppDataInt_VALUE INTEGER, AppDataBoolean_VALUE BOOLEAN, primary key (MEMOPSDATATYPEOBJECTID));
create table nmr.IMPL_MEMOPSROOT (IMPLEMENTATIONOBJECTID int8 not null, ACCESSCONTROLON BOOLEAN not null, CURRENTGROUPNAME VARCHAR(32) not null, CURRENTUSERID VARCHAR(32) not null, NAME VARCHAR(32) not null, OVERRIDE BOOLEAN not null, CURRENTACCESSCONTROLSTOREID int8, CURRENTNMRREFERENCESTOREID int8, CURRENTNMREXPPROTOTYPEID int8, CURRENTNMRENTRYSTOREID int8, CURRENTNMRCONSTRAINTSTOREID int8, CURRENTNMRPROJECTID int8, CURRENTVALIDATIONSTOREID int8, CURRENTSTEREOCHEMISTRYSTOREID int8, CURRENTMOLECULEID int8, CURRENTMOLSYSTEMID int8, CURRENTSTRUCTUREENSEMBLEID int8, CURRENTLABELEDMOLECULEID int8, CURRENTCHEMELEMENTSTOREID int8, CURRENTLABELINGSCHEMEID int8, CURRENTCHEMCOMPCOORDID int8, CURRENTCHEMCOMPCHARGEID int8, CURRENTCHEMCOMPID int8, CURRENTSAMPLESTOREID int8, CURRENTREFSAMPLECOMPONENTSTOREID int8, CURRENTLOCATIONSTOREID int8, CURRENTHOLDERSTOREID int8, CURRENTCLASSIFICATIONID int8, CURRENTTAXONOMYID int8, CURRENTMETHODSTOREID int8, CURRENTKEYWORDDEFINITIONSTOREID int8, CURRENTINSTRUMENTSTOREID int8, CURRENTDATABASEID int8, CURRENTDATALOCATIONSTOREID int8, CURRENTCITATIONSTOREID int8, CURRENTAFFILIATIONSTOREID int8, primary key (IMPLEMENTATIONOBJECTID));
create table nmr.IMPL_MEMOPSROOT2ACCECONTSTOR (MEMOPSROOTID int8 not null, ACCESSCONTROLSTOREID int8 not null, primary key (MEMOPSROOTID, ACCESSCONTROLSTOREID));
create table nmr.IMPL_MEMOPSROOT2AFFISTOR (MEMOPSROOTID int8 not null, AFFILIATIONSTOREID int8 not null, primary key (MEMOPSROOTID, AFFILIATIONSTOREID));
create table nmr.IMPL_MEMOPSROOT2CHEMCOMPCHAR (MEMOPSROOTID int8 not null, CHEMCOMPCHARGEID int8 not null, primary key (MEMOPSROOTID, CHEMCOMPCHARGEID));
create table nmr.IMPL_MEMOPSROOT2CHEMCOMPCOOR (MEMOPSROOTID int8 not null, CHEMCOMPCOORDID int8 not null, primary key (MEMOPSROOTID, CHEMCOMPCOORDID));
create table nmr.IMPL_MEMOPSROOT2CHEMCOMPS (MEMOPSROOTID int8 not null, CHEMCOMPID int8 not null, primary key (MEMOPSROOTID, CHEMCOMPID));
create table nmr.IMPL_MEMOPSROOT2CHEMELEMSTOR (MEMOPSROOTID int8 not null, CHEMELEMENTSTOREID int8 not null, primary key (MEMOPSROOTID, CHEMELEMENTSTOREID));
create table nmr.IMPL_MEMOPSROOT2CITASTOR (MEMOPSROOTID int8 not null, CITATIONSTOREID int8 not null, primary key (MEMOPSROOTID, CITATIONSTOREID));
create table nmr.IMPL_MEMOPSROOT2CLAS (MEMOPSROOTID int8 not null, CLASSIFICATIONID int8 not null, primary key (MEMOPSROOTID, CLASSIFICATIONID));
create table nmr.IMPL_MEMOPSROOT2DATABASES (MEMOPSROOTID int8 not null, DATABASEID int8 not null, primary key (MEMOPSROOTID, DATABASEID));
create table nmr.IMPL_MEMOPSROOT2DATALOCASTOR (MEMOPSROOTID int8 not null, DATALOCATIONSTOREID int8 not null, primary key (MEMOPSROOTID, DATALOCATIONSTOREID));
create table nmr.IMPL_MEMOPSROOT2HOLDSTOR (MEMOPSROOTID int8 not null, HOLDERSTOREID int8 not null, primary key (MEMOPSROOTID, HOLDERSTOREID));
create table nmr.IMPL_MEMOPSROOT2INSTSTOR (MEMOPSROOTID int8 not null, INSTRUMENTSTOREID int8 not null, primary key (MEMOPSROOTID, INSTRUMENTSTOREID));
create table nmr.IMPL_MEMOPSROOT2KEYWDEFISTOR (MEMOPSROOTID int8 not null, KEYWORDDEFINITIONSTOREID int8 not null, primary key (MEMOPSROOTID, KEYWORDDEFINITIONSTOREID));
create table nmr.IMPL_MEMOPSROOT2LABEMOLE (MEMOPSROOTID int8 not null, LABELEDMOLECULEID int8 not null, primary key (MEMOPSROOTID, LABELEDMOLECULEID));
create table nmr.IMPL_MEMOPSROOT2LABESCHE (MEMOPSROOTID int8 not null, LABELINGSCHEMEID int8 not null, primary key (MEMOPSROOTID, LABELINGSCHEMEID));
create table nmr.IMPL_MEMOPSROOT2LOCASTOR (MEMOPSROOTID int8 not null, LOCATIONSTOREID int8 not null, primary key (MEMOPSROOTID, LOCATIONSTOREID));
create table nmr.IMPL_MEMOPSROOT2METHSTOR (MEMOPSROOTID int8 not null, METHODSTOREID int8 not null, primary key (MEMOPSROOTID, METHODSTOREID));
create table nmr.IMPL_MEMOPSROOT2MOLECULES (MEMOPSROOTID int8 not null, MOLECULEID int8 not null, primary key (MEMOPSROOTID, MOLECULEID));
create table nmr.IMPL_MEMOPSROOT2MOLSYSTEMS (MEMOPSROOTID int8 not null, MOLSYSTEMID int8 not null, primary key (MEMOPSROOTID, MOLSYSTEMID));
create table nmr.IMPL_MEMOPSROOT2NMRCONSSTOR (MEMOPSROOTID int8 not null, NMRCONSTRAINTSTOREID int8 not null, primary key (MEMOPSROOTID, NMRCONSTRAINTSTOREID));
create table nmr.IMPL_MEMOPSROOT2NMRENTRSTOR (MEMOPSROOTID int8 not null, NMRENTRYSTOREID int8 not null, primary key (MEMOPSROOTID, NMRENTRYSTOREID));
create table nmr.IMPL_MEMOPSROOT2NMREXPPROT (MEMOPSROOTID int8 not null, NMREXPPROTOTYPEID int8 not null, primary key (MEMOPSROOTID, NMREXPPROTOTYPEID));
create table nmr.IMPL_MEMOPSROOT2NMRPROJ (MEMOPSROOTID int8 not null, NMRPROJECTID int8 not null, primary key (MEMOPSROOTID, NMRPROJECTID));
create table nmr.IMPL_MEMOPSROOT2NMRREFESTOR (MEMOPSROOTID int8 not null, NMRREFERENCESTOREID int8 not null, primary key (MEMOPSROOTID, NMRREFERENCESTOREID));
create table nmr.IMPL_MEMOPSROOT2REFSAMPCOMPSTOR (MEMOPSROOTID int8 not null, REFSAMPLECOMPONENTSTOREID int8 not null, primary key (MEMOPSROOTID, REFSAMPLECOMPONENTSTOREID));
create table nmr.IMPL_MEMOPSROOT2SAMPSTOR (MEMOPSROOTID int8 not null, SAMPLESTOREID int8 not null, primary key (MEMOPSROOTID, SAMPLESTOREID));
create table nmr.IMPL_MEMOPSROOT2STERSTOR (MEMOPSROOTID int8 not null, STEREOCHEMISTRYSTOREID int8 not null, primary key (MEMOPSROOTID, STEREOCHEMISTRYSTOREID));
create table nmr.IMPL_MEMOPSROOT2STRUENSE (MEMOPSROOTID int8 not null, STRUCTUREENSEMBLEID int8 not null, primary key (MEMOPSROOTID, STRUCTUREENSEMBLEID));
create table nmr.IMPL_MEMOPSROOT2TAXONOMIES (MEMOPSROOTID int8 not null, TAXONOMYID int8 not null, primary key (MEMOPSROOTID, TAXONOMYID));
create table nmr.IMPL_MEMOPSROOT2VALISTOR (MEMOPSROOTID int8 not null, VALIDATIONSTOREID int8 not null, primary key (MEMOPSROOTID, VALIDATIONSTOREID));
create table nmr.IMPL_SYMMTRACELESSMATRIX (MEMOPSDATATYPEOBJECTID int8 not null, AAXIAL FLOAT not null, ARHOMBIC FLOAT not null, ALPHA FLOAT not null, BETA FLOAT not null, GAMMA FLOAT not null, primary key (MEMOPSDATATYPEOBJECTID));
create table nmr.IMPL_URL (MEMOPSDATATYPEOBJECTID int8 not null, HOST VARCHAR(80), PASSWORD VARCHAR(80), PATH VARCHAR(254) not null, PORT INTEGER, PROTOCOL VARCHAR(32) not null, USER_ VARCHAR(80), primary key (MEMOPSDATATYPEOBJECTID));
create table nmr.INST_ABSTINST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.INST_ABSTRACTINSTRUMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, MODEL VARCHAR(80), NAME VARCHAR(80) not null, SERIAL INTEGER not null, SERIALNUMBER VARCHAR(80), ACCESSID int8 unique, CONTACTPERSONID int8, INSTRUMENTSTOREID int8 not null, MANUFACTURERID int8, primary key (DATAOBJECTID), unique (SERIAL, INSTRUMENTSTOREID));
create table nmr.INST_COLUMN (INSTRUMENTID int8 not null, COLUMNTYPE VARCHAR(80), VOLUME FLOAT, VOLUMEDISPLAYUNIT VARCHAR(32), LOADINGMETHODID int8, primary key (INSTRUMENTID));
create table nmr.INST_INSTRUMENT (ABSTRACTINSTRUMENTID int8 not null, primary key (ABSTRACTINSTRUMENTID));
create table nmr.INST_INSTRUMENTSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.INST_INSTSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.INST_NMRPROBE (ABSTRACTINSTRUMENTID int8 not null, DIAMETER FLOAT, PROBETYPE VARCHAR(80), primary key (ABSTRACTINSTRUMENTID));
create table nmr.INST_NMRPROBE2CITATIONS (CITATIONID int8 not null, NMRPROBEID int8 not null, primary key (NMRPROBEID, CITATIONID));
create table nmr.INST_NMRSPEC2CITATIONS (CITATIONID int8 not null, NMRSPECTROMETERID int8 not null, primary key (NMRSPECTROMETERID, CITATIONID));
create table nmr.INST_NMRSPECTROMETER (ABSTRACTINSTRUMENTID int8 not null, NOMINALFREQ VARCHAR(32), PROTONFREQ FLOAT, primary key (ABSTRACTINSTRUMENTID));
create table nmr.KWDF_KEYWDEFI2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.KWDF_KEYWDEFISTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.KWDF_KEYWDEFI_TARGNAME (KEYWORDDEFINITIONID int8 not null, TARGETNAME VARCHAR(32) not null, primary key (KEYWORDDEFINITIONID, TARGETNAME));
create table nmr.KWDF_KEYWORDDEFINITION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, EXPLANATION TEXT, KEYWORD VARCHAR(32) not null, NAME VARCHAR(80), ACCESSID int8 unique, KEYWORDDEFINITIONSTOREID int8 not null, primary key (DATAOBJECTID), unique (KEYWORD, KEYWORDDEFINITIONSTOREID));
create table nmr.KWDF_KEYWORDDEFINITIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CONTEXT VARCHAR(32) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CONTEXT));
create table nmr.LMOL_ATOMLABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, MASSNUMBER INTEGER not null, SERIAL INTEGER not null, WEIGHT FLOAT not null, ACCESSID int8 unique, RESLABELID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, RESLABELID));
create table nmr.LMOL_ATOMLABEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_LABELEDMIXTURE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, AVERAGECOMPOSITIONID int8, LABELEDMOLECULEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, LABELEDMOLECULEID));
create table nmr.LMOL_LABELEDMOLECULE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.LMOL_LABEMIXT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_LABEMOLE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_MOLLABEFRAC2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_MOLLABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, LABELEDMOLECULEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, LABELEDMOLECULEID));
create table nmr.LMOL_MOLLABEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_MOLLABELFRACTION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, WEIGHT FLOAT not null, ACCESSID int8 unique, LABELEDMIXTUREID int8 not null, MOLLABELID int8 not null, primary key (DATAOBJECTID), unique (LABELEDMIXTUREID, MOLLABELID));
create table nmr.LMOL_RESLABEFRAC2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_RESLABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, RESID INTEGER not null, ACCESSID int8 unique, MOLLABELID int8 not null, primary key (DATAOBJECTID), unique (RESID, MOLLABELID));
create table nmr.LMOL_RESLABEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LMOL_RESLABELFRACTION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ISOTOPOMERSERIAL INTEGER not null, SCHEMENAME VARCHAR(32) not null, WEIGHT FLOAT not null, ACCESSID int8 unique, RESLABELID int8 not null, primary key (DATAOBJECTID), unique (ISOTOPOMERSERIAL, SCHEMENAME, RESLABELID));
create table nmr.LMOL_SINGLEATOMLABEL (ATOMLABELID int8 not null, ATOMNAME VARCHAR(32) not null, primary key (ATOMLABELID));
create table nmr.LMOL_UNIFORMATOMLABEL (ATOMLABELID int8 not null, ELEMENTNAME VARCHAR(32) not null, primary key (ATOMLABELID));
create table nmr.LOCA_LOCASTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LOCA_LOCATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LOCATIONTYPE VARCHAR(80), NAME VARCHAR(80) not null, PRESSURE FLOAT, PRESSUREDISPLAYUNIT VARCHAR(32), SERIAL INTEGER not null, TEMPDISPLAYUNIT VARCHAR(32), TEMPERATURE FLOAT, ACCESSID int8 unique, LOCATIONID int8, LOCATIONSTOREID int8 not null, ORGANISATIONID int8, primary key (DATAOBJECTID), unique (SERIAL, LOCATIONSTOREID));
create table nmr.LOCA_LOCATION2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.LOCA_LOCATIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.METH_METHOD (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(80), PROCEDURE_ TEXT, SERIAL INTEGER not null, TASK VARCHAR(80), ACCESSID int8 unique, INSTRUMENTID int8, METHODSTOREID int8 not null, SOFTWAREID int8, primary key (DATAOBJECTID), unique (SERIAL, METHODSTOREID));
create table nmr.METH_METHOD2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.METH_METHOD2CITATIONS (CITATIONID int8 not null, METHODID int8 not null, primary key (METHODID, CITATIONID));
create table nmr.METH_METHODSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.METH_METHSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.METH_PARAMETER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80) not null, PARAMTYPE VARCHAR(32), SERIAL INTEGER not null, UNIT VARCHAR(32), VALUE VARCHAR(254), ACCESSID int8 unique, METHODID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, METHODID));
create table nmr.METH_PARAMETER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.METH_SOFTWARE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(80) not null, VENDORADDRESS VARCHAR(254), VENDORNAME VARCHAR(254), VENDORWEBADDRESS TEXT, VERSION VARCHAR(80) not null, ACCESSID int8 unique, METHODSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, VERSION, METHODSTOREID));
create table nmr.METH_SOFTWARE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.METH_SOFTWARE2CITATIONS (CITATIONID int8 not null, SOFTWAREID int8 not null, primary key (SOFTWAREID, CITATIONID));
create table nmr.METH_SOFTWARE_TASKS (SOFTWAREID int8 not null, TASK VARCHAR(80) not null, order_ int8 not null, primary key (SOFTWAREID, order_));
create table nmr.MOLE_ALIGNMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ALIGNLENGTH INTEGER, ALIGNMENTPROGRAM VARCHAR(254), ALIGNMENTSCORE FLOAT, DBREFALIGNBEGIN INTEGER, DBREFALIGNEND INTEGER, DETAILS TEXT, HOMOLOGYRATIO FLOAT, NIDENTICAL INTEGER, NPOSITIVE INTEGER, SERIAL INTEGER not null, ACCESSID int8 unique, DBREFID int8 not null, MOLSEQFRAGMENTID int8, MOLECULEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, MOLECULEID));
create table nmr.MOLE_ALIGNMENT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLECULE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CALCISOELECTRICPOINT FLOAT, DETAILS TEXT, FRAGMENTDETAILS VARCHAR(254), ISFINALISED BOOLEAN not null, LONGNAME VARCHAR(254), MUTATIONDETAILS VARCHAR(254), NAME VARCHAR(80) not null, SEQDETAILS VARCHAR(254), SMILES TEXT, SMILESTYPE VARCHAR(32), ACCESSID int8 unique, NATURALSOURCEID int8, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.MOLE_MOLECULE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLECULE2CITATIONS (CITATIONID int8 not null, MOLECULEID int8 not null, primary key (MOLECULEID, CITATIONID));
create table nmr.MOLE_MOLECULESYSNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80), NAMINGSYSTEM VARCHAR(32) not null, ACCESSID int8 unique, MOLECULEID int8 not null, primary key (DATAOBJECTID), unique (NAMINGSYSTEM, MOLECULEID));
create table nmr.MOLE_MOLECULE_COMMNAME (MOLECULEID int8 not null, COMMONNAME VARCHAR(80) not null, order_ int8 not null, primary key (MOLECULEID, order_));
create table nmr.MOLE_MOLECULE_FUNCTIONS (MOLECULEID int8 not null, FUNCTION VARCHAR(80) not null, order_ int8 not null, primary key (MOLECULEID, order_));
create table nmr.MOLE_MOLECULE_KEYWORDS (MOLECULEID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (MOLECULEID, order_));
create table nmr.MOLE_MOLESYSNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLRESIDUE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, LINKING VARCHAR(32) not null, SEQCODE INTEGER not null, SEQINSERTCODE VARCHAR(80) not null, SERIAL INTEGER not null, ACCESSID int8 unique, CHEMCOMPID int8 not null, MOLSEQFRAGMENTID int8, MOLECULEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, MOLECULEID));
create table nmr.MOLE_MOLRESIDUE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLRESIDUE2ISOTLABE (MOLRESIDUEID int8 not null, ISOTOPELABELID int8 not null, primary key (MOLRESIDUEID, ISOTOPELABELID));
create table nmr.MOLE_MOLRESLINK (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIHEDRALANGLE INTEGER, ACCESSID int8 unique, MOLECULEID int8 not null, primary key (DATAOBJECTID));
create table nmr.MOLE_MOLRESLINK2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLRESLINKEND (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LINKCODE VARCHAR(32) not null, ACCESSID int8 unique, MOLRESLINKID int8, MOLRESIDUEID int8 not null, primary key (DATAOBJECTID), unique (LINKCODE, MOLRESIDUEID));
create table nmr.MOLE_MOLRESLINKEND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLSEQFRAG2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLE_MOLSEQFRAGMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ACCESSID int8 unique, MOLECULEID int8 not null, NATURALSOURCEID int8, primary key (DATAOBJECTID));
create table nmr.MOLS_ATOM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32) not null, ACCESSID int8 unique, RESIDUEID int8 not null, ATOMSETID int8, primary key (DATAOBJECTID), unique (NAME, RESIDUEID));
create table nmr.MOLS_ATOM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_CHAIFRAG2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_CHAIINTE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_CHAIINTE2CHAINS (CHAINID int8 not null, CHAININTERACTIONID int8 not null, primary key (CHAININTERACTIONID, CHAINID));
create table nmr.MOLS_CHAIN (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CHEMEXCHANGESTATE VARCHAR(80), CODE VARCHAR(80) not null, CONFORMATIONALISOMER VARCHAR(80), DETAILS VARCHAR(254), MAGNEQUIVALENCECODE VARCHAR(80), PDBONELETTERCODE VARCHAR(80) not null, PHYSICALSTATE VARCHAR(80), ROLE VARCHAR(80), ACCESSID int8 unique, MOLSYSTEMID int8 not null, MOLECULEID int8 not null, primary key (DATAOBJECTID), unique (CODE, MOLSYSTEMID));
create table nmr.MOLS_CHAIN2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_CHAINFRAGMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ISLINEARPOLYMER BOOLEAN not null, MOLTYPE VARCHAR(32) not null, SERIAL INTEGER not null, ACCESSID int8 unique, CHAINID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHAINID));
create table nmr.MOLS_CHAININTERACTION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, INTERACTIONTYPE VARCHAR(80), ACCESSID int8 unique, MOLSYSTEMID int8 not null, primary key (DATAOBJECTID));
create table nmr.MOLS_MOLSYSTEM (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CODE VARCHAR(32) not null, DETAILS VARCHAR(254), HASCHEMEXCHANGE BOOLEAN, NAME VARCHAR(254), ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CODE));
create table nmr.MOLS_MOLSYSTEM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_MOLSYSTEM2CITATIONS (CITATIONID int8 not null, MOLSYSTEMID int8 not null, primary key (MOLSYSTEMID, CITATIONID));
create table nmr.MOLS_MOLSYSTEM2DBREFE (DBREFERENCEID int8 not null, MOLSYSTEMID int8 not null, primary key (MOLSYSTEMID, DBREFERENCEID));
create table nmr.MOLS_MOLSYSTEMLINK (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIHEDRALANGLE INTEGER, ACCESSID int8 unique, MOLSYSTEMID int8 not null, primary key (DATAOBJECTID));
create table nmr.MOLS_MOLSYSTEMLINKEND (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LINKCODE VARCHAR(32) not null, ACCESSID int8 unique, MOLSYSTEMLINKID int8, RESIDUEID int8 not null, primary key (DATAOBJECTID), unique (LINKCODE, RESIDUEID));
create table nmr.MOLS_MOLSYSTEMSYSNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80), NAMINGSYSTEM VARCHAR(32) not null, ACCESSID int8 unique, MOLSYSTEMID int8 not null, primary key (DATAOBJECTID), unique (NAMINGSYSTEM, MOLSYSTEMID));
create table nmr.MOLS_MOLSYSTEM_COMMNAME (MOLSYSTEMID int8 not null, COMMONNAME VARCHAR(254) not null, order_ int8 not null, primary key (MOLSYSTEMID, order_));
create table nmr.MOLS_MOLSYSTEM_FUNCTIONS (MOLSYSTEMID int8 not null, FUNCTION VARCHAR(80) not null, order_ int8 not null, primary key (MOLSYSTEMID, order_));
create table nmr.MOLS_MOLSYSTEM_KEYWORDS (MOLSYSTEMID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (MOLSYSTEMID, order_));
create table nmr.MOLS_MOLSYSTLINK2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_MOLSYSTLINKEND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_MOLSYSTSYSNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_NONCOVABOND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_NONCOVABOND2ATOMS (ATOMID int8 not null, NONCOVALENTBONDID int8 not null, primary key (NONCOVALENTBONDID, ATOMID));
create table nmr.MOLS_NONCOVALENTBOND (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ACCESSID int8 unique, MOLSYSTEMID int8 not null, primary key (DATAOBJECTID));
create table nmr.MOLS_RESIDUE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, DETAILS VARCHAR(254), LINKING VARCHAR(32) not null, SEQCODE INTEGER not null, SEQID INTEGER not null, SEQINSERTCODE VARCHAR(80) not null, ACCESSID int8 unique, CHAINID int8 not null, CHAINFRAGMENTID int8, MOLRESIDUEID int8, order_residues_ int4, primary key (DATAOBJECTID), unique (SEQID, CHAINID));
create table nmr.MOLS_RESIDUE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_STRUCTUREGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAIL VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, MOLSYSTEMID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, MOLSYSTEMID));
create table nmr.MOLS_STRUGROU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.MOLS_STRUGROU2MODELS (STRUCTUREGROUPID int8 not null, MODELID int8 not null, primary key (STRUCTUREGROUPID, MODELID));
create table nmr.NMRC_ABSTCONS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_ABSTCONS2NMRCONSVALI (NMRCONSTRAINTVALIDATIONID int8 not null, NMRCONSTRAINTID int8 not null, primary key (NMRCONSTRAINTID, NMRCONSTRAINTVALIDATIONID));
create table nmr.NMRC_ABSTCONSLIST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_ABSTCONSLIST2NMRCONSLISTVALI (NMRCONSTRAINTLISTVALIDATIONID int8 not null, NMRCONSTRAINTLISTID int8 not null, primary key (NMRCONSTRAINTLISTID, NMRCONSTRAINTLISTVALIDATIONID));
create table nmr.NMRC_ABSTCONSLIST_EXPESERI (ABSTRACTCONSTRAINTLISTID int8 not null, EXPERIMENTSERIAL INTEGER not null, primary key (ABSTRACTCONSTRAINTLISTID, EXPERIMENTSERIAL));
create table nmr.NMRC_ABSTCONSLIST_MEASLISTSERI (ABSTRACTCONSTRAINTLISTID int8 not null, MEASURELISTSERIAL INTEGER not null, primary key (ABSTRACTCONSTRAINTLISTID, MEASURELISTSERIAL));
create table nmr.NMRC_ABSTRACTCONSTRAINT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), ORIGDATA FLOAT, SERIAL INTEGER not null, WEIGHT FLOAT not null, ACCESSID int8 unique, METHODID int8, primary key (DATAOBJECTID));
create table nmr.NMRC_ABSTRACTCONSTRAINTLIST (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(80), SERIAL INTEGER not null, UNIT VARCHAR(32), USEDFORCALCULATION BOOLEAN not null, ACCESSID int8 unique, CONDITIONSTATEID int8, METHODID int8, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_CHAINSTATELINK (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CHAINSTATESERIAL INTEGER not null, CHAINSTATESETSERIAL INTEGER not null, ACCESSID int8 unique, FIXEDRESONANCEID int8 not null, primary key (DATAOBJECTID), unique (CHAINSTATESETSERIAL, FIXEDRESONANCEID));
create table nmr.NMRC_CHAISTATLINK2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_CHEMSHIFTCONSTRAINT (SINGLECONSTRAINTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_CHEMSHIFTCONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, ISOTOPECODE VARCHAR(32), primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_CONDITIONSTATE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, DYNAMICALIGNMENTID int8 unique, STATICALIGNMENTID int8 unique, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_CONDSTAT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_CONSGROU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_CONSGROU2CONS (CONSTRAINTID int8 not null, CONSTRAINTGROUPID int8 not null, primary key (CONSTRAINTGROUPID, CONSTRAINTID));
create table nmr.NMRC_CONSPEAKCONT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_CONSTRAINTGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_CONSTRAINTPEAKCONTRIB (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DATASOURCESERIAL INTEGER not null, EXPERIMENTSERIAL INTEGER not null, PEAKLISTSERIAL INTEGER not null, PEAKSERIAL INTEGER not null, ACCESSID int8 unique, CONSTRAINTID int8 not null, primary key (DATAOBJECTID), unique (DATASOURCESERIAL, EXPERIMENTSERIAL, PEAKLISTSERIAL, PEAKSERIAL, CONSTRAINTID));
create table nmr.NMRC_CSACONSTRAINT (SINGLECONSTRAINTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_CSACONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, ISOTOPECODE VARCHAR(32), primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_DIHECONS2RESONANCES (RESONANCEID int8 not null, DIHEDRALCONSTRAINTID int8 not null, order_resonances_ int4 not null, primary key (DIHEDRALCONSTRAINTID, order_resonances_));
create table nmr.NMRC_DIHECONSITEM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_DIHEDRALCONSTRAINT (ABSTRACTCONSTRAINTID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTID));
create table nmr.NMRC_DIHEDRALCONSTRAINTITEM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ERROR FLOAT, LOWERLIMIT FLOAT not null, SERIAL INTEGER not null, TARGETVALUE FLOAT, UPPERLIMIT FLOAT not null, ACCESSID int8 unique, CONSTRAINTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CONSTRAINTID));
create table nmr.NMRC_DIHEDRALCONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_DISTANCECONSTRAINT (SINGLECONSTRAINTID int8 not null, BACKCALCVOLUME FLOAT, PARENTLISTID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_DISTANCECONSTRAINTITEM (PAIRWISECONSTRAINTITEMID int8 not null, CONSTRAINTID int8 not null, primary key (PAIRWISECONSTRAINTITEMID));
create table nmr.NMRC_DISTANCECONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_FIXEATOMSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_FIXEATOMSET2ATOMS (ATOMID int8 not null, FIXEDATOMSETID int8 not null, primary key (FIXEDATOMSETID, ATOMID));
create table nmr.NMRC_FIXEDATOMSET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(32), SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_FIXEDRESONANCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), ISOTOPECODE VARCHAR(32) not null, NAME VARCHAR(32), RESONANCESERIAL INTEGER, SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, RESONANCESETID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_FIXEDRESONANCESET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_FIXERESO2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_FIXERESOSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_FIXERESOSET2ATOMSETS (ATOMSETID int8 not null, RESONANCESETID int8 not null, primary key (RESONANCESETID, ATOMSETID));
create table nmr.NMRC_HBONDCONSTRAINT (SINGLECONSTRAINTID int8 not null, PARENTLISTID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_HBONDCONSTRAINTITEM (PAIRWISECONSTRAINTITEMID int8 not null, CONSTRAINTID int8 not null, primary key (PAIRWISECONSTRAINTITEMID));
create table nmr.NMRC_HBONDCONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_JCOUPLINGCONSTRAINT (SINGLECONSTRAINTID int8 not null, PARENTLISTID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_JCOUPLINGCONSTRAINTITEM (PAIRWISECONSTRAINTITEMID int8 not null, CONSTRAINTID int8 not null, primary key (PAIRWISECONSTRAINTITEMID));
create table nmr.NMRC_JCOUPLINGCONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_NMRCONSSTOR2ADDISTRUANAL (ADDITIONALSTRUCTUREANALYSISID int8 not null, ADDITIONALCONSTRAINTSTOREID int8 not null, primary key (ADDITIONALCONSTRAINTSTOREID, ADDITIONALSTRUCTUREANALYSISID));
create table nmr.NMRC_NMRCONSSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_NMRCONSSTOR2CHAISTAT (CHAINSTATEID int8 not null, NMRCONSTRAINTSTOREID int8 not null, primary key (NMRCONSTRAINTSTOREID, CHAINSTATEID));
create table nmr.NMRC_NMRCONSTRAINTSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (TOPOBJECTID), unique (SEGMENT, SERIAL));
create table nmr.NMRC_PAIRCONSITEM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_PAIRCONSITEM2RESONANCES (RESONANCEID int8 not null, PAIRWISECONSTRAINTITEMID int8 not null, primary key (PAIRWISECONSTRAINTITEMID, RESONANCEID));
create table nmr.NMRC_PAIRWISECONSTRAINTITEM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ACCESSID int8 unique, FIRSTRESONANCEID int8, primary key (DATAOBJECTID));
create table nmr.NMRC_RDCCONSTRAINT (SINGLECONSTRAINTID int8 not null, VECTORLENGTH FLOAT, PARENTLISTID int8 not null, primary key (SINGLECONSTRAINTID));
create table nmr.NMRC_RDCCONSTRAINTITEM (PAIRWISECONSTRAINTITEMID int8 not null, CONSTRAINTID int8 not null, primary key (PAIRWISECONSTRAINTITEMID));
create table nmr.NMRC_RDCCONSTRAINTLIST (ABSTRACTCONSTRAINTLISTID int8 not null, primary key (ABSTRACTCONSTRAINTLISTID));
create table nmr.NMRC_RESCOORD (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, X FLOAT, Y FLOAT, Z FLOAT, ACCESSID int8 unique, RESONANCEID int8 not null, STRUCTUREID int8 not null, primary key (DATAOBJECTID), unique (RESONANCEID, STRUCTUREID));
create table nmr.NMRC_RESCOORD2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_RESSTRU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_RESSTRUCTURE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LABEL VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_SINGLECONSTRAINT (ABSTRACTCONSTRAINTID int8 not null, ERROR FLOAT, LOWERLIMIT FLOAT, TARGETVALUE FLOAT, UPPERLIMIT FLOAT, primary key (ABSTRACTCONSTRAINTID));
create table nmr.NMRC_VIOLATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CALCVALUE FLOAT not null, CALCVALUEERROR FLOAT, FRACTIONVIOLATED FLOAT not null, VIOLATION FLOAT not null, ACCESSID int8 unique, CONSTRAINTID int8 not null, METHODID int8, VIOLATIONLISTID int8 not null, primary key (DATAOBJECTID), unique (CONSTRAINTID, VIOLATIONLISTID));
create table nmr.NMRC_VIOLATION2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_VIOLATIONLIST (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), SERIAL INTEGER not null, ACCESSID int8 unique, NMRCONSTRAINTSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRCONSTRAINTSTOREID));
create table nmr.NMRC_VIOLLIST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRC_VIOLLIST2MOLSTRU (MOLSTRUCTUREID int8 not null, VIOLATIONLISTID int8 not null, primary key (VIOLATIONLISTID, MOLSTRUCTUREID));
create table nmr.NMRR_CHEMATOMNMRREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, MEANVALUE FLOAT, NAME VARCHAR(32) not null, RANDOMCOILVALUE FLOAT, REFPOINT FLOAT not null, REFVALUE FLOAT not null, SERIAL INTEGER not null, STDDEV FLOAT, SUBTYPE INTEGER not null, VALUEPERPOINT FLOAT, ACCESSID int8 unique, CHEMCOMPNMRREFID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHEMCOMPNMRREFID));
create table nmr.NMRR_CHEMATOMNMRREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRR_CHEMATOMNMRREF_DIST (CHEMATOMNMRREFID int8 not null, DISTRIBUTION FLOAT not null, order_ int8 not null, primary key (CHEMATOMNMRREFID, order_));
create table nmr.NMRR_CHEMATOMSHIFCORR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRR_CHEMATOMSHIFTCORR (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CCPCODE VARCHAR(80) not null, MOLTYPE VARCHAR(32) not null, SEQOFFSET INTEGER not null, VALUE FLOAT, ACCESSID int8 unique, CHEMATOMNMRREFID int8 not null, primary key (DATAOBJECTID), unique (CCPCODE, MOLTYPE, SEQOFFSET, CHEMATOMNMRREFID));
create table nmr.NMRR_CHEMCOMPNMRREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), SOURCENAME VARCHAR(80) not null, ACCESSID int8 unique, NMRREFERENCESTOREID int8 not null, primary key (DATAOBJECTID), unique (SOURCENAME, NMRREFERENCESTOREID));
create table nmr.NMRR_CHEMCOMPNMRREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRR_CHEMCOMPVARNMRREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DESCRIPTOR VARCHAR(80) not null, LINKING VARCHAR(32) not null, ACCESSID int8 unique, CHEMCOMPNMRREFID int8 not null, primary key (DATAOBJECTID), unique (DESCRIPTOR, LINKING, CHEMCOMPNMRREFID));
create table nmr.NMRR_CHEMCOMPVARNMRREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRR_CHEMCOMPVARNMRREF2CHEMATOMNMRREFS (CHEMATOMNMRREFID int8 not null, CHEMCOMPVARNMRREFID int8 not null, primary key (CHEMCOMPVARNMRREFID, CHEMATOMNMRREFID));
create table nmr.NMRR_NMRREFERENCESTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CCPCODE VARCHAR(80) not null, MOLTYPE VARCHAR(32) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, CCPCODE, MOLTYPE));
create table nmr.NMRR_NMRREFESTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_ATOMSITE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ISOTOPECODE VARCHAR(32) not null, MAXNUMBER INTEGER, MAXSHIFT FLOAT, MINNUMBER INTEGER not null, MINSHIFT FLOAT, NAME VARCHAR(32), NUMBERSTEP INTEGER not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMREXPPROTOTYPEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMREXPPROTOTYPEID));
create table nmr.NMRX_ATOMSITE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_EXPGRAPH (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, PEAKSIGN INTEGER, SERIAL INTEGER not null, ACCESSID int8 unique, NMREXPPROTOTYPEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMREXPPROTOTYPEID));
create table nmr.NMRX_EXPGRAPH2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_EXPMEAS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_EXPMEAS2ATOMSITES (ATOMSITEID int8 not null, EXPMEASUREMENTID int8 not null, order_atomSites_ int4 not null, primary key (EXPMEASUREMENTID, order_atomSites_));
create table nmr.NMRX_EXPMEASUREMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, MEASUREMENTTYPE VARCHAR(80) not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMREXPPROTOTYPEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMREXPPROTOTYPEID));
create table nmr.NMRX_EXPMEAS_ATOMSITEWEIG (EXPMEASUREMENTID int8 not null, ATOMSITEWEIGHT FLOAT not null, order_ int8 not null, primary key (EXPMEASUREMENTID, order_));
create table nmr.NMRX_EXPSTEP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, STEPNUMBER INTEGER not null, ACCESSID int8 unique, EXPGRAPHID int8 not null, EXPMEASUREMENTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, EXPGRAPHID));
create table nmr.NMRX_EXPSTEP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_EXPTRAN2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_EXPTRAN2ATOMSITES (ATOMSITEID int8 not null, EXPTRANSFERID int8 not null, primary key (EXPTRANSFERID, ATOMSITEID));
create table nmr.NMRX_EXPTRANSFER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, TRANSFERTOSELF BOOLEAN not null, TRANSFERTYPE VARCHAR(32), ACCESSID int8 unique, EXPGRAPHID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, EXPGRAPHID));
create table nmr.NMRX_NMREXPPROT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_NMREXPPROTOTYPE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, CATEGORY VARCHAR(80) not null, DETAILS VARCHAR(254), NAME VARCHAR(80) not null, SERIAL INTEGER not null, SYNONYM VARCHAR(80), ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, SERIAL));
create table nmr.NMRX_NMREXPPROT_KEYWORDS (NMREXPPROTOTYPEID int8 not null, KEYWORD VARCHAR(80) not null, order_ int8 not null, primary key (NMREXPPROTOTYPEID, order_));
create table nmr.NMRX_REFEXPDIM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIM INTEGER not null, ACCESSID int8 unique, REFEXPERIMENTID int8 not null, primary key (DATAOBJECTID), unique (DIM, REFEXPERIMENTID));
create table nmr.NMRX_REFEXPDIM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_REFEXPDIMREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CONSTANTTIME VARCHAR(32) not null, GROUPINGID INTEGER not null, SERIAL INTEGER not null, ACCESSID int8 unique, EXPMEASUREMENTID int8 not null, REFEXPDIMID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, REFEXPDIMID));
create table nmr.NMRX_REFEXPDIMREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_REFEXPDIMREF2EXPSTEPS (EXPSTEPID int8 not null, REFEXPDIMREFID int8 not null, primary key (REFEXPDIMREFID, EXPSTEPID));
create table nmr.NMRX_REFEXPDIMREF_COUPISOTCODE (REFEXPDIMREFID int8 not null, COUPLEDISOTOPECODE VARCHAR(32) not null, order_ int8 not null, primary key (REFEXPDIMREFID, order_));
create table nmr.NMRX_REFEXPDIMREF_VALISCALFACT (REFEXPDIMREFID int8 not null, VALIDSCALINGFACTOR FLOAT not null, order_ int8 not null, primary key (REFEXPDIMREFID, order_));
create table nmr.NMRX_REFEXPE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMRX_REFEXPERIMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ISREVERSED BOOLEAN not null, NAME VARCHAR(80), SERIAL INTEGER not null, SYNONYM VARCHAR(80), ACCESSID int8 unique, NMREXPPROTOTYPEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMREXPPROTOTYPEID));
create table nmr.NMRX_SYSTEMATICNAME (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80) not null, NAMINGSYSTEM VARCHAR(80) not null, ACCESSID int8 unique, REFEXPERIMENTID int8 not null, primary key (DATAOBJECTID), unique (NAMINGSYSTEM, REFEXPERIMENTID));
create table nmr.NMRX_SYSTNAME2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTDATADERI2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTDATADIM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTMEAS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTMEAS2DATADERI (DATADERIVATIONID int8 not null, INPUTMEASUREMENTID int8 not null, primary key (INPUTMEASUREMENTID, DATADERIVATIONID));
create table nmr.NMR_ABSTMEAS2NMRMEASVALI (NMRMEASUREMENTVALIDATIONID int8 not null, NMRMEASUREMENTID int8 not null, primary key (NMRMEASUREMENTID, NMRMEASUREMENTVALIDATIONID));
create table nmr.NMR_ABSTMEASLIST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTMEASLIST2NMRMEASLISTVALI (NMRMEASUREMENTLISTVALIDATIONID int8 not null, NMRMEASUREMENTLISTID int8 not null, primary key (NMRMEASUREMENTLISTID, NMRMEASUREMENTLISTVALIDATIONID));
create table nmr.NMR_ABSTPEAKDIMCONT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_ABSTRACTDATADERIVATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), SERIAL INTEGER not null, ACCESSID int8 unique, METHODID int8, primary key (DATAOBJECTID));
create table nmr.NMR_ABSTRACTDATADIM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIM INTEGER not null, FILEDIM INTEGER, ISCOMPLEX BOOLEAN not null, NUMPOINTS INTEGER not null, SHAPESERIAL INTEGER, UNIT VARCHAR(32), ACCESSID int8 unique, DATASOURCEID int8 not null, EXPDIMID int8 not null, PREDICTMETHODID int8, primary key (DATAOBJECTID), unique (DIM, DATASOURCEID));
create table nmr.NMR_ABSTRACTMEASUREMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), ERROR FLOAT not null, FIGOFMERIT FLOAT not null, VALUE FLOAT not null, ACCESSID int8 unique, METHODID int8, primary key (DATAOBJECTID));
create table nmr.NMR_ABSTRACTMEASUREMENTLIST (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, ISSIMULATED BOOLEAN not null, NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, METHODID int8, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_ABSTRACTPEAKDIMCONTRIB (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, PEAKDIMID int8 not null, PEAKDIMCOMPONENTID int8, primary key (DATAOBJECTID), unique (SERIAL, PEAKDIMID));
create table nmr.NMR_ATOMSET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_ATOMSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_CHAINSTATE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, CHAINSTATESETID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, CHAINSTATESETID));
create table nmr.NMR_CHAINSTATE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_CHAINSTATESET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), SERIAL INTEGER not null, STATESETTYPE VARCHAR(80), ACCESSID int8 unique, CHAINID int8 not null, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_CHAISTATSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_CHAISTATSET2ATOMS (ATOMID int8 not null, CHAINSTATESETID int8 not null, primary key (CHAINSTATESETID, ATOMID));
create table nmr.NMR_CHAISTATSET2RESIDUES (RESIDUEID int8 not null, CHAINSTATESETID int8 not null, primary key (CHAINSTATESETID, RESIDUEID));
create table nmr.NMR_DATADERIVATION (ABSTRACTDATADERIVATIONID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTDATADERIVATIONID));
create table nmr.NMR_DATADIMREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, LOCALVALUEPERPOINT FLOAT, REFPOINT FLOAT not null, REFVALUE FLOAT not null, ACCESSID int8 unique, DATADIMID int8 not null, EXPDIMREFID int8 not null, primary key (DATAOBJECTID), unique (DATADIMID, EXPDIMREFID));
create table nmr.NMR_DATADIMREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DATALIST (DERIVEDDATALISTID int8 not null, DEFINITION TEXT, NAME VARCHAR(80), SF FLOAT, UNIT VARCHAR(32) not null, primary key (DERIVEDDATALISTID));
create table nmr.NMR_DATALIST2CITATIONS (CITATIONID int8 not null, DATALISTID int8 not null, primary key (DATALISTID, CITATIONID));
create table nmr.NMR_DATASOURCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DATATYPE VARCHAR(80) not null, DETAILS TEXT, ISNORMALSTORAGE BOOLEAN not null, ISSIMULATED BOOLEAN not null, NAME VARCHAR(80) not null, NOISELEVEL FLOAT, NUMDIM INTEGER not null, NUMSHAPES INTEGER not null, NUMSPARSEPOINTS INTEGER not null, RECORDNUMBER INTEGER not null, SCALE FLOAT not null, SERIAL INTEGER not null, SIGNALLEVEL FLOAT, STORAGEDETAILS TEXT, ACCESSID int8 unique, ACTIVEPEAKLISTID int8, COMPRESSMETHODID int8, DATASTOREID int8, EXPERIMENTID int8 not null, PROCESSMETHODID int8, PROCESSEDFROMID int8, SNMETHODID int8, primary key (DATAOBJECTID), unique (SERIAL, EXPERIMENTID));
create table nmr.NMR_DATASOURCE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DATASOURCEIMAGE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, DATASOURCEID int8 not null, DATASTOREID int8 not null unique, primary key (DATAOBJECTID), unique (SERIAL, DATASOURCEID));
create table nmr.NMR_DATASOURIMAG2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DATUM (DERIVEDDATAID int8 not null, DERIVATIONID int8 not null, primary key (DERIVEDDATAID));
create table nmr.NMR_DERIDATA2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DERIDATALIST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DERIVEDDATA (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ERROR FLOAT, FIGOFMERIT FLOAT not null, SERIAL INTEGER not null, VALUE FLOAT, ACCESSID int8 unique, primary key (DATAOBJECTID));
create table nmr.NMR_DERIVEDDATALIST (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, SERIAL INTEGER not null, ACCESSID int8 unique, METHODID int8, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_DIMENSIONSCALING (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ACCESSID int8 unique, DATADIMID int8 not null, EXPDIMREFID int8 not null, primary key (DATAOBJECTID), unique (DATADIMID, EXPDIMREFID));
create table nmr.NMR_DIMESCAL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_DIMESCAL_SCALFACT (DIMENSIONSCALINGID int8 not null, SCALINGFACTOR FLOAT not null, order_ int8 not null, primary key (DIMENSIONSCALINGID, order_));
create table nmr.NMR_DIPOLARRELAXATION (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTID));
create table nmr.NMR_DIPOLARRELAXLIST (ABSTRACTMEASUREMENTLISTID int8 not null, SF FLOAT, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_EXPCHAINSTATE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, WEIGHT FLOAT not null, ACCESSID int8 unique, CHAINSTATEID int8 not null, EXPERIMENTID int8 not null, primary key (DATAOBJECTID), unique (CHAINSTATEID, EXPERIMENTID));
create table nmr.NMR_EXPCHAISTAT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPDIM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIM INTEGER not null, ISACQUISITION BOOLEAN not null, ACCESSID int8 unique, EXPERIMENTID int8 not null, REFEXPDIMID int8, primary key (DATAOBJECTID), unique (DIM, EXPERIMENTID));
create table nmr.NMR_EXPDIM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPDIMREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, BASEFREQUENCY FLOAT, CONSTANTTIMEPERIOD FLOAT, DISPLAYNAME VARCHAR(32), GROUPINGNUMBER INTEGER not null, ISAXISREVERSED BOOLEAN not null, ISFOLDED BOOLEAN not null, MAXALIASEDFREQ FLOAT, MEASUREMENTTYPE VARCHAR(80) not null, MINALIASEDFREQ FLOAT, NAME VARCHAR(32), NOMINALREFVALUE FLOAT, SERIAL INTEGER not null, SF FLOAT not null, UNIT VARCHAR(32), VARIABLEINCRFRACTION FLOAT, ACCESSID int8 unique, EXPDIMID int8 not null, REFEXPDIMREFID int8, primary key (DATAOBJECTID), unique (SERIAL, EXPDIMID));
create table nmr.NMR_EXPDIMREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPDIMREFMAPP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPDIMREFMAPPING (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, MAPPEDFROMSIGN INTEGER, ACCESSID int8 unique, DERIVEDFROMID int8 not null, EXPDIMREFID int8 not null, primary key (DATAOBJECTID), unique (DERIVEDFROMID, EXPDIMREFID));
create table nmr.NMR_EXPDIMREF_ISOTCODE (EXPDIMREFID int8 not null, ISOTOPECODE VARCHAR(32) not null, order_ int8 not null, primary key (EXPDIMREFID, order_));
create table nmr.NMR_EXPERIMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DATE_ TEXT, DETAILS TEXT, NAME VARCHAR(80) not null, NMRTUBETYPE VARCHAR(80), NUMDIM INTEGER not null, NUMSCANS INTEGER, SAMPLESTATE VARCHAR(80), SAMPLEVOLUME FLOAT, SERIAL INTEGER not null, SPINNINGANGLE FLOAT, SPINNINGRATE FLOAT, VOLUMEUNIT VARCHAR(32), ACCESSID int8 unique, DERIVATIONMETHODID int8, DIPOLARRELAXLISTID int8, HEXCHPROTECTIONLISTID int8, HEXCHRATELISTID int8, ISOTROPICS2LISTID int8, JCOUPLINGLISTID int8, NMRPROJECTID int8 not null, NOELISTID int8, PKALISTID int8, PROBEID int8, RAWDATAID int8, RDCLISTID int8, REFEXPERIMENTID int8, SAMPLEID int8, SAMPLECONDITIONSETID int8, SHIFTANISOTROPYLISTID int8, SHIFTDIFFERENCELISTID int8, SHIFTLISTID int8, SPECTRALDENSITYLISTID int8, SPECTROMETERID int8, T1LISTID int8, T1RHOLISTID int8, T2LISTID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_EXPERIMENT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPERIMENT2CITATIONS (CITATIONID int8 not null, EXPERIMENTID int8 not null, primary key (EXPERIMENTID, CITATIONID));
create table nmr.NMR_EXPERIMENT2DATALISTS (EXPERIMENTID int8 not null, DATALISTID int8 not null, primary key (EXPERIMENTID, DATALISTID));
create table nmr.NMR_EXPERIMENT2DERIVEDTO (DERIVEDTOID int8 not null, DERIVEDFROMID int8 not null, primary key (DERIVEDFROMID, DERIVEDTOID));
create table nmr.NMR_EXPERIMENT2LABEMIXT (LABELEDMIXTUREID int8 not null, EXPERIMENTID int8 not null, primary key (EXPERIMENTID, LABELEDMIXTUREID));
create table nmr.NMR_EXPERIMENT2MOLSYSTEMS (MOLSYSTEMID int8 not null, NMREXPERIMENTID int8 not null, primary key (NMREXPERIMENTID, MOLSYSTEMID));
create table nmr.NMR_EXPTRAN2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_EXPTRAN2EXPDIMREFS (EXPDIMREFID int8 not null, EXPTRANSFERID int8 not null, primary key (EXPTRANSFERID, EXPDIMREFID));
create table nmr.NMR_EXPTRANSFER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, MIXINGTIME FLOAT, TRANSFERSUBTYPE VARCHAR(80), TRANSFERTYPE VARCHAR(32), ACCESSID int8 unique, EXPERIMENTID int8 not null, primary key (DATAOBJECTID));
create table nmr.NMR_EXTERNALSHIFTREFERENCE (SHIFTREFERENCEID int8 not null, AXIS VARCHAR(80), LOCATION VARCHAR(80), SAMPLEGEOMETRY VARCHAR(80), primary key (SHIFTREFERENCEID));
create table nmr.NMR_FIDDATADIM (ABSTRACTDATADIMID int8 not null, ALTERNATESIGN BOOLEAN not null, FIRSTVALUE FLOAT not null, NEGATEIMAGINARY BOOLEAN not null, NUMPOINTSVALID INTEGER not null, OVERSAMPLINGINFO VARCHAR(254), PHASE0 FLOAT, PHASE1 FLOAT, POINTOFFSET INTEGER not null, VALUEPERPOINT FLOAT not null, primary key (ABSTRACTDATADIMID));
create table nmr.NMR_FREQDATADIM (ABSTRACTDATADIMID int8 not null, NUMPOINTSORIG INTEGER not null, PHASE0 FLOAT, PHASE1 FLOAT, POINTOFFSET INTEGER not null, VALUEPERPOINT FLOAT not null, primary key (ABSTRACTDATADIMID));
create table nmr.NMR_HEXCHPROTECTION (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_HEXCHPROTECTIONLIST (ABSTRACTMEASUREMENTLISTID int8 not null, PROTECTIONTYPE VARCHAR(32), REFERENCERATELISTID int8, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_HEXCHRATE (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_HEXCHRATELIST (ABSTRACTMEASUREMENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_INTERNALSHIFTREFERENCE (SHIFTREFERENCEID int8 not null, primary key (SHIFTREFERENCEID));
create table nmr.NMR_ISOTROPICS2 (DERIVEDDATAID int8 not null, MODELFIT VARCHAR(254), REXERROR FLOAT, REXVALUE FLOAT, SUMSQUAREDERRORS FLOAT, TAUEERROR FLOAT, TAUEVALUE FLOAT, TAUSERROR FLOAT, TAUSVALUE FLOAT, DERIVATIONID int8 not null, primary key (DERIVEDDATAID));
create table nmr.NMR_ISOTROPICS2DERIVATION (ABSTRACTDATADERIVATIONID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTDATADERIVATIONID));
create table nmr.NMR_ISOTROPICS2LIST (DERIVEDDATALISTID int8 not null, SF FLOAT, TAUEUNIT VARCHAR(32) not null, TAUSUNIT VARCHAR(32) not null, primary key (DERIVEDDATALISTID));
create table nmr.NMR_JCOUPLING (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTID));
create table nmr.NMR_JCOUPLINGLIST (ABSTRACTMEASUREMENTLISTID int8 not null, SF FLOAT, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_NMREXPSERI2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_NMREXPSERI2EXPE (EXPERIMENTID int8 not null, NMREXPSERIESID int8 not null, order_experiments_ int4 not null, primary key (NMREXPSERIESID, order_experiments_));
create table nmr.NMR_NMREXPSERIES (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_NMREXPSERI_CONDNAME (NMREXPSERIESID int8 not null, CONDITIONNAME VARCHAR(80) not null, order_ int8 not null, primary key (NMREXPSERIESID, order_));
create table nmr.NMR_NMRPROJECT (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.NMR_NMRPROJECT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_NOE (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTID));
create table nmr.NMR_NOELIST (ABSTRACTMEASUREMENTLISTID int8 not null, NOEVALUETYPE VARCHAR(80), REFDESCRIPTION VARCHAR(254), REFVALUE FLOAT, SF FLOAT, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_PEAK (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ANNOTATION VARCHAR(80), CONSTRAINTWEIGHT FLOAT not null, DETAILS VARCHAR(254), FIGOFMERIT FLOAT not null, SERIAL INTEGER not null, ACCESSID int8 unique, FITMETHODID int8, PEAKLISTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, PEAKLISTID));
create table nmr.NMR_PEAK2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAK2DATADERI (DATADERIVATIONID int8 not null, PEAKID int8 not null, primary key (PEAKID, DATADERIVATIONID));
create table nmr.NMR_PEAK2MEAS (MEASUREMENTID int8 not null, PEAKID int8 not null, primary key (PEAKID, MEASUREMENTID));
create table nmr.NMR_PEAK2PEAKVALI (PEAKVALIDATIONID int8 not null, PEAKID int8 not null, primary key (PEAKID, PEAKVALIDATIONID));
create table nmr.NMR_PEAKCLUS2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKCLUS2PEAKS (PEAKID int8 not null, PEAKCLUSTERID int8 not null, primary key (PEAKCLUSTERID, PEAKID));
create table nmr.NMR_PEAKCLUSTER (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ANNOTATION VARCHAR(80), CLUSTERTYPE VARCHAR(32) not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_PEAKCONT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKCONT2PEAKDIMCONT (PEAKDIMCONTRIBID int8 not null, PEAKCONTRIBID int8 not null, primary key (PEAKCONTRIBID, PEAKDIMCONTRIBID));
create table nmr.NMR_PEAKCONTRIB (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, WEIGHT FLOAT not null, ACCESSID int8 unique, PEAKID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, PEAKID));
create table nmr.NMR_PEAKDIM (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ANNOTATION VARCHAR(80), BOXWIDTH FLOAT, DECAYRATE FLOAT, DECAYRATEERROR FLOAT, DIM INTEGER not null, LINEWIDTH FLOAT, NUMALIASING INTEGER not null, PHASE FLOAT, PHASEERROR FLOAT, POSITION_ FLOAT, POSITIONERROR FLOAT, REALVALUE FLOAT, ACCESSID int8 unique, DATADIMREFID int8, PEAKID int8 not null, primary key (DATAOBJECTID), unique (DIM, PEAKID));
create table nmr.NMR_PEAKDIM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKDIM2DATADERI (DATADERIVATIONID int8 not null, PEAKDIMID int8 not null, primary key (PEAKDIMID, DATADERIVATIONID));
create table nmr.NMR_PEAKDIM2MEAS (MEASUREMENTID int8 not null, PEAKDIMID int8 not null, primary key (PEAKDIMID, MEASUREMENTID));
create table nmr.NMR_PEAKDIMCOMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKDIMCOMPONENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ANNOTATION VARCHAR(80), SCALINGFACTOR INTEGER not null, SERIAL INTEGER not null, ACCESSID int8 unique, DATADIMREFID int8, PEAKDIMID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, PEAKDIMID));
create table nmr.NMR_PEAKDIMCONTRIB (ABSTRACTPEAKDIMCONTRIBID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTPEAKDIMCONTRIBID));
create table nmr.NMR_PEAKDIMCONTRIBN (ABSTRACTPEAKDIMCONTRIBID int8 not null, primary key (ABSTRACTPEAKDIMCONTRIBID));
create table nmr.NMR_PEAKINTE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKINTENSITY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ERROR FLOAT, INTENSITYTYPE VARCHAR(32), VALUE FLOAT, ACCESSID int8 unique, METHODID int8 not null, PEAKID int8 not null, primary key (DATAOBJECTID), unique (METHODID, PEAKID));
create table nmr.NMR_PEAKLIST (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, ISSIMULATED BOOLEAN not null, NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, DATASOURCEID int8 not null, FITMETHODID int8, INTENSMETHODID int8, primary key (DATAOBJECTID), unique (SERIAL, DATASOURCEID));
create table nmr.NMR_PEAKLIST2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_PEAKLIST2PEAKLISTVALI (PEAKLISTVALIDATIONID int8 not null, PEAKLISTID int8 not null, primary key (PEAKLISTID, PEAKLISTVALIDATIONID));
create table nmr.NMR_PEAK_COMPNUMB (PEAKID int8 not null, COMPONENTNUMBER INTEGER not null, primary key (PEAKID, COMPONENTNUMBER));
create table nmr.NMR_PKA (DERIVEDDATAID int8 not null, HIGHPHPARAM FLOAT, HIGHPHPARAMERROR FLOAT, HILLCOEFF FLOAT, HILLCOEFFERROR FLOAT, LOWPHPARAM FLOAT, LOWPHPARAMERROR FLOAT, PARAMETERTYPE VARCHAR(80), PARAMETERUNIT VARCHAR(80), DERIVATIONID int8 not null, RESONANCEID int8 not null, primary key (DERIVEDDATAID));
create table nmr.NMR_PKADERIVATION (ABSTRACTDATADERIVATIONID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTDATADERIVATIONID));
create table nmr.NMR_PKALIST (DERIVEDDATALISTID int8 not null, primary key (DERIVEDDATALISTID));
create table nmr.NMR_RDC (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTID));
create table nmr.NMR_RDCLIST (ABSTRACTMEASUREMENTLISTID int8 not null, SF FLOAT, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_RESIDUEPROB (ABSTRACTPROBABILITYID int8 not null, POSSIBILITYID int8 not null, RESONANCEGROUPID int8 not null, primary key (ABSTRACTPROBABILITYID), unique (POSSIBILITYID, RESONANCEGROUPID));
create table nmr.NMR_RESIDUETYPEPROB (ABSTRACTPROBABILITYID int8 not null, POSSIBILITYID int8 not null, RESONANCEGROUPID int8 not null, primary key (ABSTRACTPROBABILITYID), unique (POSSIBILITYID, RESONANCEGROUPID));
create table nmr.NMR_RESOGROU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_RESOGROU2CHAINS (CHAINID int8 not null, RESONANCEGROUPID int8 not null, primary key (RESONANCEGROUPID, CHAINID));
create table nmr.NMR_RESONANCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), ISOTOPECODE VARCHAR(32) not null, NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, RESONANCEGROUPID int8, RESONANCESETID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_RESONANCE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_RESONANCE2CHAISTAT (CHAINSTATEID int8 not null, RESONANCEID int8 not null, primary key (RESONANCEID, CHAINSTATEID));
create table nmr.NMR_RESONANCE2COVABOUN (COVALENTLYBOUNDID2 int8 not null, COVALENTLYBOUNDID1 int8 not null, primary key (COVALENTLYBOUNDID2, COVALENTLYBOUNDID1));
create table nmr.NMR_RESONANCE2DATUMS (RESONANCEID int8 not null, DATUMID int8 not null, primary key (RESONANCEID, DATUMID));
create table nmr.NMR_RESONANCE2DIPORELA (RESONANCEID int8 not null, DIPOLARRELAXATIONID int8 not null, primary key (RESONANCEID, DIPOLARRELAXATIONID));
create table nmr.NMR_RESONANCE2ISOTS2S (RESONANCEID int8 not null, ISOTROPICS2ID int8 not null, primary key (RESONANCEID, ISOTROPICS2ID));
create table nmr.NMR_RESONANCE2JCOUPLINGS (RESONANCEID int8 not null, JCOUPLINGID int8 not null, primary key (RESONANCEID, JCOUPLINGID));
create table nmr.NMR_RESONANCE2NOES (RESONANCEID int8 not null, NOEID int8 not null, primary key (RESONANCEID, NOEID));
create table nmr.NMR_RESONANCE2PEAKDIMCONTNS (RESONANCEID int8 not null, PEAKDIMCONTRIBNID int8 not null, primary key (RESONANCEID, PEAKDIMCONTRIBNID));
create table nmr.NMR_RESONANCE2RDCS (RESONANCEID int8 not null, RDCID int8 not null, primary key (RESONANCEID, RDCID));
create table nmr.NMR_RESONANCEGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CCPCODE VARCHAR(80), DESCRIPTOR VARCHAR(80), DETAILS VARCHAR(4000), LINKING VARCHAR(32), MOLTYPE VARCHAR(32), NAME VARCHAR(80), SECSTRUCCODE VARCHAR(32), SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, RESIDUEID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_RESONANCEGROUPPROB (ABSTRACTPROBABILITYID int8 not null, ISSELECTED BOOLEAN, LINKTYPE VARCHAR(80) not null, SEQUENCEOFFSET INTEGER not null, FROMRESONANCEGROUPID int8 not null, POSSIBILITYID int8 not null, primary key (ABSTRACTPROBABILITYID), unique (LINKTYPE, FROMRESONANCEGROUPID, POSSIBILITYID));
create table nmr.NMR_RESONANCEPROB (ABSTRACTPROBABILITYID int8 not null, POSSIBILITYID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTPROBABILITYID), unique (POSSIBILITYID, RESONANCEID));
create table nmr.NMR_RESONANCESET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_RESONANCE_ASSINAME (RESONANCEID int8 not null, ASSIGNNAME VARCHAR(32) not null, order_ int8 not null, primary key (RESONANCEID, order_));
create table nmr.NMR_RESOSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_RESOSET2ATOMSETS (ATOMSETID int8 not null, RESONANCESETID int8 not null, primary key (RESONANCESETID, ATOMSETID));
create table nmr.NMR_SAMPCOND2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_SAMPCONDSET2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_SAMPCONDSET2CITATIONS (CITATIONID int8 not null, SAMPLECONDITIONSETID int8 not null, primary key (SAMPLECONDITIONSETID, CITATIONID));
create table nmr.NMR_SAMPDATADIM_POINERRO (SAMPLEDDATADIMID int8 not null, POINTERROR FLOAT not null, order_ int8 not null, primary key (SAMPLEDDATADIMID, order_));
create table nmr.NMR_SAMPDATADIM_POINVALU (SAMPLEDDATADIMID int8 not null, POINTVALUE FLOAT not null, order_ int8 not null, primary key (SAMPLEDDATADIMID, order_));
create table nmr.NMR_SAMPLECONDITION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CONDITION VARCHAR(80) not null, ERROR FLOAT, UNIT VARCHAR(80), VALUE FLOAT, ACCESSID int8 unique, SAMPLECONDITIONSETID int8 not null, primary key (DATAOBJECTID), unique (CONDITION, SAMPLECONDITIONSETID));
create table nmr.NMR_SAMPLECONDITIONSET (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(32), SERIAL INTEGER not null, ACCESSID int8 unique, NMRPROJECTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_SAMPLEDDATADIM (ABSTRACTDATADIMID int8 not null, CONDITIONVARIED VARCHAR(80), DETAILS VARCHAR(254), primary key (ABSTRACTDATADIMID));
create table nmr.NMR_SHIFREFE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_SHIFREFE2EXPE (EXPERIMENTID int8 not null, SHIFTREFERENCEID int8 not null, primary key (SHIFTREFERENCEID, EXPERIMENTID));
create table nmr.NMR_SHIFT (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_SHIFTANISOTROPY (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_SHIFTANISOTROPYLIST (ABSTRACTMEASUREMENTLISTID int8 not null, SF FLOAT, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_SHIFTDIFFERENCE (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_SHIFTDIFFERENCELIST (ABSTRACTMEASUREMENTLISTID int8 not null, DIFFERENCETYPE VARCHAR(32), REFERENCESHIFTLISTID int8, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_SHIFTLIST (ABSTRACTMEASUREMENTLISTID int8 not null, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_SHIFTREFERENCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ATOMGROUP VARCHAR(80) not null, INDIRECTSHIFTRATIO FLOAT8, ISOTOPECODE VARCHAR(32) not null, MOLNAME VARCHAR(80) not null, REFERENCETYPE VARCHAR(32) not null, SERIAL INTEGER not null, UNIT VARCHAR(32) not null, VALUE FLOAT not null, ACCESSID int8 unique, CITATIONID int8, NMRPROJECTID int8 not null, SHIFTRATIOCITATIONID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_SPARSAMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_SPARSAMP_POINNUMB (SPARSESAMPLINGID int8 not null, POINTNUMBER INTEGER not null, order_ int8 not null, primary key (SPARSESAMPLINGID, order_));
create table nmr.NMR_SPARSESAMPLING (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DIM INTEGER not null, MINPOINTSPERVECTOR INTEGER, PREDJ FLOAT, PREDT2 FLOAT, ACCESSID int8 unique, DATASOURCEID int8 not null, primary key (DATAOBJECTID), unique (DIM, DATASOURCEID));
create table nmr.NMR_SPECDENS2RESONANCES (RESONANCEID int8 not null, SPECTRALDENSITYID int8 not null, primary key (SPECTRALDENSITYID, RESONANCEID));
create table nmr.NMR_SPECTRALDENSITY (DERIVEDDATAID int8 not null, FREQUENCY FLOAT, DERIVATIONID int8 not null, primary key (DERIVEDDATAID));
create table nmr.NMR_SPECTRALDENSITYDERIVATION (ABSTRACTDATADERIVATIONID int8 not null, PARENTLISTID int8 not null, primary key (ABSTRACTDATADERIVATIONID));
create table nmr.NMR_SPECTRALDENSITYLIST (DERIVEDDATALISTID int8 not null, UNIT VARCHAR(32) not null, primary key (DERIVEDDATALISTID));
create table nmr.NMR_STRUANAL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_STRUANAL2STRUENSE (STRUCTUREENSEMBLEID int8 not null, STRUCTUREANALYSISID int8 not null, primary key (STRUCTUREANALYSISID, STRUCTUREENSEMBLEID));
create table nmr.NMR_STRUCTUREANALYSIS (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, METHODID int8, NMRPROJECTID int8 not null, NMRCONSTRAINTSTOREID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_STRUCTUREGENERATION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), GENERATIONTYPE VARCHAR(32) not null, NAME VARCHAR(80), SERIAL INTEGER not null, ACCESSID int8 unique, METHODID int8, NMRPROJECTID int8 not null, STRUCTUREENSEMBLEID int8 unique, NMRCONSTRAINTSTOREID int8, primary key (DATAOBJECTID), unique (SERIAL, NMRPROJECTID));
create table nmr.NMR_STRUGENE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.NMR_T1 (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_T1LIST (ABSTRACTMEASUREMENTLISTID int8 not null, COHERENCETYPE VARCHAR(32) not null, SF FLOAT not null, primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_T1RHO (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_T1RHOLIST (ABSTRACTMEASUREMENTLISTID int8 not null, COHERENCETYPE VARCHAR(32) not null, SF FLOAT not null, TEMPCALIBMETHOD VARCHAR(80), TEMPCONTROLMETHOD VARCHAR(80), primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.NMR_T2 (ABSTRACTMEASUREMENTID int8 not null, PARENTLISTID int8 not null, RESONANCEID int8 not null, primary key (ABSTRACTMEASUREMENTID), unique (PARENTLISTID, RESONANCEID));
create table nmr.NMR_T2LIST (ABSTRACTMEASUREMENTLISTID int8 not null, COHERENCETYPE VARCHAR(32) not null, SF FLOAT not null, TEMPCALIBMETHOD VARCHAR(80), TEMPCONTROLMETHOD VARCHAR(80), primary key (ABSTRACTMEASUREMENTLISTID));
create table nmr.REFS_ABSTCOMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_ABSTCOMP2CATEGORIES (CATEGORYID int8 not null, COMPONENTID int8 not null, primary key (COMPONENTID, CATEGORYID));
create table nmr.REFS_ABSTCOMP_SYNONYMS (ABSTRACTCOMPONENTID int8 not null, SYNONYM VARCHAR(80) not null, order_ int8 not null, primary key (ABSTRACTCOMPONENTID, order_));
create table nmr.REFS_ABSTRACTCOMPONENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, NAME VARCHAR(80) not null, ACCESSID int8 unique, NATURALSOURCEID int8, REFSAMPLECOMPONENTSTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, REFSAMPLECOMPONENTSTOREID));
create table nmr.REFS_CELL (ABSTRACTCOMPONENTID int8 not null, COMPETENTMETHOD VARCHAR(254), CULTURECOLLECTION VARCHAR(254), DIVIDED VARCHAR(254), FEATURES VARCHAR(254), PHASE VARCHAR(254), primary key (ABSTRACTCOMPONENTID));
create table nmr.REFS_COMPDBREF2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_COMPELEM2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_COMPINTE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_COMPINTE2ELEMENTS (ELEMENTID int8 not null, INTERACTIONID int8 not null, primary key (INTERACTIONID, ELEMENTID));
create table nmr.REFS_COMPONENTDBREF (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ALIGNBEGIN INTEGER, ALIGNEND INTEGER, DBREFALIGNBEGIN INTEGER, DBREFALIGNEND INTEGER, DETAILS TEXT, SERIAL INTEGER not null, THREADINGPROG VARCHAR(254), THREADINGSCORE FLOAT, ACCESSID int8 unique, COMPONENTID int8 not null, DBREFID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, COMPONENTID));
create table nmr.REFS_COMPOSITE (ABSTRACTCOMPONENTID int8 not null, ASSESSMENTMETHOD VARCHAR(254), MOLECULARMASS FLOAT, MOLECULARMASSMETHOD VARCHAR(254), primary key (ABSTRACTCOMPONENTID));
create table nmr.REFS_COMPOSITEELEMENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, SERIAL INTEGER not null, STOICHIOMETRY INTEGER, ACCESSID int8 unique, COMPONENTID int8 not null, COMPOSITEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, COMPOSITEID));
create table nmr.REFS_COMPOSITEINTERACTION (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, AFFINITY FLOAT, ASSESSMENTMETHOD VARCHAR(254), DETAILS TEXT, INTERACTIONTYPE VARCHAR(254) not null, SERIAL INTEGER not null, ACCESSID int8 unique, COMPOSITEID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, COMPOSITEID));
create table nmr.REFS_CONSTRUCT (MOLCOMPONENTID int8 not null, CONSTRUCTSTATUS VARCHAR(80) not null, FUNCTION TEXT, MARKERDETAILS TEXT, PROMOTERDETAILS TEXT, RESISTANCEDETAILS TEXT, SEQUENCETYPE VARCHAR(80), primary key (MOLCOMPONENTID));
create table nmr.REFS_ISOTLABE2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_ISOTLABE_ATOMNAMES (ISOTOPELABELID int8 not null, ATOMNAME VARCHAR(32) not null, order_ int8 not null, primary key (ISOTOPELABELID, order_));
create table nmr.REFS_ISOTOPELABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ELEMENTSYMBOL VARCHAR(32) not null, INCORPORATION FLOAT, MASSNUMBER INTEGER not null, SERIAL INTEGER not null, ACCESSID int8 unique, SPECIFICLABELGROUPID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, SPECIFICLABELGROUPID));
create table nmr.REFS_LABEL (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ELEMENTNAME VARCHAR(32), INCORPORATION FLOAT, ISUNIFORM BOOLEAN, LABELNAME VARCHAR(80) not null, LABELTYPE VARCHAR(80) not null, MASSNUMBER INTEGER, NUMINSTANCES INTEGER, SERIAL INTEGER not null, ACCESSID int8 unique, COMPONENTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, COMPONENTID));
create table nmr.REFS_LABEL2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_MOLCOMPFEAT2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_MOLCOMPFEATURE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, ENDSEQID INTEGER, FEATURETYPE VARCHAR(80) not null, NAME VARCHAR(80) not null, ORDERING INTEGER, SERIAL INTEGER not null, STARTSEQID INTEGER, STATUS VARCHAR(80), ACCESSID int8 unique, MOLCOMPONENTID int8 not null, REFMOLCOMPONENTID int8, primary key (DATAOBJECTID), unique (SERIAL, MOLCOMPONENTID));
create table nmr.REFS_MOLCOMPONENT (ABSTRACTCOMPONENTID int8 not null, CASNUM VARCHAR(32), EMPIRICALFORMULA VARCHAR(80), MOLTYPE VARCHAR(80), MOLECULARMASS FLOAT, SEQDETAILS TEXT, SEQSTRING TEXT, LABELEDMIXTUREID int8, MOLECULEID int8, primary key (ABSTRACTCOMPONENTID));
create table nmr.REFS_PRIMER (MOLCOMPONENTID int8 not null, DIRECTION VARCHAR(32) not null, ISUNIVERSAL BOOLEAN not null, MELTINGTEMPERATURE FLOAT, primary key (MOLCOMPONENTID));
create table nmr.REFS_REFSAMPCOMPSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_REFSAMPLECOMPONENTSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.REFS_RESTRICTIONENZYME (MOLCOMPONENTID int8 not null, CUTOFFSETCODING INTEGER, CUTOFFSETNONCODING INTEGER, RECOGSEQCODING VARCHAR(80), RECOGSEQNONCODING VARCHAR(80), primary key (MOLCOMPONENTID));
create table nmr.REFS_SPECIFICLABELGROUP (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, FRACTION FLOAT not null, SERIAL INTEGER not null, ACCESSID int8 unique, MOLCOMPONENTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, MOLCOMPONENTID));
create table nmr.REFS_SPECLABEGROU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.REFS_SUBSTANCE (ABSTRACTCOMPONENTID int8 not null, primary key (ABSTRACTCOMPONENTID));
create table nmr.SAM_ABSTRACTSAMPLE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS TEXT, IONICSTRENGTH FLOAT, ISACTIVE BOOLEAN, ISHAZARD BOOLEAN, NAME VARCHAR(80) not null, PH FLOAT, ACCESSID int8 unique, SAMPLESTOREID int8 not null, primary key (DATAOBJECTID), unique (NAME, SAMPLESTOREID));
create table nmr.SAM_ABSTSAMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.SAM_ABSTSAMP2HAZAPHRA (OTHERROLE int8 not null, HAZARDPHRASEID int8 not null, primary key (OTHERROLE, HAZARDPHRASEID));
create table nmr.SAM_ABSTSAMP2SAMPCATE (SAMPLECATEGORYID int8 not null, ABSTRACTSAMPLEID int8 not null, primary key (ABSTRACTSAMPLEID, SAMPLECATEGORYID));
create table nmr.SAM_CRYSTALSAMPLE (SAMPLEID int8 not null, A FLOAT, ALPHA FLOAT, B FLOAT, BETA FLOAT, C FLOAT, COLOUR VARCHAR(254), CRYSTALTYPE VARCHAR(254), GAMMA FLOAT, MORPHOLOGY VARCHAR(254), SPACEGROUP VARCHAR(32), X FLOAT, Y FLOAT, Z FLOAT, primary key (SAMPLEID));
create table nmr.SAM_REFSAMPLE (ABSTRACTSAMPLEID int8 not null, primary key (ABSTRACTSAMPLEID));
create table nmr.SAM_REFSAMPLESOURCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CATALOGNUM VARCHAR(80) not null, DATAPAGEURL VARCHAR(254), ACCESSID int8 unique, REFSAMPLEID int8 not null, SUPPLIERID int8 not null, primary key (DATAOBJECTID), unique (CATALOGNUM, REFSAMPLEID));
create table nmr.SAM_REFSAMPSOUR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.SAM_SAMPCOMP2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.SAM_SAMPLE (ABSTRACTSAMPLEID int8 not null, AMOUNTDISPLAYUNIT VARCHAR(32), AMOUNTUNIT VARCHAR(32), BATCHNUM VARCHAR(32), COLPOSITION INTEGER, CURRENTAMOUNT FLOAT, CURRENTAMOUNTFLAG BOOLEAN, INITIALAMOUNT FLOAT, ROWPOSITION INTEGER, SUBPOSITION INTEGER, HOLDERID int8, REFSAMPLEID int8, primary key (ABSTRACTSAMPLEID));
create table nmr.SAM_SAMPLECOMPONENT (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, CONCDISPLAYUNIT VARCHAR(32), CONCENTRATION FLOAT, CONCENTRATIONERROR FLOAT, CONCENTRATIONUNIT VARCHAR(32), DETAILS TEXT, PURITY FLOAT, SERIAL INTEGER not null, ACCESSID int8 unique, ABSTRACTSAMPLEID int8 not null, CONTAINERID int8, REFCOMPONENTID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, ABSTRACTSAMPLEID));
create table nmr.SAM_SAMPLESTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.SAM_SAMPSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.STER_REFSTER2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.STER_REFSTEREOCHEMISTRY (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, DETAILS VARCHAR(254), NUMATOMS INTEGER not null, SERIAL INTEGER not null, STEREOCLASS VARCHAR(32) not null, ACCESSID int8 unique, STEREOCHEMISTRYSTOREID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, STEREOCHEMISTRYSTOREID));
create table nmr.STER_REFSTER_VALUES (REFSTEREOCHEMISTRYID int8 not null, VALUE VARCHAR(32) not null, order_ int8 not null, primary key (REFSTEREOCHEMISTRYID, order_));
create table nmr.STER_STEREOCHEMISTRYSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.STER_STERSTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.TAXO_NATURALSOURCE (DATAOBJECTID int8 not null, TOPOBJECTID int8 not null, ATCCNUMBER VARCHAR(80), CELLLINE VARCHAR(80), CELLLOCATION TEXT, CELLTYPE VARCHAR(80), DETAILS TEXT, FRACTION VARCHAR(254), GENEMNEMONIC VARCHAR(254), GENUS VARCHAR(80), ICTVCODE VARCHAR(254), KINGDOM VARCHAR(80), NCBITAXONOMYID VARCHAR(254), ORGAN VARCHAR(80), ORGANELLE VARCHAR(254), ORGANISMACRONYM VARCHAR(254), ORGANISMNAME VARCHAR(254) not null, PLASMID VARCHAR(254), PLASMIDDETAILS TEXT, SCIENTIFICNAME VARCHAR(80), SECRETION TEXT, SERIAL INTEGER not null, SPECIES VARCHAR(80), STRAIN VARCHAR(80), SUBVARIANT VARCHAR(254), SUPERKINGDOM VARCHAR(80), TISSUE VARCHAR(80), VARIANT VARCHAR(80), ACCESSID int8 unique, TAXONOMYID int8 not null, primary key (DATAOBJECTID), unique (SERIAL, TAXONOMYID));
create table nmr.TAXO_NATUSOUR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.TAXO_TAXONOMY (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.TAXO_TAXONOMY2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.TEMP_ABSTPROB2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.TEMP_ABSTRACTPROBABILITY (DATAOBJECTID int8 not null, WEIGHT FLOAT not null, ACCESSID int8 unique, primary key (DATAOBJECTID));
create table nmr.TEMP_MULTITYPESVALUE (DATAOBJECTID int8 not null, BOOLVALUES BOOLEAN, FLOATVALUES FLOAT, ACCESSID int8 unique, primary key (DATAOBJECTID));
create table nmr.TEMP_MULTITYPEVALUE (DATAOBJECTID int8 not null, BOOLEANVALUE BOOLEAN, FLOATVALUE FLOAT, INTVALUE INTEGER, TEXTVALUE VARCHAR(254), ACCESSID int8 unique, primary key (DATAOBJECTID));
create table nmr.TEMP_MULTTYPEVALU2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
create table nmr.TEMP_MULTTYPEVALU_INTVALUES (MULTITYPESVALUEID int8 not null, INTVALUE INTEGER not null, order_ int8 not null, primary key (MULTITYPESVALUEID, order_));
create table nmr.TEMP_MULTTYPEVALU_TEXTVALUES (MULTITYPESVALUEID int8 not null, TEXTVALUE VARCHAR(80) not null, order_ int8 not null, primary key (MULTITYPESVALUEID, order_));
create table nmr.VALD_ATOMVALI2ATOMS (ATOMVALIDATIONID int8 not null, ATOMID int8 not null, primary key (ATOMVALIDATIONID, ATOMID));
create table nmr.VALD_ATOMVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_CHAINVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_CHAIVALI2CHAINS (CHAINVALIDATIONID int8 not null, CHAINID int8 not null, primary key (CHAINVALIDATIONID, CHAINID));
create table nmr.VALD_ENSEMBLEVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_ENTRYVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_MOLSYSATOMVALI2ATOMS (ATOMID int8 not null, MOLSYSATOMVALIDATIONID int8 not null, primary key (MOLSYSATOMVALIDATIONID, ATOMID));
create table nmr.VALD_MOLSYSATOMVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_MOLSYSCHAINVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_MOLSYSCHAIVALI2CHAINS (CHAINID int8 not null, MOLSYSCHAINVALIDATIONID int8 not null, primary key (MOLSYSCHAINVALIDATIONID, CHAINID));
create table nmr.VALD_MOLSYSRESIDUEVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_MOLSYSRESIVALI2RESIDUES (RESIDUEID int8 not null, MOLSYSRESIDUEVALIDATIONID int8 not null, primary key (MOLSYSRESIDUEVALIDATIONID, RESIDUEID));
create table nmr.VALD_MOLSYSTEMVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_MOLSYSTVALI2MOLSYSTEMS (MOLSYSTEMID int8 not null, MOLSYSTEMVALIDATIONID int8 not null, primary key (MOLSYSTEMVALIDATIONID, MOLSYSTEMID));
create table nmr.VALD_NMRCONSTRAINTLISTVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_NMRCONSTRAINTVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_NMRMEASUREMENTLISTVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_NMRMEASUREMENTVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_PEAKLISTVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_PEAKVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_RESIDUEVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_RESIVALI2RESIDUES (RESIDUEVALIDATIONID int8 not null, RESIDUEID int8 not null, primary key (RESIDUEVALIDATIONID, RESIDUEID));
create table nmr.VALD_STRUCTUREVALIDATION (VALIDATIONRESULTID int8 not null, primary key (VALIDATIONRESULTID));
create table nmr.VALD_STRUVALI2MODELS (STRUCTUREVALIDATIONID int8 not null, MODELID int8 not null, primary key (STRUCTUREVALIDATIONID, MODELID));
create table nmr.VALD_VALIDATIONRESULT (MULTITYPEVALUEID int8 not null, CONTEXT VARCHAR(32) not null, DETAILS VARCHAR(254), FIGOFMERIT FLOAT, KEYWORD VARCHAR(32) not null, SERIAL INTEGER not null, VALIDATIONSTOREID int8 not null, primary key (MULTITYPEVALUEID), unique (SERIAL, VALIDATIONSTOREID));
create table nmr.VALD_VALIDATIONSTORE (TOPOBJECTID int8 not null, SEGMENT VARCHAR(20), GUID VARCHAR(80) not null, NAME VARCHAR(80) not null, ACCESSID int8 unique, SOFTWAREID int8 not null, NMRPROJECTID int8, NMRCONSTRAINTSTOREID int8, STRUCTUREENSEMBLEID int8, primary key (TOPOBJECTID), unique (SEGMENT, NAME));
create table nmr.VALD_VALISTOR2APPLDATA (DATAOBJECTID int8 not null, APPLICATIONDATAID int8 not null unique, ORDER_applicationData_ int4 not null, primary key (DATAOBJECTID, ORDER_applicationData_));
alter table nmr.ACCO_ACCECONTSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ACCO_ACCECONTSTOR2APPLDATA add constraint FK248B345C5C173426 foreign key (DATAOBJECTID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_ACCEOBJE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ACCO_ACCEOBJE2APPLDATA add constraint FK490360C47B818061 foreign key (DATAOBJECTID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_ACCESSCONTROLSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_ACCESSOBJECT add constraint ACCO_ACCEOBJE_ACCECONTSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_ACCESSOBJECT add constraint ACCO_ACCEOBJE_ACCECONTSTOR_FK foreign key (ACCESSCONTROLSTOREID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_ACCESSOBJECT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_PERMISSION add constraint ACCO_PERMISSION_USERGROUP_FK foreign key (USERGROUPID) references nmr.ACCO_USERGROUP;
alter table nmr.ACCO_PERMISSION add constraint ACCO_PERMISSION_ACCECONTSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_PERMISSION add constraint ACCO_PERMISSION_ACCEOBJE_FK foreign key (ACCESSOBJECTID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_PERMISSION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_PERMISSION2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ACCO_PERMISSION2APPLDATA add constraint FK905B9C2713E3EAED foreign key (DATAOBJECTID) references nmr.ACCO_PERMISSION;
alter table nmr.ACCO_USER add constraint ACCO_USER_ACCECONTSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_USER add constraint ACCO_USER_ACCECONTSTOR_FK foreign key (ACCESSCONTROLSTOREID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_USER add constraint ACCO_USER_PERSON_FK foreign key (PERSONID) references nmr.AFFI_PERSON;
alter table nmr.ACCO_USER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_USER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ACCO_USER2APPLDATA add constraint FK16438CEBFAB6BC69 foreign key (DATAOBJECTID) references nmr.ACCO_USER;
alter table nmr.ACCO_USERGROUP add constraint ACCO_USERGROUP_ACCECONTSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_USERGROUP add constraint ACCO_USERGROUP_ACCECONTSTOR_FK foreign key (ACCESSCONTROLSTOREID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.ACCO_USERGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ACCO_USERGROUP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ACCO_USERGROUP2APPLDATA add constraint FKC0663BA4ACEBDD9E foreign key (DATAOBJECTID) references nmr.ACCO_USERGROUP;
alter table nmr.ACCO_USERGROUP2LEADERS add constraint ACCO_USERGROUP_LEADERS_FK foreign key (LEADERID) references nmr.ACCO_USER;
alter table nmr.ACCO_USERGROUP2LEADERS add constraint ACCO_USER_LEDGROUPS_FK foreign key (LEDGROUPID) references nmr.ACCO_USERGROUP;
alter table nmr.ACCO_USERGROUP2MEMBERS add constraint ACCO_USER_USERGROUPS_FK foreign key (USERGROUPID) references nmr.ACCO_USERGROUP;
alter table nmr.ACCO_USERGROUP2MEMBERS add constraint ACCO_USERGROUP_MEMBERS_FK foreign key (MEMBERID) references nmr.ACCO_USER;
alter table nmr.AFFI_AFFILIATIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.AFFI_AFFISTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.AFFI_AFFISTOR2APPLDATA add constraint FK22306FC48BE4204B foreign key (DATAOBJECTID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_GROUP add constraint AFFI_GROUP_ORGA_FK foreign key (ORGANISATIONID) references nmr.AFFI_ORGANISATION;
alter table nmr.AFFI_GROUP add constraint AFFI_GROUP_AFFISTOR_TO_FK foreign key (TOPOBJECTID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_GROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.AFFI_GROUP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.AFFI_GROUP2APPLDATA add constraint FK4D1CF4BF633BFC4D foreign key (DATAOBJECTID) references nmr.AFFI_GROUP;
alter table nmr.AFFI_ORGA2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.AFFI_ORGA2APPLDATA add constraint FKE3F75913C51DD054 foreign key (DATAOBJECTID) references nmr.AFFI_ORGANISATION;
alter table nmr.AFFI_ORGANISATION add constraint AFFI_ORGA_AFFISTOR_TO_FK foreign key (TOPOBJECTID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_ORGANISATION add constraint AFFI_ORGA_AFFISTOR_FK foreign key (AFFILIATIONSTOREID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_ORGANISATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.AFFI_ORGA_ADDRESSES add constraint AFFI_ORGA_ADDRESSES_FK foreign key (ORGANISATIONID) references nmr.AFFI_ORGANISATION;
alter table nmr.AFFI_PERSINGROU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.AFFI_PERSINGROU2APPLDATA add constraint FK5C1EB4048A31C713 foreign key (DATAOBJECTID) references nmr.AFFI_PERSONINGROUP;
alter table nmr.AFFI_PERSINGROU_PHONNUMB add constraint AFFI_PERSINGROU_PHONNUMB_FK foreign key (PERSONINGROUPID) references nmr.AFFI_PERSONINGROUP;
alter table nmr.AFFI_PERSON add constraint AFFI_PERSON_CURRPERSINGROU_FK foreign key (CURRENTPERSONINGROUPID) references nmr.AFFI_PERSONINGROUP;
alter table nmr.AFFI_PERSON add constraint AFFI_PERSON_AFFISTOR_TO_FK foreign key (TOPOBJECTID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_PERSON add constraint AFFI_PERSON_AFFISTOR_FK foreign key (AFFILIATIONSTOREID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_PERSON add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.AFFI_PERSON2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.AFFI_PERSON2APPLDATA add constraint FK274FAC7B9F660B4F foreign key (DATAOBJECTID) references nmr.AFFI_PERSON;
alter table nmr.AFFI_PERSONINGROUP add constraint AFFI_PERSINGROU_AFFISTOR_TO_FK foreign key (TOPOBJECTID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.AFFI_PERSONINGROUP add constraint AFFI_PERSINGROU_GROUP_FK foreign key (GROUPID) references nmr.AFFI_GROUP;
alter table nmr.AFFI_PERSONINGROUP add constraint AFFI_PERSINGROU_PERSON_FK foreign key (PERSONID) references nmr.AFFI_PERSON;
alter table nmr.AFFI_PERSONINGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.AFFI_PERSON_MIDDINIT add constraint AFFI_PERSON_MIDDINIT_FK foreign key (PERSONID) references nmr.AFFI_PERSON;
alter table nmr.CCCA_CHEMATOMCHAR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCA_CHEMATOMCHAR2APPLDATA add constraint FK310F992888B663E foreign key (DATAOBJECTID) references nmr.CCCA_CHEMATOMCHARGE;
alter table nmr.CCCA_CHEMATOMCHARGE add constraint CCCA_CHEMATOMCHAR_CHEMCOMPCHAR_TO_FK foreign key (TOPOBJECTID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.CCCA_CHEMATOMCHARGE add constraint CCCA_CHEMATOMCHAR_CHEMCOMPCHAR_FK foreign key (CHEMCOMPCHARGEID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.CCCA_CHEMATOMCHARGE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCCA_CHEMATOMCHAR_VALIVEGATYPE add constraint CCCA_CHEMATOMCHAR_VALIVEGATYPE_FK foreign key (CHEMATOMCHARGEID) references nmr.CCCA_CHEMATOMCHARGE;
alter table nmr.CCCA_CHEMCOMPCHAR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCA_CHEMCOMPCHAR2APPLDATA add constraint FK2E6DE8945AB8757C foreign key (DATAOBJECTID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.CCCA_CHEMCOMPCHARGE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCCA_CHEMCOMPVARCHAR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCA_CHEMCOMPVARCHAR2APPLDATA add constraint FKA62731478C954FFB foreign key (DATAOBJECTID) references nmr.CCCA_CHEMCOMPVARCHARGE;
alter table nmr.CCCA_CHEMCOMPVARCHAR2CHEMATOMCHAR add constraint CCCA_CHEMATOMCHAR_CHEMCOMPVARCHAR_FK foreign key (CHEMCOMPVARCHARGEID) references nmr.CCCA_CHEMCOMPVARCHARGE;
alter table nmr.CCCA_CHEMCOMPVARCHAR2CHEMATOMCHAR add constraint CCCA_CHEMCOMPVARCHAR_CHEMATOMCHAR_FK foreign key (CHEMATOMCHARGEID) references nmr.CCCA_CHEMATOMCHARGE;
alter table nmr.CCCA_CHEMCOMPVARCHARGE add constraint CCCA_CHEMCOMPVARCHAR_CHEMCOMPCHAR_TO_FK foreign key (TOPOBJECTID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.CCCA_CHEMCOMPVARCHARGE add constraint CCCA_CHEMCOMPVARCHAR_CHEMCOMPCHAR_FK foreign key (CHEMCOMPCHARGEID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.CCCA_CHEMCOMPVARCHARGE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCCO_CHEMATOMCOOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCO_CHEMATOMCOOR2APPLDATA add constraint FK6C24A74760DB5790 foreign key (DATAOBJECTID) references nmr.CCCO_CHEMATOMCOORD;
alter table nmr.CCCO_CHEMATOMCOORD add constraint CCCO_CHEMATOMCOOR_CHEMCOMPCOOR_TO_FK foreign key (TOPOBJECTID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.CCCO_CHEMATOMCOORD add constraint CCCO_CHEMATOMCOOR_CHEMCOMPCOOR_FK foreign key (CHEMCOMPCOORDID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.CCCO_CHEMATOMCOORD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCCO_CHEMCOMPCOOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCO_CHEMCOMPCOOR2APPLDATA add constraint FK978196491D506892 foreign key (DATAOBJECTID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.CCCO_CHEMCOMPCOORD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCCO_CHEMCOMPVARCOOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCCO_CHEMCOMPVARCOOR2APPLDATA add constraint FK1A67092013BC5059 foreign key (DATAOBJECTID) references nmr.CCCO_CHEMCOMPVARCOORD;
alter table nmr.CCCO_CHEMCOMPVARCOOR2CHEMATOMCOOR add constraint CCCO_CHEMCOMPVARCOOR_CHEMATOMCOOR_FK foreign key (CHEMATOMCOORDID) references nmr.CCCO_CHEMATOMCOORD;
alter table nmr.CCCO_CHEMCOMPVARCOOR2CHEMATOMCOOR add constraint CCCO_CHEMATOMCOOR_CHEMCOMPVARCOOR_FK foreign key (CHEMCOMPVARCOORDID) references nmr.CCCO_CHEMCOMPVARCOORD;
alter table nmr.CCCO_CHEMCOMPVARCOORD add constraint CCCO_CHEMCOMPVARCOOR_CHEMCOMPCOOR_TO_FK foreign key (TOPOBJECTID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.CCCO_CHEMCOMPVARCOORD add constraint CCCO_CHEMCOMPVARCOOR_CHEMCOMPCOOR_FK foreign key (CHEMCOMPCOORDID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.CCCO_CHEMCOMPVARCOORD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCLB_ATOMLABEL add constraint CCLB_ATOMLABEL_ISOTOPOMER_FK foreign key (ISOTOPOMERID) references nmr.CCLB_ISOTOPOMER;
alter table nmr.CCLB_ATOMLABEL add constraint CCLB_ATOMLABEL_LABESCHE_TO_FK foreign key (TOPOBJECTID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.CCLB_ATOMLABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCLB_ATOMLABEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCLB_ATOMLABEL2APPLDATA add constraint FK15CB230D34792C9B foreign key (DATAOBJECTID) references nmr.CCLB_ATOMLABEL;
alter table nmr.CCLB_CHEMCOMPLABE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCLB_CHEMCOMPLABE2APPLDATA add constraint FKAE9730CADA9E8650 foreign key (DATAOBJECTID) references nmr.CCLB_CHEMCOMPLABEL;
alter table nmr.CCLB_CHEMCOMPLABEL add constraint CCLB_CHEMCOMPLABE_LABESCHE_TO_FK foreign key (TOPOBJECTID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.CCLB_CHEMCOMPLABEL add constraint CCLB_CHEMCOMPLABE_LABESCHE_FK foreign key (LABELINGSCHEMEID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.CCLB_CHEMCOMPLABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCLB_ISOTOPOMER add constraint CCLB_ISOTOPOMER_LABESCHE_TO_FK foreign key (TOPOBJECTID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.CCLB_ISOTOPOMER add constraint CCLB_ISOTOPOMER_CHEMCOMPLABE_FK foreign key (CHEMCOMPLABELID) references nmr.CCLB_CHEMCOMPLABEL;
alter table nmr.CCLB_ISOTOPOMER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCLB_ISOTOPOMER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCLB_ISOTOPOMER2APPLDATA add constraint FKD31B5F83A40EE04B foreign key (DATAOBJECTID) references nmr.CCLB_ISOTOPOMER;
alter table nmr.CCLB_LABELINGSCHEME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CCLB_LABESCHE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CCLB_LABESCHE2APPLDATA add constraint FKFB5A2679F0ADD443 foreign key (DATAOBJECTID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.CHEL_CHEMELEM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEL_CHEMELEM2APPLDATA add constraint FK7CC89BB88935E87E foreign key (DATAOBJECTID) references nmr.CHEL_CHEMELEMENT;
alter table nmr.CHEL_CHEMELEMENT add constraint CHEL_CHEMELEM_CHEMELEMSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.CHEL_CHEMELEMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEL_CHEMELEMENT add constraint CHEL_CHEMELEM_CHEMELEMSTOR_FK foreign key (CHEMELEMENTSTOREID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.CHEL_CHEMELEMENTSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEL_CHEMELEMSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEL_CHEMELEMSTOR2APPLDATA add constraint FKDCB37FB48F87F90B foreign key (DATAOBJECTID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.CHEL_ISOTOPE add constraint CHEL_ISOTOPE_CHEMELEMSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.CHEL_ISOTOPE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEL_ISOTOPE add constraint CHEL_ISOTOPE_CHEMELEM_FK foreign key (CHEMELEMENTID) references nmr.CHEL_CHEMELEMENT;
alter table nmr.CHEL_ISOTOPE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEL_ISOTOPE2APPLDATA add constraint FKBF6106E5BE610B44 foreign key (DATAOBJECTID) references nmr.CHEL_ISOTOPE;
alter table nmr.CHEM_ABSTCHEMATOM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_ABSTCHEMATOM2APPLDATA add constraint FK8CF5D0F5CC64AD00 foreign key (DATAOBJECTID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_ABSTRACTCHEMATOM add constraint CHEM_ABSTCHEMATOM_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_ABSTRACTCHEMATOM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_ABSTRACTCHEMATOM add constraint CHEM_ABSTCHEMATOM_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_ATOMSYSNAME add constraint CHEM_ATOMSYSNAME_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_ATOMSYSNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_ATOMSYSNAME add constraint CHEM_ATOMSYSNAME_NAMISYST_FK foreign key (NAMINGSYSTEMID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_ATOMSYSNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_ATOMSYSNAME2APPLDATA add constraint FK18F19392A0FB476F foreign key (DATAOBJECTID) references nmr.CHEM_ATOMSYSNAME;
alter table nmr.CHEM_ATOMSYSNAME_ALTSYSNAME add constraint CHEM_ATOMSYSNAME_ALTSYSNAME_FK foreign key (ATOMSYSNAMEID) references nmr.CHEM_ATOMSYSNAME;
alter table nmr.CHEM_CHEMANGLE add constraint CHEM_CHEMANGLE_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMANGLE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMANGLE add constraint CHEM_CHEMANGLE_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMANGLE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMANGLE2APPLDATA add constraint FK367EAA33D7D3A50E foreign key (DATAOBJECTID) references nmr.CHEM_CHEMANGLE;
alter table nmr.CHEM_CHEMANGLE2CHEMATOMS add constraint CHEM_CHEMANGLE_CHEMATOMS_FK foreign key (CHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_CHEMANGLE2CHEMATOMS add constraint CHEM_ABSTCHEMATOM_CHEMANGLES_FK foreign key (CHEMANGLEID) references nmr.CHEM_CHEMANGLE;
alter table nmr.CHEM_CHEMATOM add constraint CHEM_CHEMATOM_CHEMATOMSET_FK foreign key (CHEMATOMSETID) references nmr.CHEM_CHEMATOMSET;
alter table nmr.CHEM_CHEMATOM add constraint CHEM_CHEMATOM_ABSTCHEMATOM_FK foreign key (ABSTRACTCHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_CHEMATOMSET add constraint CHEM_CHEMATOMSET_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMATOMSET add constraint CHEM_CHEMATOMSET_CHEMATOMSET_FK foreign key (CHEMATOMSETID) references nmr.CHEM_CHEMATOMSET;
alter table nmr.CHEM_CHEMATOMSET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMATOMSET add constraint CHEM_CHEMATOMSET_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMATOMSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMATOMSET2APPLDATA add constraint FKB6A6A795CBC427CC foreign key (DATAOBJECTID) references nmr.CHEM_CHEMATOMSET;
alter table nmr.CHEM_CHEMBOND add constraint CHEM_CHEMBOND_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMBOND add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMBOND add constraint CHEM_CHEMBOND_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMBOND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMBOND2APPLDATA add constraint FK3B7428C56DC97830 foreign key (DATAOBJECTID) references nmr.CHEM_CHEMBOND;
alter table nmr.CHEM_CHEMBOND2CHEMATOMS add constraint CHEM_CHEMBOND_CHEMATOMS_FK foreign key (CHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_CHEMBOND2CHEMATOMS add constraint CHEM_ABSTCHEMATOM_CHEMBONDS_FK foreign key (CHEMBONDID) references nmr.CHEM_CHEMBOND;
alter table nmr.CHEM_CHEMCOMP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMCOMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMCOMP2APPLDATA add constraint FK883C9F96DC9EC7C foreign key (DATAOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMCOMPSYSNAME add constraint CHEM_CHEMCOMPSYSNAME_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMCOMPSYSNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMCOMPSYSNAME add constraint CHEM_CHEMCOMPSYSNAME_NAMISYST_FK foreign key (NAMINGSYSTEMID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_CHEMCOMPSYSNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMCOMPSYSNAME2APPLDATA add constraint FK298BE79DA792BFE4 foreign key (DATAOBJECTID) references nmr.CHEM_CHEMCOMPSYSNAME;
alter table nmr.CHEM_CHEMCOMPVAR add constraint CHEM_CHEMCOMPVAR_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMCOMPVAR add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMCOMPVAR add constraint CHEM_CHEMCOMPVAR_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMCOMPVAR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMCOMPVAR2APPLDATA add constraint FK9B3E132E2CED9C13 foreign key (DATAOBJECTID) references nmr.CHEM_CHEMCOMPVAR;
alter table nmr.CHEM_CHEMCOMPVAR2CHEMATOMS add constraint CHEM_CHEMCOMPVAR_CHEMATOMS_FK foreign key (CHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_CHEMCOMPVAR2CHEMATOMS add constraint CHEM_ABSTCHEMATOM_CHEMCOMPVARS_FK foreign key (CHEMCOMPVARID) references nmr.CHEM_CHEMCOMPVAR;
alter table nmr.CHEM_CHEMCOMPVAR2SPECSYSNAME add constraint CHEM_CHEMCOMPVAR_SPECSYSNAME_FK foreign key (SPECIFICSYSNAMEID) references nmr.CHEM_CHEMCOMPSYSNAME;
alter table nmr.CHEM_CHEMCOMPVAR2SPECSYSNAME add constraint CHEM_CHEMCOMPSYSNAME_SPECCHEMCOMPVARS_FK foreign key (SPECIFICCHEMCOMPVARID) references nmr.CHEM_CHEMCOMPVAR;
alter table nmr.CHEM_CHEMCOMP_COMMNAME add constraint CHEM_CHEMCOMP_COMMNAME_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMCOMP_KEYWORDS add constraint CHEM_CHEMCOMP_KEYWORDS_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMTORS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMTORS2APPLDATA add constraint FKA48B09ACB07FA707 foreign key (DATAOBJECTID) references nmr.CHEM_CHEMTORSION;
alter table nmr.CHEM_CHEMTORS2CHEMATOMS add constraint CHEM_CHEMTORS_CHEMATOMS_FK foreign key (CHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_CHEMTORS2CHEMATOMS add constraint CHEM_ABSTCHEMATOM_CHEMTORS_FK foreign key (CHEMTORSIONID) references nmr.CHEM_CHEMTORSION;
alter table nmr.CHEM_CHEMTORSION add constraint CHEM_CHEMTORS_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMTORSION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMTORSION add constraint CHEM_CHEMTORS_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMTORSIONSYSNAME add constraint CHEM_CHEMTORSSYSNAME_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_CHEMTORSIONSYSNAME add constraint CHEM_CHEMTORSSYSNAME_CHEMTORS_FK foreign key (CHEMTORSIONID) references nmr.CHEM_CHEMTORSION;
alter table nmr.CHEM_CHEMTORSIONSYSNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_CHEMTORSIONSYSNAME add constraint CHEM_CHEMTORSSYSNAME_NAMISYST_FK foreign key (NAMINGSYSTEMID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_CHEMTORSSYSNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_CHEMTORSSYSNAME2APPLDATA add constraint FK5422288AE11B22F9 foreign key (DATAOBJECTID) references nmr.CHEM_CHEMTORSIONSYSNAME;
alter table nmr.CHEM_LINKATOM add constraint CHEM_LINKATOM_BOUNLINKEND_FK foreign key (BOUNDLINKENDID) references nmr.CHEM_LINKEND;
alter table nmr.CHEM_LINKATOM add constraint CHEM_LINKATOM_REMOLINKEND_FK foreign key (REMOTELINKENDID) references nmr.CHEM_LINKEND;
alter table nmr.CHEM_LINKATOM add constraint CHEM_LINKATOM_ABSTCHEMATOM_FK foreign key (ABSTRACTCHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_REMOLINKATOM_FK foreign key (REMOTELINKATOMID) references nmr.CHEM_LINKATOM;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_BOUNCHEMATOM_FK foreign key (BOUNDCHEMATOMID) references nmr.CHEM_CHEMATOM;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_BOUNLINKATOM_FK foreign key (BOUNDLINKATOMID) references nmr.CHEM_LINKATOM;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_REMOCHEMATOM_FK foreign key (REMOTECHEMATOMID) references nmr.CHEM_CHEMATOM;
alter table nmr.CHEM_LINKEND add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_LINKEND add constraint CHEM_LINKEND_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_LINKEND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_LINKEND2APPLDATA add constraint FKF69A0B98FE559F89 foreign key (DATAOBJECTID) references nmr.CHEM_LINKEND;
alter table nmr.CHEM_NAMINGSYSTEM add constraint CHEM_NAMISYST_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_NAMINGSYSTEM add constraint CHEM_NAMISYST_ATOMSETREFE_FK foreign key (ATOMSETREFERENCEID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_NAMINGSYSTEM add constraint CHEM_NAMISYST_ATOMREFE_FK foreign key (ATOMREFERENCEID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_NAMINGSYSTEM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_NAMINGSYSTEM add constraint CHEM_NAMISYST_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_NAMISYST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_NAMISYST2APPLDATA add constraint FK1FDA413F30AC9ED7 foreign key (DATAOBJECTID) references nmr.CHEM_NAMINGSYSTEM;
alter table nmr.CHEM_NONSTDCHEMCOMP add constraint CHEM_NONSTDCHEMCOMP_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_STDCHEMCOMP add constraint CHEM_STDCHEMCOMP_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_STER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CHEM_STER2APPLDATA add constraint FK6CD126C7620B44B4 foreign key (DATAOBJECTID) references nmr.CHEM_STEREOCHEMISTRY;
alter table nmr.CHEM_STER2CHEMATOMS add constraint CHEM_ABSTCHEMATOM_STER_FK foreign key (STEREOCHEMISTRYID) references nmr.CHEM_STEREOCHEMISTRY;
alter table nmr.CHEM_STER2CHEMATOMS add constraint CHEM_STER_CHEMATOMS_FK foreign key (CHEMATOMID) references nmr.CHEM_ABSTRACTCHEMATOM;
alter table nmr.CHEM_STEREOCHEMISTRY add constraint CHEM_STER_CHEMCOMP_TO_FK foreign key (TOPOBJECTID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CHEM_STEREOCHEMISTRY add constraint CHEM_STER_REFSTER_FK foreign key (REFSTEREOCHEMISTRYID) references nmr.STER_REFSTEREOCHEMISTRY;
alter table nmr.CHEM_STEREOCHEMISTRY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CHEM_STEREOCHEMISTRY add constraint CHEM_STER_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.CITA_BOOKCITATION add constraint CITA_BOOKCITA_CITATION_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_CITASTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CITA_CITASTOR2APPLDATA add constraint FKB3A848E471A8EE6F foreign key (DATAOBJECTID) references nmr.CITA_CITATIONSTORE;
alter table nmr.CITA_CITATION add constraint CITA_CITATION_CITASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.CITA_CITATIONSTORE;
alter table nmr.CITA_CITATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CITA_CITATION add constraint CITA_CITATION_CITASTOR_FK foreign key (CITATIONSTOREID) references nmr.CITA_CITATIONSTORE;
alter table nmr.CITA_CITATION2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CITA_CITATION2APPLDATA add constraint FK7C636FD4CD22249A foreign key (DATAOBJECTID) references nmr.CITA_CITATION;
alter table nmr.CITA_CITATION2AUTHORS add constraint AFFI_PERSON_AUTHCITA_FK foreign key (AUTHORCITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_CITATION2AUTHORS add constraint CITA_CITATION_AUTHORS_FK foreign key (AUTHORID) references nmr.AFFI_PERSON;
alter table nmr.CITA_CITATION2EDITORS add constraint AFFI_PERSON_EDITCITA_FK foreign key (EDITORCITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_CITATION2EDITORS add constraint CITA_CITATION_EDITORS_FK foreign key (EDITORID) references nmr.AFFI_PERSON;
alter table nmr.CITA_CITATIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CITA_CITATION_KEYWORDS add constraint CITA_CITATION_KEYWORDS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_CONFERENCECITATION add constraint CITA_CONFCITA_CITATION_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_JOURNALCITATION add constraint CITA_JOURCITA_CITATION_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.CITA_THESISCITATION add constraint CITA_THESCITA_CITATION_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.CLAS_ABSTCATE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CLAS_ABSTCATE2APPLDATA add constraint FKC211F072E0FEDFF3 foreign key (DATAOBJECTID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_ABSTRACTCATEGORY add constraint CLAS_ABSTCATE_CLAS_TO_FK foreign key (TOPOBJECTID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_ABSTRACTCATEGORY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CLAS_CLAS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.CLAS_CLAS2APPLDATA add constraint FKBF4EB7E81E5A1459 foreign key (DATAOBJECTID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_CLASSIFICATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.CLAS_EXPERIMENTTYPE add constraint CLAS_EXPETYPE_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_EXPERIMENTTYPE add constraint CLAS_EXPETYPE_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_HAZARDPHRASE add constraint CLAS_HAZAPHRA_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_HAZARDPHRASE add constraint CLAS_HAZAPHRA_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_HOLDERCATEGORY add constraint CLAS_HOLDCATE_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_HOLDERCATEGORY add constraint CLAS_HOLDCATE_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_INSTRUMENTTYPE add constraint CLAS_INSTTYPE_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_INSTRUMENTTYPE add constraint CLAS_INSTTYPE_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_INSTTYPE2EXPETYPE add constraint CLAS_INSTTYPE_EXPETYPE_FK foreign key (EXPERIMENTTYPEID) references nmr.CLAS_EXPERIMENTTYPE;
alter table nmr.CLAS_INSTTYPE2EXPETYPE add constraint CLAS_EXPETYPE_INSTTYPE_FK foreign key (INSTRUMENTTYPEID) references nmr.CLAS_INSTRUMENTTYPE;
alter table nmr.CLAS_INSTTYPE2INST add constraint INST_INSTRUMENT_INSTTYPE_FK foreign key (INSTRUMENTTYPEID) references nmr.CLAS_INSTRUMENTTYPE;
alter table nmr.CLAS_INSTTYPE2INST add constraint CLAS_INSTTYPE_INST_FK foreign key (INSTRUMENTID) references nmr.INST_INSTRUMENT;
alter table nmr.CLAS_SAMPCATE2EXPETYPE add constraint CLAS_SAMPCATE_EXPETYPE_FK foreign key (EXPERIMENTTYPEID) references nmr.CLAS_EXPERIMENTTYPE;
alter table nmr.CLAS_SAMPCATE2EXPETYPE add constraint CLAS_EXPETYPE_SAMPCATE_FK foreign key (SAMPLECATEGORYID) references nmr.CLAS_SAMPLECATEGORY;
alter table nmr.CLAS_SAMPLECATEGORY add constraint CLAS_SAMPCATE_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_SAMPLECATEGORY add constraint CLAS_SAMPCATE_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_SAMPLECOMPONENTCATEGORY add constraint CLAS_SAMPCOMPCATE_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_SAMPLECOMPONENTCATEGORY add constraint CLAS_SAMPCOMPCATE_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_TARGETSCOREBOARD add constraint CLAS_TARGSCOR_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_TARGETSCOREBOARD add constraint CLAS_TARGSCOR_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_TARGETSTATUS add constraint CLAS_TARGSTAT_ABSTCATE_FK foreign key (ABSTRACTCATEGORYID) references nmr.CLAS_ABSTRACTCATEGORY;
alter table nmr.CLAS_TARGETSTATUS add constraint CLAS_TARGSTAT_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.CLAS_TARGSTAT2TARGSCOR add constraint CLAS_TARGSTAT_TARGSCOR_FK foreign key (TARGETSCOREBOARDID) references nmr.CLAS_TARGETSCOREBOARD;
alter table nmr.CLAS_TARGSTAT2TARGSCOR add constraint CLAS_TARGSCOR_TARGSTAT_FK foreign key (TARGETSTATUSID) references nmr.CLAS_TARGETSTATUS;
alter table nmr.COOR_ATOM add constraint COOR_ATOM_STRUENSE_TO_FK foreign key (TOPOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_ATOM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_ATOM add constraint COOR_ATOM_RESIDUE_FK foreign key (RESIDUEID) references nmr.COOR_RESIDUE;
alter table nmr.COOR_ATOM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_ATOM2APPLDATA add constraint FK78BB47A623ADED64 foreign key (DATAOBJECTID) references nmr.COOR_ATOM;
alter table nmr.COOR_CHAIN add constraint COOR_CHAIN_STRUENSE_TO_FK foreign key (TOPOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_CHAIN add constraint COOR_CHAIN_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_CHAIN add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_CHAIN2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_CHAIN2APPLDATA add constraint FK6E149036DEA30116 foreign key (DATAOBJECTID) references nmr.COOR_CHAIN;
alter table nmr.COOR_COORD add constraint COOR_COORD_STRUENSE_TO_FK foreign key (TOPOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_COORD add constraint COOR_COORD_ATOM_FK foreign key (ATOMID) references nmr.COOR_ATOM;
alter table nmr.COOR_COORD add constraint COOR_COORD_MODEL_FK foreign key (MODELID) references nmr.COOR_MODEL;
alter table nmr.COOR_COORD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_COORD2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_COORD2APPLDATA add constraint FK108CA682DEA6654A foreign key (DATAOBJECTID) references nmr.COOR_COORD;
alter table nmr.COOR_MODEL add constraint COOR_MODEL_STRUENSE_TO_FK foreign key (TOPOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_MODEL add constraint COOR_MODEL_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_MODEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_MODEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_MODEL2APPLDATA add constraint FKA142E0CEDF33257E foreign key (DATAOBJECTID) references nmr.COOR_MODEL;
alter table nmr.COOR_RESIDUE add constraint COOR_RESIDUE_STRUENSE_TO_FK foreign key (TOPOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.COOR_RESIDUE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_RESIDUE add constraint COOR_RESIDUE_CHAIN_FK foreign key (CHAINID) references nmr.COOR_CHAIN;
alter table nmr.COOR_RESIDUE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_RESIDUE2APPLDATA add constraint FK98AD40AC66DB13A0 foreign key (DATAOBJECTID) references nmr.COOR_RESIDUE;
alter table nmr.COOR_STRUCTUREENSEMBLE add constraint COOR_STRUENSE_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.COOR_STRUCTUREENSEMBLE add constraint COOR_STRUENSE_STRUGENE_FK foreign key (STRUCTUREGENERATIONID) references nmr.NMR_STRUCTUREGENERATION;
alter table nmr.COOR_STRUCTUREENSEMBLE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.COOR_STRUENSE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.COOR_STRUENSE2APPLDATA add constraint FK81687D982A72D071 foreign key (DATAOBJECTID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.DBR_DATABASE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DBR_DATABASE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DBR_DATABASE2APPLDATA add constraint FK65AB57C185D7F350 foreign key (DATAOBJECTID) references nmr.DBR_DATABASE;
alter table nmr.DBR_ENTRY add constraint DBR_ENTRY_DATABASE_TO_FK foreign key (TOPOBJECTID) references nmr.DBR_DATABASE;
alter table nmr.DBR_ENTRY add constraint DBR_ENTRY_DATABASE_FK foreign key (DATABASEID) references nmr.DBR_DATABASE;
alter table nmr.DBR_ENTRY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DBR_ENTRY2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DBR_ENTRY2APPLDATA add constraint FKB7C722C09002BCC5 foreign key (DATAOBJECTID) references nmr.DBR_ENTRY;
alter table nmr.DLOC_ABSTDATASTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DLOC_ABSTDATASTOR2APPLDATA add constraint FKEF782E34B6365DA2 foreign key (DATAOBJECTID) references nmr.DLOC_ABSTRACTDATASTORE;
alter table nmr.DLOC_ABSTRACTDATASTORE add constraint DLOC_ABSTDATASTOR_DATALOCASTOR_FK foreign key (DATALOCATIONSTOREID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_ABSTRACTDATASTORE add constraint DLOC_ABSTDATASTOR_DATALOCASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_ABSTRACTDATASTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DLOC_ABSTRACTDATASTORE add constraint DLOC_ABSTDATASTOR_DATAURL_FK foreign key (DATAURLID) references nmr.DLOC_DATAURL;
alter table nmr.DLOC_BLOCBINAMATR_BLOCKSIZES add constraint DLOC_BLOCBINAMATR_BLOCKSIZES_FK foreign key (BLOCKEDBINARYMATRIXID) references nmr.DLOC_BLOCKEDBINARYMATRIX;
alter table nmr.DLOC_BLOCKEDBINARYMATRIX add constraint DLOC_BLOCBINAMATR_NUMEMATR_FK foreign key (NUMERICMATRIXID) references nmr.DLOC_NUMERICMATRIX;
alter table nmr.DLOC_COMPONENT add constraint DLOC_COMPONENT_DATALOCASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_COMPONENT add constraint DLOC_COMPONENT_SHAPMATR_FK foreign key (SHAPEMATRIXID) references nmr.DLOC_SHAPEMATRIX;
alter table nmr.DLOC_COMPONENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DLOC_COMPONENT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DLOC_COMPONENT2APPLDATA add constraint FK2009674D77330A4A foreign key (DATAOBJECTID) references nmr.DLOC_COMPONENT;
alter table nmr.DLOC_COMPONENTSHAPE add constraint DLOC_COMPSHAP_DATALOCASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_COMPONENTSHAPE add constraint DLOC_COMPSHAP_SHAPMATR_FK foreign key (SHAPEMATRIXID) references nmr.DLOC_SHAPEMATRIX;
alter table nmr.DLOC_COMPONENTSHAPE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DLOC_COMPSHAP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DLOC_COMPSHAP2APPLDATA add constraint FK1C262A3183AE6D7F foreign key (DATAOBJECTID) references nmr.DLOC_COMPONENTSHAPE;
alter table nmr.DLOC_COMPSHAP_DIMS add constraint DLOC_COMPSHAP_DIMS_FK foreign key (COMPONENTSHAPEID) references nmr.DLOC_COMPONENTSHAPE;
alter table nmr.DLOC_DATALOCASTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DLOC_DATALOCASTOR2APPLDATA add constraint FK482ED5B559664AEF foreign key (DATAOBJECTID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_DATALOCATIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DLOC_DATAURL add constraint DLOC_DATAURL_DATALOCASTOR_FK foreign key (DATALOCATIONSTOREID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_DATAURL add constraint DLOC_DATAURL_DATALOCASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.DLOC_DATAURL add constraint DLOC_DATAURL_URL_FK foreign key (URLID) references nmr.IMPL_URL;
alter table nmr.DLOC_DATAURL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.DLOC_DATAURL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.DLOC_DATAURL2APPLDATA add constraint FK8C523885F5EA60F2 foreign key (DATAOBJECTID) references nmr.DLOC_DATAURL;
alter table nmr.DLOC_MIMETYPEDATASTORE add constraint DLOC_MIMETYPEDATASTOR_ABSTDATASTOR_FK foreign key (ABSTRACTDATASTOREID) references nmr.DLOC_ABSTRACTDATASTORE;
alter table nmr.DLOC_MIMETYPEDATASTORE add constraint DLOC_MIMETYPEDATASTOR_NMRDATASOURIMAG_FK foreign key (NMRDATASOURCEIMAGEID) references nmr.NMR_DATASOURCEIMAGE;
alter table nmr.DLOC_NUMEMATR_ISCOMPLEX add constraint DLOC_NUMEMATR_ISCOMPLEX_FK foreign key (NUMERICMATRIXID) references nmr.DLOC_NUMERICMATRIX;
alter table nmr.DLOC_NUMEMATR_NUMPOINTS add constraint DLOC_NUMEMATR_NUMPOINTS_FK foreign key (NUMERICMATRIXID) references nmr.DLOC_NUMERICMATRIX;
alter table nmr.DLOC_NUMERICMATRIX add constraint DLOC_NUMEMATR_ABSTDATASTOR_FK foreign key (ABSTRACTDATASTOREID) references nmr.DLOC_ABSTRACTDATASTORE;
alter table nmr.DLOC_SHAPEMATRIX add constraint DLOC_SHAPMATR_NUMEMATR_FK foreign key (NUMERICMATRIXID) references nmr.DLOC_NUMERICMATRIX;
alter table nmr.ENTR_ENTRMOLE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ENTR_ENTRMOLE2APPLDATA add constraint FKCCF543AD4A7D28FA foreign key (DATAOBJECTID) references nmr.ENTR_ENTRYMOLECULE;
alter table nmr.ENTR_ENTRY add constraint ENTR_ENTRY_STUDY_FK foreign key (STUDYID) references nmr.ENTR_STUDY;
alter table nmr.ENTR_ENTRY add constraint ENTR_ENTRY_PRIMCITA_FK foreign key (PRIMARYCITATIONID) references nmr.CITA_CITATION;
alter table nmr.ENTR_ENTRY add constraint ENTR_ENTRY_NMRENTRSTOR_FK foreign key (NMRENTRYSTOREID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_ENTRY add constraint ENTR_ENTRY_NMRENTRSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_ENTRY add constraint ENTR_ENTRY_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.ENTR_ENTRY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ENTR_ENTRY2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ENTR_ENTRY2APPLDATA add constraint FK8057ED0D3F369A54 foreign key (DATAOBJECTID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2AUTHORS add constraint ENTR_ENTRY_AUTHORS_FK foreign key (AUTHORID) references nmr.AFFI_PERSON;
alter table nmr.ENTR_ENTRY2AUTHORS add constraint AFFI_PERSON_AUTHENTR_FK foreign key (AUTHOREDENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2CONTPERS add constraint AFFI_PERSON_CONTENTR_FK foreign key (CONTACTENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2CONTPERS add constraint ENTR_ENTRY_CONTPERS_FK foreign key (CONTACTPERSONID) references nmr.AFFI_PERSON;
alter table nmr.ENTR_ENTRY2DERIDATALIST add constraint ENTR_ENTRY_DERIDATALIST_FK foreign key (DERIVEDDATALISTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.ENTR_ENTRY2DERIDATALIST add constraint NMR_DERIDATALIST_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2EXPE add constraint NMR_EXPERIMENT_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2EXPE add constraint ENTR_ENTRY_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.ENTR_ENTRY2LABO add constraint ENTR_ENTRY_LABO_FK foreign key (LABORATORYID) references nmr.AFFI_GROUP;
alter table nmr.ENTR_ENTRY2LABO add constraint AFFI_GROUP_NMRENTRIES_FK foreign key (NMRENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2MEASLIST add constraint NMR_ABSTMEASLIST_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2MEASLIST add constraint ENTR_ENTRY_MEASLIST_FK foreign key (MEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.ENTR_ENTRY2OTHECITA add constraint ENTR_ENTRY_OTHECITA_FK foreign key (OTHERCITATIONID) references nmr.CITA_CITATION;
alter table nmr.ENTR_ENTRY2OTHECITA add constraint CITA_CITATION_NMRENTRIES_FK foreign key (NMRENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2PEAKLISTS add constraint ENTR_ENTRY_PEAKLISTS_FK foreign key (PEAKLISTID) references nmr.NMR_PEAKLIST;
alter table nmr.ENTR_ENTRY2PEAKLISTS add constraint NMR_PEAKLIST_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2SOFTWARE add constraint ENTR_ENTRY_SOFTWARE_FK foreign key (SOFTWAREID) references nmr.METH_SOFTWARE;
alter table nmr.ENTR_ENTRY2SOFTWARE add constraint METH_SOFTWARE_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2STRUANAL add constraint NMR_STRUANAL_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2STRUANAL add constraint ENTR_ENTRY_STRUANAL_FK foreign key (STRUCTUREANALYSISID) references nmr.NMR_STRUCTUREANALYSIS;
alter table nmr.ENTR_ENTRY2STRUGENE add constraint ENTR_ENTRY_STRUGENE_FK foreign key (STRUCTUREGENERATIONID) references nmr.NMR_STRUCTUREGENERATION;
alter table nmr.ENTR_ENTRY2STRUGENE add constraint NMR_STRUGENE_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2STRUGROU add constraint MOLS_STRUGROU_ENTRIES_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRY2STRUGROU add constraint ENTR_ENTRY_STRUGROU_FK foreign key (STRUCTUREGROUPID) references nmr.MOLS_STRUCTUREGROUP;
alter table nmr.ENTR_ENTRYMOLECULE add constraint ENTR_ENTRMOLE_NMRENTRSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_ENTRYMOLECULE add constraint ENTR_ENTRMOLE_ENTRY_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_ENTRYMOLECULE add constraint ENTR_ENTRMOLE_EXPESOUR_FK foreign key (EXPERIMENTALSOURCEID) references nmr.TAXO_NATURALSOURCE;
alter table nmr.ENTR_ENTRYMOLECULE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ENTR_ENTRYMOLECULE add constraint ENTR_ENTRMOLE_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.ENTR_ENTRY_KEYWORDS add constraint ENTR_ENTRY_KEYWORDS_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_NMRENTRSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ENTR_NMRENTRSTOR2APPLDATA add constraint FKB0186C01B2FD3664 foreign key (DATAOBJECTID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_NMRENTRYSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ENTR_RELAENTR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ENTR_RELAENTR2APPLDATA add constraint FKBBF58280AD96A3ED foreign key (DATAOBJECTID) references nmr.ENTR_RELATEDENTRY;
alter table nmr.ENTR_RELATEDENTRY add constraint ENTR_RELAENTR_NMRENTRSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_RELATEDENTRY add constraint ENTR_RELAENTR_ENTRY_FK foreign key (ENTRYID) references nmr.ENTR_ENTRY;
alter table nmr.ENTR_RELATEDENTRY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ENTR_STUDY add constraint ENTR_STUDY_NMRENTRSTOR_FK foreign key (NMRENTRYSTOREID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_STUDY add constraint ENTR_STUDY_NMRENTRSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.ENTR_STUDY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.ENTR_STUDY2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.ENTR_STUDY2APPLDATA add constraint FK54BAF9963FFE9FAB foreign key (DATAOBJECTID) references nmr.ENTR_STUDY;
alter table nmr.ENTR_STUDY_KEYWORDS add constraint ENTR_STUDY_KEYWORDS_FK foreign key (STUDYID) references nmr.ENTR_STUDY;
alter table nmr.HOLD_ABSTHOLDTYPE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_ABSTHOLDTYPE2APPLDATA add constraint FK8B2028EC5978E135 foreign key (DATAOBJECTID) references nmr.HOLD_ABSTRACTHOLDERTYPE;
alter table nmr.HOLD_ABSTHOLDTYPE2HOLDCATE add constraint HOLD_ABSTHOLDTYPE_HOLDCATE_FK foreign key (HOLDERCATEGORYID) references nmr.CLAS_HOLDERCATEGORY;
alter table nmr.HOLD_ABSTHOLDTYPE2HOLDCATE add constraint CLAS_HOLDCATE_ABSTHOLDTYPE_FK foreign key (ABSTRACTHOLDERTYPEID) references nmr.HOLD_ABSTRACTHOLDERTYPE;
alter table nmr.HOLD_ABSTRACTHOLDERTYPE add constraint HOLD_ABSTHOLDTYPE_HOLDSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_ABSTRACTHOLDERTYPE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_ABSTRACTHOLDERTYPE add constraint HOLD_ABSTHOLDTYPE_HOLDSTOR_FK foreign key (HOLDERSTOREID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDER add constraint HOLD_HOLDER_HOLDER_FK foreign key (HOLDERID) references nmr.HOLD_HOLDER;
alter table nmr.HOLD_HOLDER add constraint HOLD_HOLDER_HOLDSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDER add constraint HOLD_HOLDER_HOLDERTYPE_FK foreign key (HOLDERTYPEID) references nmr.HOLD_ABSTRACTHOLDERTYPE;
alter table nmr.HOLD_HOLDER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_HOLDER add constraint HOLD_HOLDER_HOLDSTOR_FK foreign key (HOLDERSTOREID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_HOLDER2APPLDATA add constraint FKB95E6F1B9B273F99 foreign key (DATAOBJECTID) references nmr.HOLD_HOLDER;
alter table nmr.HOLD_HOLDER2HOLDCATE add constraint CLAS_HOLDCATE_HOLDERS_FK foreign key (HOLDERID) references nmr.HOLD_HOLDER;
alter table nmr.HOLD_HOLDER2HOLDCATE add constraint HOLD_HOLDER_HOLDCATE_FK foreign key (HOLDERCATEGORYID) references nmr.CLAS_HOLDERCATEGORY;
alter table nmr.HOLD_HOLDERLOCATION add constraint HOLD_HOLDLOCA_HOLDER_FK foreign key (HOLDERID) references nmr.HOLD_HOLDER;
alter table nmr.HOLD_HOLDERLOCATION add constraint HOLD_HOLDLOCA_HOLDSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDERLOCATION add constraint HOLD_HOLDLOCA_LOCATION_FK foreign key (LOCATIONID) references nmr.LOCA_LOCATION;
alter table nmr.HOLD_HOLDERLOCATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_HOLDERSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_HOLDERTYPE add constraint HOLD_HOLDERTYPE_ABSTHOLDTYPE_FK foreign key (ABSTRACTHOLDERTYPEID) references nmr.HOLD_ABSTRACTHOLDERTYPE;
alter table nmr.HOLD_HOLDERTYPEPOSITION add constraint HOLD_HOLDTYPEPOSI_HOLDSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDERTYPEPOSITION add constraint HOLD_HOLDTYPEPOSI_HOLDERTYPE_FK foreign key (HOLDERTYPEID) references nmr.HOLD_HOLDERTYPE;
alter table nmr.HOLD_HOLDERTYPEPOSITION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_HOLDLOCA2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_HOLDLOCA2APPLDATA add constraint FK9F9F68E750FD1E6E foreign key (DATAOBJECTID) references nmr.HOLD_HOLDERLOCATION;
alter table nmr.HOLD_HOLDSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_HOLDSTOR2APPLDATA add constraint FK7F45B564AFE7DAD0 foreign key (DATAOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_HOLDTYPEPOSI2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_HOLDTYPEPOSI2APPLDATA add constraint FK278BC6793E65EEBC foreign key (DATAOBJECTID) references nmr.HOLD_HOLDERTYPEPOSITION;
alter table nmr.HOLD_PINTYPE add constraint HOLD_PINTYPE_ABSTHOLDTYPE_FK foreign key (ABSTRACTHOLDERTYPEID) references nmr.HOLD_ABSTRACTHOLDERTYPE;
alter table nmr.HOLD_REFSAMPLEPOSITION add constraint HOLD_REFSAMPPOSI_HOLDER_FK foreign key (HOLDERID) references nmr.HOLD_HOLDER;
alter table nmr.HOLD_REFSAMPLEPOSITION add constraint HOLD_REFSAMPPOSI_HOLDSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.HOLD_REFSAMPLEPOSITION add constraint HOLD_REFSAMPPOSI_REFSAMPLE_FK foreign key (REFSAMPLEID) references nmr.SAM_REFSAMPLE;
alter table nmr.HOLD_REFSAMPLEPOSITION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.HOLD_REFSAMPPOSI2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.HOLD_REFSAMPPOSI2APPLDATA add constraint FKD4E7C6E693D0F61 foreign key (DATAOBJECTID) references nmr.HOLD_REFSAMPLEPOSITION;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCHEMELEMSTOR_FK foreign key (CURRENTCHEMELEMENTSTOREID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRMOLE_FK foreign key (CURRENTMOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRSAMPSTOR_FK foreign key (CURRENTSAMPLESTOREID) references nmr.SAM_SAMPLESTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRNMRENTRSTOR_FK foreign key (CURRENTNMRENTRYSTOREID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRSTRUENSE_FK foreign key (CURRENTSTRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRREFSAMPCOMPSTOR_FK foreign key (CURRENTREFSAMPLECOMPONENTSTOREID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRAFFISTOR_FK foreign key (CURRENTAFFILIATIONSTOREID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRLABESCHE_FK foreign key (CURRENTLABELINGSCHEMEID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCITASTOR_FK foreign key (CURRENTCITATIONSTOREID) references nmr.CITA_CITATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRLABEMOLE_FK foreign key (CURRENTLABELEDMOLECULEID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCHEMCOMPCHAR_FK foreign key (CURRENTCHEMCOMPCHARGEID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRVALISTOR_FK foreign key (CURRENTVALIDATIONSTOREID) references nmr.VALD_VALIDATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCHEMCOMPCOOR_FK foreign key (CURRENTCHEMCOMPCOORDID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRNMRPROJ_FK foreign key (CURRENTNMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRNMRREFESTOR_FK foreign key (CURRENTNMRREFERENCESTOREID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRKEYWDEFISTOR_FK foreign key (CURRENTKEYWORDDEFINITIONSTOREID) references nmr.KWDF_KEYWORDDEFINITIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRLOCASTOR_FK foreign key (CURRENTLOCATIONSTOREID) references nmr.LOCA_LOCATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCHEMCOMP_FK foreign key (CURRENTCHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRCLAS_FK foreign key (CURRENTCLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRNMREXPPROT_FK foreign key (CURRENTNMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRMOLSYST_FK foreign key (CURRENTMOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRTAXO_FK foreign key (CURRENTTAXONOMYID) references nmr.TAXO_TAXONOMY;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRMETHSTOR_FK foreign key (CURRENTMETHODSTOREID) references nmr.METH_METHODSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRSTERSTOR_FK foreign key (CURRENTSTEREOCHEMISTRYSTOREID) references nmr.STER_STEREOCHEMISTRYSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRDATALOCASTOR_FK foreign key (CURRENTDATALOCATIONSTOREID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRNMRCONSSTOR_FK foreign key (CURRENTNMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRACCECONTSTOR_FK foreign key (CURRENTACCESSCONTROLSTOREID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRHOLDSTOR_FK foreign key (CURRENTHOLDERSTOREID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRINSTSTOR_FK foreign key (CURRENTINSTRUMENTSTOREID) references nmr.INST_INSTRUMENTSTORE;
alter table nmr.IMPL_MEMOPSROOT add constraint IMPL_MEMOPSROOT_CURRDATA_FK foreign key (CURRENTDATABASEID) references nmr.DBR_DATABASE;
alter table nmr.IMPL_MEMOPSROOT2ACCECONTSTOR add constraint IMPL_MEMOPSROOT_ACCECONTSTOR_FK foreign key (ACCESSCONTROLSTOREID) references nmr.ACCO_ACCESSCONTROLSTORE;
alter table nmr.IMPL_MEMOPSROOT2ACCECONTSTOR add constraint ACCO_ACCECONTSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2AFFISTOR add constraint AFFI_AFFISTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2AFFISTOR add constraint IMPL_MEMOPSROOT_AFFISTOR_FK foreign key (AFFILIATIONSTOREID) references nmr.AFFI_AFFILIATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPCHAR add constraint IMPL_MEMOPSROOT_CHEMCOMPCHAR_FK foreign key (CHEMCOMPCHARGEID) references nmr.CCCA_CHEMCOMPCHARGE;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPCHAR add constraint CCCA_CHEMCOMPCHAR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPCOOR add constraint IMPL_MEMOPSROOT_CHEMCOMPCOOR_FK foreign key (CHEMCOMPCOORDID) references nmr.CCCO_CHEMCOMPCOORD;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPCOOR add constraint CCCO_CHEMCOMPCOOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPS add constraint CHEM_CHEMCOMP_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CHEMCOMPS add constraint IMPL_MEMOPSROOT_CHEMCOMPS_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.IMPL_MEMOPSROOT2CHEMELEMSTOR add constraint CHEL_CHEMELEMSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CHEMELEMSTOR add constraint IMPL_MEMOPSROOT_CHEMELEMSTOR_FK foreign key (CHEMELEMENTSTOREID) references nmr.CHEL_CHEMELEMENTSTORE;
alter table nmr.IMPL_MEMOPSROOT2CITASTOR add constraint CITA_CITASTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CITASTOR add constraint IMPL_MEMOPSROOT_CITASTOR_FK foreign key (CITATIONSTOREID) references nmr.CITA_CITATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT2CLAS add constraint CLAS_CLAS_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2CLAS add constraint IMPL_MEMOPSROOT_CLAS_FK foreign key (CLASSIFICATIONID) references nmr.CLAS_CLASSIFICATION;
alter table nmr.IMPL_MEMOPSROOT2DATABASES add constraint DBR_DATABASE_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2DATABASES add constraint IMPL_MEMOPSROOT_DATABASES_FK foreign key (DATABASEID) references nmr.DBR_DATABASE;
alter table nmr.IMPL_MEMOPSROOT2DATALOCASTOR add constraint IMPL_MEMOPSROOT_DATALOCASTOR_FK foreign key (DATALOCATIONSTOREID) references nmr.DLOC_DATALOCATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT2DATALOCASTOR add constraint DLOC_DATALOCASTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2HOLDSTOR add constraint HOLD_HOLDSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2HOLDSTOR add constraint IMPL_MEMOPSROOT_HOLDSTOR_FK foreign key (HOLDERSTOREID) references nmr.HOLD_HOLDERSTORE;
alter table nmr.IMPL_MEMOPSROOT2INSTSTOR add constraint IMPL_MEMOPSROOT_INSTSTOR_FK foreign key (INSTRUMENTSTOREID) references nmr.INST_INSTRUMENTSTORE;
alter table nmr.IMPL_MEMOPSROOT2INSTSTOR add constraint INST_INSTSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2KEYWDEFISTOR add constraint IMPL_MEMOPSROOT_KEYWDEFISTOR_FK foreign key (KEYWORDDEFINITIONSTOREID) references nmr.KWDF_KEYWORDDEFINITIONSTORE;
alter table nmr.IMPL_MEMOPSROOT2KEYWDEFISTOR add constraint KWDF_KEYWDEFISTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2LABEMOLE add constraint LMOL_LABEMOLE_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2LABEMOLE add constraint IMPL_MEMOPSROOT_LABEMOLE_FK foreign key (LABELEDMOLECULEID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.IMPL_MEMOPSROOT2LABESCHE add constraint IMPL_MEMOPSROOT_LABESCHE_FK foreign key (LABELINGSCHEMEID) references nmr.CCLB_LABELINGSCHEME;
alter table nmr.IMPL_MEMOPSROOT2LABESCHE add constraint CCLB_LABESCHE_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2LOCASTOR add constraint IMPL_MEMOPSROOT_LOCASTOR_FK foreign key (LOCATIONSTOREID) references nmr.LOCA_LOCATIONSTORE;
alter table nmr.IMPL_MEMOPSROOT2LOCASTOR add constraint LOCA_LOCASTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2METHSTOR add constraint METH_METHSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2METHSTOR add constraint IMPL_MEMOPSROOT_METHSTOR_FK foreign key (METHODSTOREID) references nmr.METH_METHODSTORE;
alter table nmr.IMPL_MEMOPSROOT2MOLECULES add constraint MOLE_MOLECULE_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2MOLECULES add constraint IMPL_MEMOPSROOT_MOLECULES_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.IMPL_MEMOPSROOT2MOLSYSTEMS add constraint IMPL_MEMOPSROOT_MOLSYSTEMS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.IMPL_MEMOPSROOT2MOLSYSTEMS add constraint MOLS_MOLSYSTEM_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2NMRCONSSTOR add constraint NMRC_NMRCONSSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2NMRCONSSTOR add constraint IMPL_MEMOPSROOT_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.IMPL_MEMOPSROOT2NMRENTRSTOR add constraint IMPL_MEMOPSROOT_NMRENTRSTOR_FK foreign key (NMRENTRYSTOREID) references nmr.ENTR_NMRENTRYSTORE;
alter table nmr.IMPL_MEMOPSROOT2NMRENTRSTOR add constraint ENTR_NMRENTRSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2NMREXPPROT add constraint NMRX_NMREXPPROT_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2NMREXPPROT add constraint IMPL_MEMOPSROOT_NMREXPPROT_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.IMPL_MEMOPSROOT2NMRPROJ add constraint IMPL_MEMOPSROOT_NMRPROJ_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.IMPL_MEMOPSROOT2NMRPROJ add constraint NMR_NMRPROJECT_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2NMRREFESTOR add constraint IMPL_MEMOPSROOT_NMRREFESTOR_FK foreign key (NMRREFERENCESTOREID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.IMPL_MEMOPSROOT2NMRREFESTOR add constraint NMRR_NMRREFESTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2REFSAMPCOMPSTOR add constraint IMPL_MEMOPSROOT_REFSAMPCOMPSTOR_FK foreign key (REFSAMPLECOMPONENTSTOREID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.IMPL_MEMOPSROOT2REFSAMPCOMPSTOR add constraint REFS_REFSAMPCOMPSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2SAMPSTOR add constraint SAM_SAMPSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2SAMPSTOR add constraint IMPL_MEMOPSROOT_SAMPSTOR_FK foreign key (SAMPLESTOREID) references nmr.SAM_SAMPLESTORE;
alter table nmr.IMPL_MEMOPSROOT2STERSTOR add constraint STER_STERSTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2STERSTOR add constraint IMPL_MEMOPSROOT_STERSTOR_FK foreign key (STEREOCHEMISTRYSTOREID) references nmr.STER_STEREOCHEMISTRYSTORE;
alter table nmr.IMPL_MEMOPSROOT2STRUENSE add constraint COOR_STRUENSE_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2STRUENSE add constraint IMPL_MEMOPSROOT_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.IMPL_MEMOPSROOT2TAXONOMIES add constraint IMPL_MEMOPSROOT_TAXONOMIES_FK foreign key (TAXONOMYID) references nmr.TAXO_TAXONOMY;
alter table nmr.IMPL_MEMOPSROOT2TAXONOMIES add constraint TAXO_TAXONOMY_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2VALISTOR add constraint VALD_VALISTOR_MEMOPSROOT_FK foreign key (MEMOPSROOTID) references nmr.IMPL_MEMOPSROOT;
alter table nmr.IMPL_MEMOPSROOT2VALISTOR add constraint IMPL_MEMOPSROOT_VALISTOR_FK foreign key (VALIDATIONSTOREID) references nmr.VALD_VALIDATIONSTORE;
alter table nmr.INST_ABSTINST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.INST_ABSTINST2APPLDATA add constraint FKCFF22A861D0E59C foreign key (DATAOBJECTID) references nmr.INST_ABSTRACTINSTRUMENT;
alter table nmr.INST_ABSTRACTINSTRUMENT add constraint INST_ABSTINST_INSTSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.INST_INSTRUMENTSTORE;
alter table nmr.INST_ABSTRACTINSTRUMENT add constraint INST_ABSTINST_INSTSTOR_FK foreign key (INSTRUMENTSTOREID) references nmr.INST_INSTRUMENTSTORE;
alter table nmr.INST_ABSTRACTINSTRUMENT add constraint INST_ABSTINST_CONTPERS_FK foreign key (CONTACTPERSONID) references nmr.AFFI_PERSON;
alter table nmr.INST_ABSTRACTINSTRUMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.INST_ABSTRACTINSTRUMENT add constraint INST_ABSTINST_MANU_FK foreign key (MANUFACTURERID) references nmr.AFFI_ORGANISATION;
alter table nmr.INST_COLUMN add constraint INST_COLUMN_LOADMETH_FK foreign key (LOADINGMETHODID) references nmr.METH_METHOD;
alter table nmr.INST_COLUMN add constraint INST_COLUMN_INSTRUMENT_FK foreign key (INSTRUMENTID) references nmr.INST_INSTRUMENT;
alter table nmr.INST_INSTRUMENT add constraint INST_INSTRUMENT_ABSTINST_FK foreign key (ABSTRACTINSTRUMENTID) references nmr.INST_ABSTRACTINSTRUMENT;
alter table nmr.INST_INSTRUMENTSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.INST_INSTSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.INST_INSTSTOR2APPLDATA add constraint FK2B39F5044C99802F foreign key (DATAOBJECTID) references nmr.INST_INSTRUMENTSTORE;
alter table nmr.INST_NMRPROBE add constraint INST_NMRPROBE_ABSTINST_FK foreign key (ABSTRACTINSTRUMENTID) references nmr.INST_ABSTRACTINSTRUMENT;
alter table nmr.INST_NMRPROBE2CITATIONS add constraint CITA_CITATION_NMRPROBES_FK foreign key (NMRPROBEID) references nmr.INST_NMRPROBE;
alter table nmr.INST_NMRPROBE2CITATIONS add constraint INST_NMRPROBE_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.INST_NMRSPEC2CITATIONS add constraint INST_NMRSPEC_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.INST_NMRSPEC2CITATIONS add constraint CITA_CITATION_NMRSPEC_FK foreign key (NMRSPECTROMETERID) references nmr.INST_NMRSPECTROMETER;
alter table nmr.INST_NMRSPECTROMETER add constraint INST_NMRSPEC_ABSTINST_FK foreign key (ABSTRACTINSTRUMENTID) references nmr.INST_ABSTRACTINSTRUMENT;
alter table nmr.KWDF_KEYWDEFI2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.KWDF_KEYWDEFI2APPLDATA add constraint FKC14983AD7F9316 foreign key (DATAOBJECTID) references nmr.KWDF_KEYWORDDEFINITION;
alter table nmr.KWDF_KEYWDEFISTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.KWDF_KEYWDEFISTOR2APPLDATA add constraint FKB4C96B366C192D73 foreign key (DATAOBJECTID) references nmr.KWDF_KEYWORDDEFINITIONSTORE;
alter table nmr.KWDF_KEYWDEFI_TARGNAME add constraint KWDF_KEYWDEFI_TARGNAME_FK foreign key (KEYWORDDEFINITIONID) references nmr.KWDF_KEYWORDDEFINITION;
alter table nmr.KWDF_KEYWORDDEFINITION add constraint KWDF_KEYWDEFI_KEYWDEFISTOR_TO_FK foreign key (TOPOBJECTID) references nmr.KWDF_KEYWORDDEFINITIONSTORE;
alter table nmr.KWDF_KEYWORDDEFINITION add constraint KWDF_KEYWDEFI_KEYWDEFISTOR_FK foreign key (KEYWORDDEFINITIONSTOREID) references nmr.KWDF_KEYWORDDEFINITIONSTORE;
alter table nmr.KWDF_KEYWORDDEFINITION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.KWDF_KEYWORDDEFINITIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_ATOMLABEL add constraint LMOL_ATOMLABEL_RESLABEL_FK foreign key (RESLABELID) references nmr.LMOL_RESLABEL;
alter table nmr.LMOL_ATOMLABEL add constraint LMOL_ATOMLABEL_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_ATOMLABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_ATOMLABEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_ATOMLABEL2APPLDATA add constraint FK24E010C5FE3D5B3C foreign key (DATAOBJECTID) references nmr.LMOL_ATOMLABEL;
alter table nmr.LMOL_LABELEDMIXTURE add constraint LMOL_LABEMIXT_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_LABELEDMIXTURE add constraint LMOL_LABEMIXT_AVERCOMP_FK foreign key (AVERAGECOMPOSITIONID) references nmr.LMOL_MOLLABEL;
alter table nmr.LMOL_LABELEDMIXTURE add constraint LMOL_LABEMIXT_LABEMOLE_FK foreign key (LABELEDMOLECULEID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_LABELEDMIXTURE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_LABELEDMOLECULE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_LABEMIXT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_LABEMIXT2APPLDATA add constraint FK294527D69A8B5D4C foreign key (DATAOBJECTID) references nmr.LMOL_LABELEDMIXTURE;
alter table nmr.LMOL_LABEMOLE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_LABEMOLE2APPLDATA add constraint FKC6906336B6CC192 foreign key (DATAOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_MOLLABEFRAC2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_MOLLABEFRAC2APPLDATA add constraint FK25484BF84ADC19FB foreign key (DATAOBJECTID) references nmr.LMOL_MOLLABELFRACTION;
alter table nmr.LMOL_MOLLABEL add constraint LMOL_MOLLABEL_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_MOLLABEL add constraint LMOL_MOLLABEL_LABEMOLE_FK foreign key (LABELEDMOLECULEID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_MOLLABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_MOLLABEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_MOLLABEL2APPLDATA add constraint FK6C4730FC56F558D9 foreign key (DATAOBJECTID) references nmr.LMOL_MOLLABEL;
alter table nmr.LMOL_MOLLABELFRACTION add constraint LMOL_MOLLABEFRAC_MOLLABEL_FK foreign key (MOLLABELID) references nmr.LMOL_MOLLABEL;
alter table nmr.LMOL_MOLLABELFRACTION add constraint LMOL_MOLLABEFRAC_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_MOLLABELFRACTION add constraint LMOL_MOLLABEFRAC_LABEMIXT_FK foreign key (LABELEDMIXTUREID) references nmr.LMOL_LABELEDMIXTURE;
alter table nmr.LMOL_MOLLABELFRACTION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_RESLABEFRAC2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_RESLABEFRAC2APPLDATA add constraint FK2C6D9225D33CC25 foreign key (DATAOBJECTID) references nmr.LMOL_RESLABELFRACTION;
alter table nmr.LMOL_RESLABEL add constraint LMOL_RESLABEL_MOLLABEL_FK foreign key (MOLLABELID) references nmr.LMOL_MOLLABEL;
alter table nmr.LMOL_RESLABEL add constraint LMOL_RESLABEL_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_RESLABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_RESLABEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LMOL_RESLABEL2APPLDATA add constraint FKA4E5C412594ED503 foreign key (DATAOBJECTID) references nmr.LMOL_RESLABEL;
alter table nmr.LMOL_RESLABELFRACTION add constraint LMOL_RESLABEFRAC_RESLABEL_FK foreign key (RESLABELID) references nmr.LMOL_RESLABEL;
alter table nmr.LMOL_RESLABELFRACTION add constraint LMOL_RESLABEFRAC_LABEMOLE_TO_FK foreign key (TOPOBJECTID) references nmr.LMOL_LABELEDMOLECULE;
alter table nmr.LMOL_RESLABELFRACTION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LMOL_SINGLEATOMLABEL add constraint LMOL_SINGATOMLABE_ATOMLABEL_FK foreign key (ATOMLABELID) references nmr.LMOL_ATOMLABEL;
alter table nmr.LMOL_UNIFORMATOMLABEL add constraint LMOL_UNIFATOMLABE_ATOMLABEL_FK foreign key (ATOMLABELID) references nmr.LMOL_ATOMLABEL;
alter table nmr.LOCA_LOCASTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LOCA_LOCASTOR2APPLDATA add constraint FK80045024459870B0 foreign key (DATAOBJECTID) references nmr.LOCA_LOCATIONSTORE;
alter table nmr.LOCA_LOCATION add constraint LOCA_LOCATION_ORGA_FK foreign key (ORGANISATIONID) references nmr.AFFI_ORGANISATION;
alter table nmr.LOCA_LOCATION add constraint LOCA_LOCATION_LOCASTOR_TO_FK foreign key (TOPOBJECTID) references nmr.LOCA_LOCATIONSTORE;
alter table nmr.LOCA_LOCATION add constraint LOCA_LOCATION_LOCASTOR_FK foreign key (LOCATIONSTOREID) references nmr.LOCA_LOCATIONSTORE;
alter table nmr.LOCA_LOCATION add constraint LOCA_LOCATION_LOCATION_FK foreign key (LOCATIONID) references nmr.LOCA_LOCATION;
alter table nmr.LOCA_LOCATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.LOCA_LOCATION2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.LOCA_LOCATION2APPLDATA add constraint FK48BF7714A1287DB9 foreign key (DATAOBJECTID) references nmr.LOCA_LOCATION;
alter table nmr.LOCA_LOCATIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.METH_METHOD add constraint METH_METHOD_METHSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.METH_METHODSTORE;
alter table nmr.METH_METHOD add constraint METH_METHOD_SOFTWARE_FK foreign key (SOFTWAREID) references nmr.METH_SOFTWARE;
alter table nmr.METH_METHOD add constraint METH_METHOD_METHSTOR_FK foreign key (METHODSTOREID) references nmr.METH_METHODSTORE;
alter table nmr.METH_METHOD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.METH_METHOD add constraint METH_METHOD_INSTRUMENT_FK foreign key (INSTRUMENTID) references nmr.INST_INSTRUMENT;
alter table nmr.METH_METHOD2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.METH_METHOD2APPLDATA add constraint FK947F1ED36CDFD11A foreign key (DATAOBJECTID) references nmr.METH_METHOD;
alter table nmr.METH_METHOD2CITATIONS add constraint CITA_CITATION_METHODS_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.METH_METHOD2CITATIONS add constraint METH_METHOD_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.METH_METHODSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.METH_METHSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.METH_METHSTOR2APPLDATA add constraint FK2F9221447C0311EF foreign key (DATAOBJECTID) references nmr.METH_METHODSTORE;
alter table nmr.METH_PARAMETER add constraint METH_PARAMETER_METHSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.METH_METHODSTORE;
alter table nmr.METH_PARAMETER add constraint METH_PARAMETER_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.METH_PARAMETER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.METH_PARAMETER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.METH_PARAMETER2APPLDATA add constraint FKB1D6D6716913F7D8 foreign key (DATAOBJECTID) references nmr.METH_PARAMETER;
alter table nmr.METH_SOFTWARE add constraint METH_SOFTWARE_METHSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.METH_METHODSTORE;
alter table nmr.METH_SOFTWARE add constraint METH_SOFTWARE_METHSTOR_FK foreign key (METHODSTOREID) references nmr.METH_METHODSTORE;
alter table nmr.METH_SOFTWARE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.METH_SOFTWARE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.METH_SOFTWARE2APPLDATA add constraint FKE75D18DACD5B8A0 foreign key (DATAOBJECTID) references nmr.METH_SOFTWARE;
alter table nmr.METH_SOFTWARE2CITATIONS add constraint CITA_CITATION_SOFTWARE_FK foreign key (SOFTWAREID) references nmr.METH_SOFTWARE;
alter table nmr.METH_SOFTWARE2CITATIONS add constraint METH_SOFTWARE_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.METH_SOFTWARE_TASKS add constraint METH_SOFTWARE_TASKS_FK foreign key (SOFTWAREID) references nmr.METH_SOFTWARE;
alter table nmr.MOLE_ALIGNMENT add constraint MOLE_ALIGNMENT_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_ALIGNMENT add constraint MOLE_ALIGNMENT_DBREF_FK foreign key (DBREFID) references nmr.DBR_ENTRY;
alter table nmr.MOLE_ALIGNMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_ALIGNMENT add constraint MOLE_ALIGNMENT_MOLSEQFRAG_FK foreign key (MOLSEQFRAGMENTID) references nmr.MOLE_MOLSEQFRAGMENT;
alter table nmr.MOLE_ALIGNMENT add constraint MOLE_ALIGNMENT_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_ALIGNMENT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_ALIGNMENT2APPLDATA add constraint FKFE516488BE64A775 foreign key (DATAOBJECTID) references nmr.MOLE_ALIGNMENT;
alter table nmr.MOLE_MOLECULE add constraint MOLE_MOLECULE_NATUSOUR_FK foreign key (NATURALSOURCEID) references nmr.TAXO_NATURALSOURCE;
alter table nmr.MOLE_MOLECULE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLECULE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLECULE2APPLDATA add constraint FK5BD4425D9CA097BC foreign key (DATAOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULE2CITATIONS add constraint MOLE_MOLECULE_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.MOLE_MOLECULE2CITATIONS add constraint CITA_CITATION_MOLECULES_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULESYSNAME add constraint MOLE_MOLESYSNAME_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULESYSNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLECULESYSNAME add constraint MOLE_MOLESYSNAME_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULE_COMMNAME add constraint MOLE_MOLECULE_COMMNAME_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULE_FUNCTIONS add constraint MOLE_MOLECULE_FUNCTIONS_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLECULE_KEYWORDS add constraint MOLE_MOLECULE_KEYWORDS_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLESYSNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLESYSNAME2APPLDATA add constraint FKFE4A66CE9D40ECA4 foreign key (DATAOBJECTID) references nmr.MOLE_MOLECULESYSNAME;
alter table nmr.MOLE_MOLRESIDUE add constraint MOLE_MOLRESIDUE_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLRESIDUE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLRESIDUE add constraint MOLE_MOLRESIDUE_MOLSEQFRAG_FK foreign key (MOLSEQFRAGMENTID) references nmr.MOLE_MOLSEQFRAGMENT;
alter table nmr.MOLE_MOLRESIDUE add constraint MOLE_MOLRESIDUE_CHEMCOMP_FK foreign key (CHEMCOMPID) references nmr.CHEM_CHEMCOMP;
alter table nmr.MOLE_MOLRESIDUE add constraint MOLE_MOLRESIDUE_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLRESIDUE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLRESIDUE2APPLDATA add constraint FKE7D059029CA6E3D7 foreign key (DATAOBJECTID) references nmr.MOLE_MOLRESIDUE;
alter table nmr.MOLE_MOLRESIDUE2ISOTLABE add constraint REFS_ISOTLABE_MOLRESI_FK foreign key (MOLRESIDUEID) references nmr.MOLE_MOLRESIDUE;
alter table nmr.MOLE_MOLRESIDUE2ISOTLABE add constraint MOLE_MOLRESIDUE_ISOTLABE_FK foreign key (ISOTOPELABELID) references nmr.REFS_ISOTOPELABEL;
alter table nmr.MOLE_MOLRESLINK add constraint MOLE_MOLRESLINK_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLRESLINK add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLRESLINK add constraint MOLE_MOLRESLINK_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLRESLINK2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLRESLINK2APPLDATA add constraint FK81496AD39C99C706 foreign key (DATAOBJECTID) references nmr.MOLE_MOLRESLINK;
alter table nmr.MOLE_MOLRESLINKEND add constraint MOLE_MOLRESLINKEND_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLRESLINKEND add constraint MOLE_MOLRESLINKEND_MOLRESIDUE_FK foreign key (MOLRESIDUEID) references nmr.MOLE_MOLRESIDUE;
alter table nmr.MOLE_MOLRESLINKEND add constraint MOLE_MOLRESLINKEND_MOLRESLINK_FK foreign key (MOLRESLINKID) references nmr.MOLE_MOLRESLINK;
alter table nmr.MOLE_MOLRESLINKEND add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLRESLINKEND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLRESLINKEND2APPLDATA add constraint FKAA4474E0BB15FEFD foreign key (DATAOBJECTID) references nmr.MOLE_MOLRESLINKEND;
alter table nmr.MOLE_MOLSEQFRAG2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLE_MOLSEQFRAG2APPLDATA add constraint FKEC89867CF6FE2A1B foreign key (DATAOBJECTID) references nmr.MOLE_MOLSEQFRAGMENT;
alter table nmr.MOLE_MOLSEQFRAGMENT add constraint MOLE_MOLSEQFRAG_MOLECULE_TO_FK foreign key (TOPOBJECTID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLE_MOLSEQFRAGMENT add constraint MOLE_MOLSEQFRAG_NATUSOUR_FK foreign key (NATURALSOURCEID) references nmr.TAXO_NATURALSOURCE;
alter table nmr.MOLE_MOLSEQFRAGMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLE_MOLSEQFRAGMENT add constraint MOLE_MOLSEQFRAG_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLS_ATOM add constraint MOLS_ATOM_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_ATOM add constraint MOLS_ATOM_ATOMSET_FK foreign key (ATOMSETID) references nmr.NMR_ATOMSET;
alter table nmr.MOLS_ATOM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_ATOM add constraint MOLS_ATOM_RESIDUE_FK foreign key (RESIDUEID) references nmr.MOLS_RESIDUE;
alter table nmr.MOLS_ATOM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_ATOM2APPLDATA add constraint FKDB93ED80D11E5280 foreign key (DATAOBJECTID) references nmr.MOLS_ATOM;
alter table nmr.MOLS_CHAIFRAG2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_CHAIFRAG2APPLDATA add constraint FK2BC2CAD2351EEFEA foreign key (DATAOBJECTID) references nmr.MOLS_CHAINFRAGMENT;
alter table nmr.MOLS_CHAIINTE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_CHAIINTE2APPLDATA add constraint FKFCEBAAEECAF2FD40 foreign key (DATAOBJECTID) references nmr.MOLS_CHAININTERACTION;
alter table nmr.MOLS_CHAIINTE2CHAINS add constraint MOLS_CHAIN_CHAIINTE_FK foreign key (CHAININTERACTIONID) references nmr.MOLS_CHAININTERACTION;
alter table nmr.MOLS_CHAIINTE2CHAINS add constraint MOLS_CHAIINTE_CHAINS_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.MOLS_CHAIN add constraint MOLS_CHAIN_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_CHAIN add constraint MOLS_CHAIN_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_CHAIN add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_CHAIN add constraint MOLS_CHAIN_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.MOLS_CHAIN2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_CHAIN2APPLDATA add constraint FK6650A59CDF3F3F7A foreign key (DATAOBJECTID) references nmr.MOLS_CHAIN;
alter table nmr.MOLS_CHAINFRAGMENT add constraint MOLS_CHAIFRAG_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_CHAINFRAGMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_CHAINFRAGMENT add constraint MOLS_CHAIFRAG_CHAIN_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.MOLS_CHAININTERACTION add constraint MOLS_CHAIINTE_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_CHAININTERACTION add constraint MOLS_CHAIINTE_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_CHAININTERACTION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_MOLSYSTEM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_MOLSYSTEM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_MOLSYSTEM2APPLDATA add constraint FK81F406A4913C12 foreign key (DATAOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEM2CITATIONS add constraint CITA_CITATION_MOLSYSTEMS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEM2CITATIONS add constraint MOLS_MOLSYSTEM_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.MOLS_MOLSYSTEM2DBREFE add constraint DBR_ENTRY_MOLSYSTEMS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEM2DBREFE add constraint MOLS_MOLSYSTEM_DBREFE_FK foreign key (DBREFERENCEID) references nmr.DBR_ENTRY;
alter table nmr.MOLS_MOLSYSTEMLINK add constraint MOLS_MOLSYSTLINK_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEMLINK add constraint MOLS_MOLSYSTLINK_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEMLINK add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_MOLSYSTEMLINKEND add constraint MOLS_MOLSYSTLINKEND_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEMLINKEND add constraint MOLS_MOLSYSTLINKEND_MOLSYSTLINK_FK foreign key (MOLSYSTEMLINKID) references nmr.MOLS_MOLSYSTEMLINK;
alter table nmr.MOLS_MOLSYSTEMLINKEND add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_MOLSYSTEMLINKEND add constraint MOLS_MOLSYSTLINKEND_RESIDUE_FK foreign key (RESIDUEID) references nmr.MOLS_RESIDUE;
alter table nmr.MOLS_MOLSYSTEMSYSNAME add constraint MOLS_MOLSYSTSYSNAME_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEMSYSNAME add constraint MOLS_MOLSYSTSYSNAME_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEMSYSNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_MOLSYSTEM_COMMNAME add constraint MOLS_MOLSYSTEM_COMMNAME_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEM_FUNCTIONS add constraint MOLS_MOLSYSTEM_FUNCTIONS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTEM_KEYWORDS add constraint MOLS_MOLSYSTEM_KEYWORDS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_MOLSYSTLINK2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_MOLSYSTLINK2APPLDATA add constraint FK822DB6523607C92C foreign key (DATAOBJECTID) references nmr.MOLS_MOLSYSTEMLINK;
alter table nmr.MOLS_MOLSYSTLINKEND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_MOLSYSTLINKEND2APPLDATA add constraint FK7132050183E20317 foreign key (DATAOBJECTID) references nmr.MOLS_MOLSYSTEMLINKEND;
alter table nmr.MOLS_MOLSYSTSYSNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_MOLSYSTSYSNAME2APPLDATA add constraint FKAF61E6AA11B4DB8E foreign key (DATAOBJECTID) references nmr.MOLS_MOLSYSTEMSYSNAME;
alter table nmr.MOLS_NONCOVABOND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_NONCOVABOND2APPLDATA add constraint FK91C8957693F42F5F foreign key (DATAOBJECTID) references nmr.MOLS_NONCOVALENTBOND;
alter table nmr.MOLS_NONCOVABOND2ATOMS add constraint MOLS_ATOM_NONCOVABOND_FK foreign key (NONCOVALENTBONDID) references nmr.MOLS_NONCOVALENTBOND;
alter table nmr.MOLS_NONCOVABOND2ATOMS add constraint MOLS_NONCOVABOND_ATOMS_FK foreign key (ATOMID) references nmr.MOLS_ATOM;
alter table nmr.MOLS_NONCOVALENTBOND add constraint MOLS_NONCOVABOND_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_NONCOVALENTBOND add constraint MOLS_NONCOVABOND_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_NONCOVALENTBOND add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_RESIDUE add constraint MOLS_RESIDUE_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_RESIDUE add constraint MOLS_RESIDUE_MOLE_MOLRESIDUE_FK foreign key (MOLRESIDUEID) references nmr.MOLE_MOLRESIDUE;
alter table nmr.MOLS_RESIDUE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_RESIDUE add constraint MOLS_RESIDUE_CHAIFRAG_FK foreign key (CHAINFRAGMENTID) references nmr.MOLS_CHAINFRAGMENT;
alter table nmr.MOLS_RESIDUE add constraint MOLS_RESIDUE_CHAIN_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.MOLS_RESIDUE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_RESIDUE2APPLDATA add constraint FK72399492B1614904 foreign key (DATAOBJECTID) references nmr.MOLS_RESIDUE;
alter table nmr.MOLS_STRUCTUREGROUP add constraint MOLS_STRUGROU_MOLSYSTEM_TO_FK foreign key (TOPOBJECTID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_STRUCTUREGROUP add constraint MOLS_STRUGROU_MOLSYSTEM_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.MOLS_STRUCTUREGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.MOLS_STRUGROU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.MOLS_STRUGROU2APPLDATA add constraint FKC6378FDC9F57583B foreign key (DATAOBJECTID) references nmr.MOLS_STRUCTUREGROUP;
alter table nmr.MOLS_STRUGROU2MODELS add constraint MOLS_STRUGROU_MODELS_FK foreign key (MODELID) references nmr.COOR_MODEL;
alter table nmr.MOLS_STRUGROU2MODELS add constraint COOR_MODEL_STRUGROU_FK foreign key (STRUCTUREGROUPID) references nmr.MOLS_STRUCTUREGROUP;
alter table nmr.NMRC_ABSTCONS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_ABSTCONS2APPLDATA add constraint FK67E215659971176E foreign key (DATAOBJECTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_ABSTCONS2NMRCONSVALI add constraint NMRC_ABSTCONS_NMRCONSVALI_FK foreign key (NMRCONSTRAINTVALIDATIONID) references nmr.VALD_NMRCONSTRAINTVALIDATION;
alter table nmr.NMRC_ABSTCONS2NMRCONSVALI add constraint VALD_NMRCONSVALI_NMRCONS_FK foreign key (NMRCONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_ABSTCONSLIST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_ABSTCONSLIST2APPLDATA add constraint FKA7DCBF875A92972C foreign key (DATAOBJECTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_ABSTCONSLIST2NMRCONSLISTVALI add constraint VALD_NMRCONSLISTVALI_NMRCONSLIST_FK foreign key (NMRCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_ABSTCONSLIST2NMRCONSLISTVALI add constraint NMRC_ABSTCONSLIST_NMRCONSLISTVALI_FK foreign key (NMRCONSTRAINTLISTVALIDATIONID) references nmr.VALD_NMRCONSTRAINTLISTVALIDATION;
alter table nmr.NMRC_ABSTCONSLIST_EXPESERI add constraint NMRC_ABSTCONSLIST_EXPESERI_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_ABSTCONSLIST_MEASLISTSERI add constraint NMRC_ABSTCONSLIST_MEASLISTSERI_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_ABSTRACTCONSTRAINT add constraint NMRC_ABSTCONS_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_ABSTRACTCONSTRAINT add constraint NMRC_ABSTCONS_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMRC_ABSTRACTCONSTRAINT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_ABSTRACTCONSTRAINTLIST add constraint NMRC_ABSTCONSLIST_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_ABSTRACTCONSTRAINTLIST add constraint NMRC_ABSTCONSLIST_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_ABSTRACTCONSTRAINTLIST add constraint NMRC_ABSTCONSLIST_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMRC_ABSTRACTCONSTRAINTLIST add constraint NMRC_ABSTCONSLIST_CONDSTAT_FK foreign key (CONDITIONSTATEID) references nmr.NMRC_CONDITIONSTATE;
alter table nmr.NMRC_ABSTRACTCONSTRAINTLIST add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_CHAINSTATELINK add constraint NMRC_CHAISTATLINK_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CHAINSTATELINK add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_CHAINSTATELINK add constraint NMRC_CHAISTATLINK_FIXERESO_FK foreign key (FIXEDRESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_CHAISTATLINK2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_CHAISTATLINK2APPLDATA add constraint FK8BBE3BBDDC967FB9 foreign key (DATAOBJECTID) references nmr.NMRC_CHAINSTATELINK;
alter table nmr.NMRC_CHEMSHIFTCONSTRAINT add constraint NMRC_CHEMSHIFCONS_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_CHEMSHIFTCONSTRAINT add constraint NMRC_CHEMSHIFCONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_CHEMSHIFTCONSTRAINT add constraint NMRC_CHEMSHIFCONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_CHEMSHIFTCONSTRAINTLIST;
alter table nmr.NMRC_CHEMSHIFTCONSTRAINTLIST add constraint NMRC_CHEMSHIFCONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_CONDITIONSTATE add constraint NMRC_CONDSTAT_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CONDITIONSTATE add constraint NMRC_CONDSTAT_DYNAALIG_FK foreign key (DYNAMICALIGNMENTID) references nmr.IMPL_SYMMTRACELESSMATRIX;
alter table nmr.NMRC_CONDITIONSTATE add constraint NMRC_CONDSTAT_STATALIG_FK foreign key (STATICALIGNMENTID) references nmr.IMPL_SYMMTRACELESSMATRIX;
alter table nmr.NMRC_CONDITIONSTATE add constraint NMRC_CONDSTAT_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CONDITIONSTATE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_CONDSTAT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_CONDSTAT2APPLDATA add constraint FK11CD68C297DE5585 foreign key (DATAOBJECTID) references nmr.NMRC_CONDITIONSTATE;
alter table nmr.NMRC_CONSGROU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_CONSGROU2APPLDATA add constraint FK290FD7F6585833B foreign key (DATAOBJECTID) references nmr.NMRC_CONSTRAINTGROUP;
alter table nmr.NMRC_CONSGROU2CONS add constraint NMRC_CONSGROU_CONS_FK foreign key (CONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_CONSGROU2CONS add constraint NMRC_ABSTCONS_CONSGROU_FK foreign key (CONSTRAINTGROUPID) references nmr.NMRC_CONSTRAINTGROUP;
alter table nmr.NMRC_CONSPEAKCONT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_CONSPEAKCONT2APPLDATA add constraint FK4852D376CD647576 foreign key (DATAOBJECTID) references nmr.NMRC_CONSTRAINTPEAKCONTRIB;
alter table nmr.NMRC_CONSTRAINTGROUP add constraint NMRC_CONSGROU_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CONSTRAINTGROUP add constraint NMRC_CONSGROU_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CONSTRAINTGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_CONSTRAINTPEAKCONTRIB add constraint NMRC_CONSPEAKCONT_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_CONSTRAINTPEAKCONTRIB add constraint NMRC_CONSPEAKCONT_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_CONSTRAINTPEAKCONTRIB add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_CSACONSTRAINT add constraint NMRC_CSACONS_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_CSACONSTRAINT add constraint NMRC_CSACONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_CSACONSTRAINT add constraint NMRC_CSACONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_CSACONSTRAINTLIST;
alter table nmr.NMRC_CSACONSTRAINTLIST add constraint NMRC_CSACONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_DIHECONS2RESONANCES add constraint NMRC_FIXERESO_DIHECONS_FK foreign key (DIHEDRALCONSTRAINTID) references nmr.NMRC_DIHEDRALCONSTRAINT;
alter table nmr.NMRC_DIHECONS2RESONANCES add constraint NMRC_DIHECONS_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_DIHECONSITEM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_DIHECONSITEM2APPLDATA add constraint FK7ECB32B24EAFAA3A foreign key (DATAOBJECTID) references nmr.NMRC_DIHEDRALCONSTRAINTITEM;
alter table nmr.NMRC_DIHEDRALCONSTRAINT add constraint NMRC_DIHECONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_DIHEDRALCONSTRAINTLIST;
alter table nmr.NMRC_DIHEDRALCONSTRAINT add constraint NMRC_DIHECONS_ABSTCONS_FK foreign key (ABSTRACTCONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_DIHEDRALCONSTRAINTITEM add constraint NMRC_DIHECONSITEM_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_DIHEDRALCONSTRAINTITEM add constraint NMRC_DIHECONSITEM_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_DIHEDRALCONSTRAINT;
alter table nmr.NMRC_DIHEDRALCONSTRAINTITEM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_DIHEDRALCONSTRAINTLIST add constraint NMRC_DIHECONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_DISTANCECONSTRAINT add constraint NMRC_DISTCONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_DISTANCECONSTRAINT add constraint NMRC_DISTCONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_DISTANCECONSTRAINTLIST;
alter table nmr.NMRC_DISTANCECONSTRAINTITEM add constraint NMRC_DISTCONSITEM_PAIRCONSITEM_FK foreign key (PAIRWISECONSTRAINTITEMID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_DISTANCECONSTRAINTITEM add constraint NMRC_DISTCONSITEM_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_DISTANCECONSTRAINT;
alter table nmr.NMRC_DISTANCECONSTRAINTLIST add constraint NMRC_DISTCONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_FIXEATOMSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_FIXEATOMSET2APPLDATA add constraint FK6A21FC35805FF4C foreign key (DATAOBJECTID) references nmr.NMRC_FIXEDATOMSET;
alter table nmr.NMRC_FIXEATOMSET2ATOMS add constraint NMRC_FIXEATOMSET_ATOMS_FK foreign key (ATOMID) references nmr.MOLS_ATOM;
alter table nmr.NMRC_FIXEATOMSET2ATOMS add constraint MOLS_ATOM_FIXEATOMSETS_FK foreign key (FIXEDATOMSETID) references nmr.NMRC_FIXEDATOMSET;
alter table nmr.NMRC_FIXEDATOMSET add constraint NMRC_FIXEATOMSET_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDATOMSET add constraint NMRC_FIXEATOMSET_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDATOMSET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_FIXEDRESONANCE add constraint NMRC_FIXERESO_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDRESONANCE add constraint NMRC_FIXERESO_RESOSET_FK foreign key (RESONANCESETID) references nmr.NMRC_FIXEDRESONANCESET;
alter table nmr.NMRC_FIXEDRESONANCE add constraint NMRC_FIXERESO_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDRESONANCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_FIXEDRESONANCESET add constraint NMRC_FIXERESOSET_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDRESONANCESET add constraint NMRC_FIXERESOSET_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_FIXEDRESONANCESET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_FIXERESO2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_FIXERESO2APPLDATA add constraint FK6F89649948F1D889 foreign key (DATAOBJECTID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_FIXERESOSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_FIXERESOSET2APPLDATA add constraint FK8573B1B397B40E21 foreign key (DATAOBJECTID) references nmr.NMRC_FIXEDRESONANCESET;
alter table nmr.NMRC_FIXERESOSET2ATOMSETS add constraint NMRC_FIXEATOMSET_RESOSETS_FK foreign key (RESONANCESETID) references nmr.NMRC_FIXEDRESONANCESET;
alter table nmr.NMRC_FIXERESOSET2ATOMSETS add constraint NMRC_FIXERESOSET_ATOMSETS_FK foreign key (ATOMSETID) references nmr.NMRC_FIXEDATOMSET;
alter table nmr.NMRC_HBONDCONSTRAINT add constraint NMRC_HBONDCONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_HBONDCONSTRAINT add constraint NMRC_HBONDCONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_HBONDCONSTRAINTLIST;
alter table nmr.NMRC_HBONDCONSTRAINTITEM add constraint NMRC_HBONDCONSITEM_PAIRCONSITEM_FK foreign key (PAIRWISECONSTRAINTITEMID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_HBONDCONSTRAINTITEM add constraint NMRC_HBONDCONSITEM_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_HBONDCONSTRAINT;
alter table nmr.NMRC_HBONDCONSTRAINTLIST add constraint NMRC_HBONDCONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_JCOUPLINGCONSTRAINT add constraint NMRC_JCOUPCONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_JCOUPLINGCONSTRAINT add constraint NMRC_JCOUPCONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_JCOUPLINGCONSTRAINTLIST;
alter table nmr.NMRC_JCOUPLINGCONSTRAINTITEM add constraint NMRC_JCOUPCONSITEM_PAIRCONSITEM_FK foreign key (PAIRWISECONSTRAINTITEMID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_JCOUPLINGCONSTRAINTITEM add constraint NMRC_JCOUPCONSITEM_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_JCOUPLINGCONSTRAINT;
alter table nmr.NMRC_JCOUPLINGCONSTRAINTLIST add constraint NMRC_JCOUPCONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_NMRCONSSTOR2ADDISTRUANAL add constraint NMRC_NMRCONSSTOR_ADDISTRUANAL_FK foreign key (ADDITIONALSTRUCTUREANALYSISID) references nmr.NMR_STRUCTUREANALYSIS;
alter table nmr.NMRC_NMRCONSSTOR2ADDISTRUANAL add constraint NMR_STRUANAL_ADDICONSSTOR_FK foreign key (ADDITIONALCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_NMRCONSSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_NMRCONSSTOR2APPLDATA add constraint FKEA87DE4E95E9C1C0 foreign key (DATAOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_NMRCONSSTOR2CHAISTAT add constraint NMR_CHAINSTATE_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_NMRCONSSTOR2CHAISTAT add constraint NMRC_NMRCONSSTOR_CHAISTAT_FK foreign key (CHAINSTATEID) references nmr.NMR_CHAINSTATE;
alter table nmr.NMRC_NMRCONSTRAINTSTORE add constraint NMRC_NMRCONSSTOR_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMRC_NMRCONSTRAINTSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_PAIRCONSITEM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_PAIRCONSITEM2APPLDATA add constraint FKA1FADF1AB99236FD foreign key (DATAOBJECTID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_PAIRCONSITEM2RESONANCES add constraint NMRC_FIXERESO_PAIRCONSITEM_FK foreign key (PAIRWISECONSTRAINTITEMID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_PAIRCONSITEM2RESONANCES add constraint NMRC_PAIRCONSITEM_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_PAIRWISECONSTRAINTITEM add constraint NMRC_PAIRCONSITEM_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_PAIRWISECONSTRAINTITEM add constraint NMRC_PAIRCONSITEM_FIRSRESO_FK foreign key (FIRSTRESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_PAIRWISECONSTRAINTITEM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_RDCCONSTRAINT add constraint NMRC_RDCCONS_SINGCONS_FK foreign key (SINGLECONSTRAINTID) references nmr.NMRC_SINGLECONSTRAINT;
alter table nmr.NMRC_RDCCONSTRAINT add constraint NMRC_RDCCONS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMRC_RDCCONSTRAINTLIST;
alter table nmr.NMRC_RDCCONSTRAINTITEM add constraint NMRC_RDCCONSITEM_PAIRCONSITEM_FK foreign key (PAIRWISECONSTRAINTITEMID) references nmr.NMRC_PAIRWISECONSTRAINTITEM;
alter table nmr.NMRC_RDCCONSTRAINTITEM add constraint NMRC_RDCCONSITEM_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_RDCCONSTRAINT;
alter table nmr.NMRC_RDCCONSTRAINTLIST add constraint NMRC_RDCCONSLIST_ABSTCONSLIST_FK foreign key (ABSTRACTCONSTRAINTLISTID) references nmr.NMRC_ABSTRACTCONSTRAINTLIST;
alter table nmr.NMRC_RESCOORD add constraint NMRC_RESCOORD_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_RESCOORD add constraint NMRC_RESCOORD_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMRC_FIXEDRESONANCE;
alter table nmr.NMRC_RESCOORD add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_RESCOORD add constraint NMRC_RESCOORD_STRUCTURE_FK foreign key (STRUCTUREID) references nmr.NMRC_RESSTRUCTURE;
alter table nmr.NMRC_RESCOORD2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_RESCOORD2APPLDATA add constraint FK998E81C39A77CFC4 foreign key (DATAOBJECTID) references nmr.NMRC_RESCOORD;
alter table nmr.NMRC_RESSTRU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_RESSTRU2APPLDATA add constraint FK8A9096927DBB84C2 foreign key (DATAOBJECTID) references nmr.NMRC_RESSTRUCTURE;
alter table nmr.NMRC_RESSTRUCTURE add constraint NMRC_RESSTRU_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_RESSTRUCTURE add constraint NMRC_RESSTRU_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_RESSTRUCTURE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_SINGLECONSTRAINT add constraint NMRC_SINGCONS_ABSTCONS_FK foreign key (ABSTRACTCONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_VIOLATION add constraint NMRC_VIOLATION_VIOLLIST_FK foreign key (VIOLATIONLISTID) references nmr.NMRC_VIOLATIONLIST;
alter table nmr.NMRC_VIOLATION add constraint NMRC_VIOLATION_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_VIOLATION add constraint NMRC_VIOLATION_CONSTRAINT_FK foreign key (CONSTRAINTID) references nmr.NMRC_ABSTRACTCONSTRAINT;
alter table nmr.NMRC_VIOLATION add constraint NMRC_VIOLATION_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMRC_VIOLATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_VIOLATION2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_VIOLATION2APPLDATA add constraint FKF7BC67D1A32FF57E foreign key (DATAOBJECTID) references nmr.NMRC_VIOLATION;
alter table nmr.NMRC_VIOLATIONLIST add constraint NMRC_VIOLLIST_NMRCONSSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_VIOLATIONLIST add constraint NMRC_VIOLLIST_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMRC_VIOLATIONLIST add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRC_VIOLLIST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRC_VIOLLIST2APPLDATA add constraint FKCBA4AFCA8E93ED3C foreign key (DATAOBJECTID) references nmr.NMRC_VIOLATIONLIST;
alter table nmr.NMRC_VIOLLIST2MOLSTRU add constraint COOR_MODEL_VIOLLIST_FK foreign key (VIOLATIONLISTID) references nmr.NMRC_VIOLATIONLIST;
alter table nmr.NMRC_VIOLLIST2MOLSTRU add constraint NMRC_VIOLLIST_MOLSTRU_FK foreign key (MOLSTRUCTUREID) references nmr.COOR_MODEL;
alter table nmr.NMRR_CHEMATOMNMRREF add constraint NMRR_CHEMATOMNMRREF_NMRREFESTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRR_CHEMATOMNMRREF add constraint NMRR_CHEMATOMNMRREF_CHEMCOMPNMRREF_FK foreign key (CHEMCOMPNMRREFID) references nmr.NMRR_CHEMCOMPNMRREF;
alter table nmr.NMRR_CHEMATOMNMRREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRR_CHEMATOMNMRREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRR_CHEMATOMNMRREF2APPLDATA add constraint FK5D1E73496F0F0ECB foreign key (DATAOBJECTID) references nmr.NMRR_CHEMATOMNMRREF;
alter table nmr.NMRR_CHEMATOMNMRREF_DIST add constraint NMRR_CHEMATOMNMRREF_DIST_FK foreign key (CHEMATOMNMRREFID) references nmr.NMRR_CHEMATOMNMRREF;
alter table nmr.NMRR_CHEMATOMSHIFCORR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRR_CHEMATOMSHIFCORR2APPLDATA add constraint FKABCA6CCB1DDE1CAB foreign key (DATAOBJECTID) references nmr.NMRR_CHEMATOMSHIFTCORR;
alter table nmr.NMRR_CHEMATOMSHIFTCORR add constraint NMRR_CHEMATOMSHIFCORR_NMRREFESTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRR_CHEMATOMSHIFTCORR add constraint NMRR_CHEMATOMSHIFCORR_CHEMATOMNMRREF_FK foreign key (CHEMATOMNMRREFID) references nmr.NMRR_CHEMATOMNMRREF;
alter table nmr.NMRR_CHEMATOMSHIFTCORR add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRR_CHEMCOMPNMRREF add constraint NMRR_CHEMCOMPNMRREF_NMRREFESTOR_FK foreign key (NMRREFERENCESTOREID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRR_CHEMCOMPNMRREF add constraint NMRR_CHEMCOMPNMRREF_NMRREFESTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRR_CHEMCOMPNMRREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRR_CHEMCOMPNMRREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRR_CHEMCOMPNMRREF2APPLDATA add constraint FK24FBA9CB413C1E09 foreign key (DATAOBJECTID) references nmr.NMRR_CHEMCOMPNMRREF;
alter table nmr.NMRR_CHEMCOMPVARNMRREF add constraint NMRR_CHEMCOMPVARNMRREF_NMRREFESTOR_TO_FK foreign key (TOPOBJECTID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRR_CHEMCOMPVARNMRREF add constraint NMRR_CHEMCOMPVARNMRREF_CHEMCOMPNMRREF_FK foreign key (CHEMCOMPNMRREFID) references nmr.NMRR_CHEMCOMPNMRREF;
alter table nmr.NMRR_CHEMCOMPVARNMRREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRR_CHEMCOMPVARNMRREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRR_CHEMCOMPVARNMRREF2APPLDATA add constraint FK70BDCD1C1FFA0066 foreign key (DATAOBJECTID) references nmr.NMRR_CHEMCOMPVARNMRREF;
alter table nmr.NMRR_CHEMCOMPVARNMRREF2CHEMATOMNMRREFS add constraint NMRR_CHEMCOMPVARNMRREF_CHEMATOMNMRREFS_FK foreign key (CHEMATOMNMRREFID) references nmr.NMRR_CHEMATOMNMRREF;
alter table nmr.NMRR_CHEMCOMPVARNMRREF2CHEMATOMNMRREFS add constraint NMRR_CHEMATOMNMRREF_CHEMCOMPVARNMRREFS_FK foreign key (CHEMCOMPVARNMRREFID) references nmr.NMRR_CHEMCOMPVARNMRREF;
alter table nmr.NMRR_NMRREFERENCESTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRR_NMRREFESTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRR_NMRREFESTOR2APPLDATA add constraint FK8DA2CC3E693C1444 foreign key (DATAOBJECTID) references nmr.NMRR_NMRREFERENCESTORE;
alter table nmr.NMRX_ATOMSITE add constraint NMRX_ATOMSITE_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_ATOMSITE add constraint NMRX_ATOMSITE_NMREXPPROT_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_ATOMSITE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_ATOMSITE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_ATOMSITE2APPLDATA add constraint FK69FE1035523E769F foreign key (DATAOBJECTID) references nmr.NMRX_ATOMSITE;
alter table nmr.NMRX_EXPGRAPH add constraint NMRX_EXPGRAPH_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPGRAPH add constraint NMRX_EXPGRAPH_NMREXPPROT_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPGRAPH add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_EXPGRAPH2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_EXPGRAPH2APPLDATA add constraint FK9ECF071CC5076B98 foreign key (DATAOBJECTID) references nmr.NMRX_EXPGRAPH;
alter table nmr.NMRX_EXPMEAS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_EXPMEAS2APPLDATA add constraint FK6591CC1AA9C0E986 foreign key (DATAOBJECTID) references nmr.NMRX_EXPMEASUREMENT;
alter table nmr.NMRX_EXPMEAS2ATOMSITES add constraint NMRX_EXPMEAS_ATOMSITES_FK foreign key (ATOMSITEID) references nmr.NMRX_ATOMSITE;
alter table nmr.NMRX_EXPMEAS2ATOMSITES add constraint NMRX_ATOMSITE_EXPMEAS_FK foreign key (EXPMEASUREMENTID) references nmr.NMRX_EXPMEASUREMENT;
alter table nmr.NMRX_EXPMEASUREMENT add constraint NMRX_EXPMEAS_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPMEASUREMENT add constraint NMRX_EXPMEAS_NMREXPPROT_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPMEASUREMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_EXPMEAS_ATOMSITEWEIG add constraint NMRX_EXPMEAS_ATOMSITEWEIG_FK foreign key (EXPMEASUREMENTID) references nmr.NMRX_EXPMEASUREMENT;
alter table nmr.NMRX_EXPSTEP add constraint NMRX_EXPSTEP_EXPGRAPH_FK foreign key (EXPGRAPHID) references nmr.NMRX_EXPGRAPH;
alter table nmr.NMRX_EXPSTEP add constraint NMRX_EXPSTEP_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPSTEP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_EXPSTEP add constraint NMRX_EXPSTEP_EXPMEAS_FK foreign key (EXPMEASUREMENTID) references nmr.NMRX_EXPMEASUREMENT;
alter table nmr.NMRX_EXPSTEP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_EXPSTEP2APPLDATA add constraint FKE6C31B58F154484A foreign key (DATAOBJECTID) references nmr.NMRX_EXPSTEP;
alter table nmr.NMRX_EXPTRAN2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_EXPTRAN2APPLDATA add constraint FK89BD29D9B0B0CC69 foreign key (DATAOBJECTID) references nmr.NMRX_EXPTRANSFER;
alter table nmr.NMRX_EXPTRAN2ATOMSITES add constraint NMRX_EXPTRAN_ATOMSITES_FK foreign key (ATOMSITEID) references nmr.NMRX_ATOMSITE;
alter table nmr.NMRX_EXPTRAN2ATOMSITES add constraint NMRX_ATOMSITE_EXPTRAN_FK foreign key (EXPTRANSFERID) references nmr.NMRX_EXPTRANSFER;
alter table nmr.NMRX_EXPTRANSFER add constraint NMRX_EXPTRAN_EXPGRAPH_FK foreign key (EXPGRAPHID) references nmr.NMRX_EXPGRAPH;
alter table nmr.NMRX_EXPTRANSFER add constraint NMRX_EXPTRAN_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_EXPTRANSFER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_NMREXPPROT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_NMREXPPROT2APPLDATA add constraint FKE3F209DC89D25279 foreign key (DATAOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_NMREXPPROTOTYPE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_NMREXPPROT_KEYWORDS add constraint NMRX_NMREXPPROT_KEYWORDS_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_REFEXPDIM add constraint NMRX_REFEXPDIM_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_REFEXPDIM add constraint NMRX_REFEXPDIM_REFEXPE_FK foreign key (REFEXPERIMENTID) references nmr.NMRX_REFEXPERIMENT;
alter table nmr.NMRX_REFEXPDIM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_REFEXPDIM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_REFEXPDIM2APPLDATA add constraint FK38B66F432618CA1F foreign key (DATAOBJECTID) references nmr.NMRX_REFEXPDIM;
alter table nmr.NMRX_REFEXPDIMREF add constraint NMRX_REFEXPDIMREF_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_REFEXPDIMREF add constraint NMRX_REFEXPDIMREF_REFEXPDIM_FK foreign key (REFEXPDIMID) references nmr.NMRX_REFEXPDIM;
alter table nmr.NMRX_REFEXPDIMREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_REFEXPDIMREF add constraint NMRX_REFEXPDIMREF_EXPMEAS_FK foreign key (EXPMEASUREMENTID) references nmr.NMRX_EXPMEASUREMENT;
alter table nmr.NMRX_REFEXPDIMREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_REFEXPDIMREF2APPLDATA add constraint FK3249D9B84E9FA8FC foreign key (DATAOBJECTID) references nmr.NMRX_REFEXPDIMREF;
alter table nmr.NMRX_REFEXPDIMREF2EXPSTEPS add constraint NMRX_EXPSTEP_REFEXPDIMREFS_FK foreign key (REFEXPDIMREFID) references nmr.NMRX_REFEXPDIMREF;
alter table nmr.NMRX_REFEXPDIMREF2EXPSTEPS add constraint NMRX_REFEXPDIMREF_EXPSTEPS_FK foreign key (EXPSTEPID) references nmr.NMRX_EXPSTEP;
alter table nmr.NMRX_REFEXPDIMREF_COUPISOTCODE add constraint NMRX_REFEXPDIMREF_COUPISOTCODE_FK foreign key (REFEXPDIMREFID) references nmr.NMRX_REFEXPDIMREF;
alter table nmr.NMRX_REFEXPDIMREF_VALISCALFACT add constraint NMRX_REFEXPDIMREF_VALISCALFACT_FK foreign key (REFEXPDIMREFID) references nmr.NMRX_REFEXPDIMREF;
alter table nmr.NMRX_REFEXPE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_REFEXPE2APPLDATA add constraint FKD780A906F2AF5CF1 foreign key (DATAOBJECTID) references nmr.NMRX_REFEXPERIMENT;
alter table nmr.NMRX_REFEXPERIMENT add constraint NMRX_REFEXPE_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_REFEXPERIMENT add constraint NMRX_REFEXPE_NMREXPPROT_FK foreign key (NMREXPPROTOTYPEID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_REFEXPERIMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_SYSTEMATICNAME add constraint NMRX_SYSTNAME_NMREXPPROT_TO_FK foreign key (TOPOBJECTID) references nmr.NMRX_NMREXPPROTOTYPE;
alter table nmr.NMRX_SYSTEMATICNAME add constraint NMRX_SYSTNAME_REFEXPE_FK foreign key (REFEXPERIMENTID) references nmr.NMRX_REFEXPERIMENT;
alter table nmr.NMRX_SYSTEMATICNAME add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMRX_SYSTNAME2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMRX_SYSTNAME2APPLDATA add constraint FK19E9FF3B1945000E foreign key (DATAOBJECTID) references nmr.NMRX_SYSTEMATICNAME;
alter table nmr.NMR_ABSTDATADERI2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ABSTDATADERI2APPLDATA add constraint FK96069D173BCBF22F foreign key (DATAOBJECTID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_ABSTDATADIM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ABSTDATADIM2APPLDATA add constraint FKB2581C97248CE218 foreign key (DATAOBJECTID) references nmr.NMR_ABSTRACTDATADIM;
alter table nmr.NMR_ABSTMEAS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ABSTMEAS2APPLDATA add constraint FK731F706F91111E56 foreign key (DATAOBJECTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_ABSTMEAS2DATADERI add constraint NMR_ABSTDATADERI_INPUMEAS_FK foreign key (INPUTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_ABSTMEAS2DATADERI add constraint NMR_ABSTMEAS_DATADERI_FK foreign key (DATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_ABSTMEAS2NMRMEASVALI add constraint VALD_NMRMEASVALI_NMRMEAS_FK foreign key (NMRMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_ABSTMEAS2NMRMEASVALI add constraint NMR_ABSTMEAS_NMRMEASVALI_FK foreign key (NMRMEASUREMENTVALIDATIONID) references nmr.VALD_NMRMEASUREMENTVALIDATION;
alter table nmr.NMR_ABSTMEASLIST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ABSTMEASLIST2APPLDATA add constraint FKCF818591E384EA14 foreign key (DATAOBJECTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_ABSTMEASLIST2NMRMEASLISTVALI add constraint NMR_ABSTMEASLIST_NMRMEASLISTVALI_FK foreign key (NMRMEASUREMENTLISTVALIDATIONID) references nmr.VALD_NMRMEASUREMENTLISTVALIDATION;
alter table nmr.NMR_ABSTMEASLIST2NMRMEASLISTVALI add constraint VALD_NMRMEASLISTVALI_NMRMEASLIST_FK foreign key (NMRMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_ABSTPEAKDIMCONT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ABSTPEAKDIMCONT2APPLDATA add constraint FKB1DD7CDA2F41AB5E foreign key (DATAOBJECTID) references nmr.NMR_ABSTRACTPEAKDIMCONTRIB;
alter table nmr.NMR_ABSTRACTDATADERIVATION add constraint NMR_ABSTDATADERI_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTDATADERIVATION add constraint NMR_ABSTDATADERI_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_ABSTRACTDATADERIVATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ABSTRACTDATADIM add constraint NMR_ABSTDATADIM_PREDMETH_FK foreign key (PREDICTMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_ABSTRACTDATADIM add constraint NMR_ABSTDATADIM_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTDATADIM add constraint NMR_ABSTDATADIM_DATASOURCE_FK foreign key (DATASOURCEID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_ABSTRACTDATADIM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ABSTRACTDATADIM add constraint NMR_ABSTDATADIM_EXPDIM_FK foreign key (EXPDIMID) references nmr.NMR_EXPDIM;
alter table nmr.NMR_ABSTRACTMEASUREMENT add constraint NMR_ABSTMEAS_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTMEASUREMENT add constraint NMR_ABSTMEAS_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_ABSTRACTMEASUREMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ABSTRACTMEASUREMENTLIST add constraint NMR_ABSTMEASLIST_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTMEASUREMENTLIST add constraint NMR_ABSTMEASLIST_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTMEASUREMENTLIST add constraint NMR_ABSTMEASLIST_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_ABSTRACTMEASUREMENTLIST add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ABSTRACTPEAKDIMCONTRIB add constraint NMR_ABSTPEAKDIMCONT_PEAKDIMCOMP_FK foreign key (PEAKDIMCOMPONENTID) references nmr.NMR_PEAKDIMCOMPONENT;
alter table nmr.NMR_ABSTRACTPEAKDIMCONTRIB add constraint NMR_ABSTPEAKDIMCONT_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ABSTRACTPEAKDIMCONTRIB add constraint NMR_ABSTPEAKDIMCONT_PEAKDIM_FK foreign key (PEAKDIMID) references nmr.NMR_PEAKDIM;
alter table nmr.NMR_ABSTRACTPEAKDIMCONTRIB add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ATOMSET add constraint NMR_ATOMSET_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ATOMSET add constraint NMR_ATOMSET_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_ATOMSET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_ATOMSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_ATOMSET2APPLDATA add constraint FKBAD9FCE26164356D foreign key (DATAOBJECTID) references nmr.NMR_ATOMSET;
alter table nmr.NMR_CHAINSTATE add constraint NMR_CHAINSTATE_CHAISTATSET_FK foreign key (CHAINSTATESETID) references nmr.NMR_CHAINSTATESET;
alter table nmr.NMR_CHAINSTATE add constraint NMR_CHAINSTATE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_CHAINSTATE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_CHAINSTATE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_CHAINSTATE2APPLDATA add constraint FKE9BD028B1CC58BBC foreign key (DATAOBJECTID) references nmr.NMR_CHAINSTATE;
alter table nmr.NMR_CHAINSTATESET add constraint NMR_CHAISTATSET_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_CHAINSTATESET add constraint NMR_CHAISTATSET_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_CHAINSTATESET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_CHAINSTATESET add constraint NMR_CHAISTATSET_CHAIN_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.NMR_CHAISTATSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_CHAISTATSET2APPLDATA add constraint FKAAFC08B22076AA0E foreign key (DATAOBJECTID) references nmr.NMR_CHAINSTATESET;
alter table nmr.NMR_CHAISTATSET2ATOMS add constraint MOLS_ATOM_CHAISTATSETS_FK foreign key (CHAINSTATESETID) references nmr.NMR_CHAINSTATESET;
alter table nmr.NMR_CHAISTATSET2ATOMS add constraint NMR_CHAISTATSET_ATOMS_FK foreign key (ATOMID) references nmr.MOLS_ATOM;
alter table nmr.NMR_CHAISTATSET2RESIDUES add constraint MOLS_RESIDUE_CHAISTATSETS_FK foreign key (CHAINSTATESETID) references nmr.NMR_CHAINSTATESET;
alter table nmr.NMR_CHAISTATSET2RESIDUES add constraint NMR_CHAISTATSET_RESIDUES_FK foreign key (RESIDUEID) references nmr.MOLS_RESIDUE;
alter table nmr.NMR_DATADERIVATION add constraint NMR_DATADERI_ABSTDATADERI_FK foreign key (ABSTRACTDATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_DATADERIVATION add constraint NMR_DATADERI_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_DATALIST;
alter table nmr.NMR_DATADIMREF add constraint NMR_DATADIMREF_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DATADIMREF add constraint NMR_DATADIMREF_DATADIM_FK foreign key (DATADIMID) references nmr.NMR_FREQDATADIM;
alter table nmr.NMR_DATADIMREF add constraint NMR_DATADIMREF_EXPDIMREF_FK foreign key (EXPDIMREFID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_DATADIMREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DATADIMREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DATADIMREF2APPLDATA add constraint FK2A547F66CB3B80A1 foreign key (DATAOBJECTID) references nmr.NMR_DATADIMREF;
alter table nmr.NMR_DATALIST add constraint NMR_DATALIST_DERIDATALIST_FK foreign key (DERIVEDDATALISTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.NMR_DATALIST2CITATIONS add constraint CITA_CITATION_DATALISTS_FK foreign key (DATALISTID) references nmr.NMR_DATALIST;
alter table nmr.NMR_DATALIST2CITATIONS add constraint NMR_DATALIST_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_DATASTORE_FK foreign key (DATASTOREID) references nmr.DLOC_NUMERICMATRIX;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_PROCMETH_FK foreign key (PROCESSMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_ACTIPEAKLIST_FK foreign key (ACTIVEPEAKLISTID) references nmr.NMR_PEAKLIST;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_COMPMETH_FK foreign key (COMPRESSMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_EXPERIMENT_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_SNMETHOD_FK foreign key (SNMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_DATASOURCE add constraint NMR_DATASOURCE_PROCFROM_FK foreign key (PROCESSEDFROMID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_DATASOURCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DATASOURCE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DATASOURCE2APPLDATA add constraint FKF67D056E52CD9D1 foreign key (DATAOBJECTID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_DATASOURCEIMAGE add constraint NMR_DATASOURIMAG_DATASTORE_FK foreign key (DATASTOREID) references nmr.DLOC_MIMETYPEDATASTORE;
alter table nmr.NMR_DATASOURCEIMAGE add constraint NMR_DATASOURIMAG_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DATASOURCEIMAGE add constraint NMR_DATASOURIMAG_DATASOURCE_FK foreign key (DATASOURCEID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_DATASOURCEIMAGE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DATASOURIMAG2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DATASOURIMAG2APPLDATA add constraint FK8EE3BD2EA519412 foreign key (DATAOBJECTID) references nmr.NMR_DATASOURCEIMAGE;
alter table nmr.NMR_DATUM add constraint NMR_DATUM_DERIVATION_FK foreign key (DERIVATIONID) references nmr.NMR_DATADERIVATION;
alter table nmr.NMR_DATUM add constraint NMR_DATUM_DERIDATA_FK foreign key (DERIVEDDATAID) references nmr.NMR_DERIVEDDATA;
alter table nmr.NMR_DERIDATA2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DERIDATA2APPLDATA add constraint FK59DD10195DF68F83 foreign key (DATAOBJECTID) references nmr.NMR_DERIVEDDATA;
alter table nmr.NMR_DERIDATALIST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DERIDATALIST2APPLDATA add constraint FKD9B3403BF0C3FCC1 foreign key (DATAOBJECTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.NMR_DERIVEDDATA add constraint NMR_DERIDATA_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DERIVEDDATA add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DERIVEDDATALIST add constraint NMR_DERIDATALIST_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DERIVEDDATALIST add constraint NMR_DERIDATALIST_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DERIVEDDATALIST add constraint NMR_DERIDATALIST_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_DERIVEDDATALIST add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DIMENSIONSCALING add constraint NMR_DIMESCAL_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_DIMENSIONSCALING add constraint NMR_DIMESCAL_DATADIM_FK foreign key (DATADIMID) references nmr.NMR_ABSTRACTDATADIM;
alter table nmr.NMR_DIMENSIONSCALING add constraint NMR_DIMESCAL_EXPDIMREF_FK foreign key (EXPDIMREFID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_DIMENSIONSCALING add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_DIMESCAL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_DIMESCAL2APPLDATA add constraint FK12A3922357BE6AD foreign key (DATAOBJECTID) references nmr.NMR_DIMENSIONSCALING;
alter table nmr.NMR_DIMESCAL_SCALFACT add constraint NMR_DIMESCAL_SCALFACT_FK foreign key (DIMENSIONSCALINGID) references nmr.NMR_DIMENSIONSCALING;
alter table nmr.NMR_DIPOLARRELAXATION add constraint NMR_DIPORELA_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_DIPOLARRELAXATION add constraint NMR_DIPORELA_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_DIPOLARRELAXLIST;
alter table nmr.NMR_DIPOLARRELAXLIST add constraint NMR_DIPORELALIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_EXPCHAINSTATE add constraint NMR_EXPCHAISTAT_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPCHAINSTATE add constraint NMR_EXPCHAISTAT_CHAINSTATE_FK foreign key (CHAINSTATEID) references nmr.NMR_CHAINSTATE;
alter table nmr.NMR_EXPCHAINSTATE add constraint NMR_EXPCHAISTAT_EXPERIMENT_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPCHAINSTATE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXPCHAISTAT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPCHAISTAT2APPLDATA add constraint FK6D7392B5F24D0A69 foreign key (DATAOBJECTID) references nmr.NMR_EXPCHAINSTATE;
alter table nmr.NMR_EXPDIM add constraint NMR_EXPDIM_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPDIM add constraint NMR_EXPDIM_REFEXPDIM_FK foreign key (REFEXPDIMID) references nmr.NMRX_REFEXPDIM;
alter table nmr.NMR_EXPDIM add constraint NMR_EXPDIM_EXPERIMENT_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPDIM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXPDIM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPDIM2APPLDATA add constraint FK1F75501089C8C297 foreign key (DATAOBJECTID) references nmr.NMR_EXPDIM;
alter table nmr.NMR_EXPDIMREF add constraint NMR_EXPDIMREF_REFEXPDIMREF_FK foreign key (REFEXPDIMREFID) references nmr.NMRX_REFEXPDIMREF;
alter table nmr.NMR_EXPDIMREF add constraint NMR_EXPDIMREF_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPDIMREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXPDIMREF add constraint NMR_EXPDIMREF_EXPDIM_FK foreign key (EXPDIMID) references nmr.NMR_EXPDIM;
alter table nmr.NMR_EXPDIMREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPDIMREF2APPLDATA add constraint FK50FC29CB9833D84 foreign key (DATAOBJECTID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_EXPDIMREFMAPP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPDIMREFMAPP2APPLDATA add constraint FKB48C2FB731814FB2 foreign key (DATAOBJECTID) references nmr.NMR_EXPDIMREFMAPPING;
alter table nmr.NMR_EXPDIMREFMAPPING add constraint NMR_EXPDIMREFMAPP_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPDIMREFMAPPING add constraint NMR_EXPDIMREFMAPP_EXPDIMREF_FK foreign key (EXPDIMREFID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_EXPDIMREFMAPPING add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXPDIMREFMAPPING add constraint NMR_EXPDIMREFMAPP_DERIFROM_FK foreign key (DERIVEDFROMID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_EXPDIMREF_ISOTCODE add constraint NMR_EXPDIMREF_ISOTCODE_FK foreign key (EXPDIMREFID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SHIFDIFFLIST_FK foreign key (SHIFTDIFFERENCELISTID) references nmr.NMR_SHIFTDIFFERENCELIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_ISOTS2LIST_FK foreign key (ISOTROPICS2LISTID) references nmr.NMR_ISOTROPICS2LIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_PROBE_FK foreign key (PROBEID) references nmr.INST_NMRPROBE;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SAMPCONDSET_FK foreign key (SAMPLECONDITIONSETID) references nmr.NMR_SAMPLECONDITIONSET;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_DIPORELALIST_FK foreign key (DIPOLARRELAXLISTID) references nmr.NMR_DIPOLARRELAXLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_HEXCHPROTLIST_FK foreign key (HEXCHPROTECTIONLISTID) references nmr.NMR_HEXCHPROTECTIONLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_RAWDATA_FK foreign key (RAWDATAID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_DERIMETH_FK foreign key (DERIVATIONMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SAMPLE_FK foreign key (SAMPLEID) references nmr.SAM_SAMPLE;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_REFEXPE_FK foreign key (REFEXPERIMENTID) references nmr.NMRX_REFEXPERIMENT;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_RDCLIST_FK foreign key (RDCLISTID) references nmr.NMR_RDCLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SPEC_FK foreign key (SPECTROMETERID) references nmr.INST_NMRSPECTROMETER;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_PKALIST_FK foreign key (PKALISTID) references nmr.NMR_PKALIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SHIFTLIST_FK foreign key (SHIFTLISTID) references nmr.NMR_SHIFTLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPERIMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SPECDENSLIST_FK foreign key (SPECTRALDENSITYLISTID) references nmr.NMR_SPECTRALDENSITYLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_NOELIST_FK foreign key (NOELISTID) references nmr.NMR_NOELIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_T1LIST_FK foreign key (T1LISTID) references nmr.NMR_T1LIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_T1RHOLIST_FK foreign key (T1RHOLISTID) references nmr.NMR_T1RHOLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_JCOUPLIST_FK foreign key (JCOUPLINGLISTID) references nmr.NMR_JCOUPLINGLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_SHIFANISLIST_FK foreign key (SHIFTANISOTROPYLISTID) references nmr.NMR_SHIFTANISOTROPYLIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_T2LIST_FK foreign key (T2LISTID) references nmr.NMR_T2LIST;
alter table nmr.NMR_EXPERIMENT add constraint NMR_EXPERIMENT_HEXCHRATELIST_FK foreign key (HEXCHRATELISTID) references nmr.NMR_HEXCHRATELIST;
alter table nmr.NMR_EXPERIMENT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPERIMENT2APPLDATA add constraint FK2C3139E943E5969 foreign key (DATAOBJECTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2CITATIONS add constraint CITA_CITATION_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2CITATIONS add constraint NMR_EXPERIMENT_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.NMR_EXPERIMENT2DATALISTS add constraint NMR_EXPERIMENT_DATALISTS_FK foreign key (DATALISTID) references nmr.NMR_DATALIST;
alter table nmr.NMR_EXPERIMENT2DATALISTS add constraint NMR_DATALIST_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2DERIVEDTO add constraint NMR_EXPERIMENT_DERIVEDTO_FK foreign key (DERIVEDTOID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2DERIVEDTO add constraint NMR_EXPERIMENT_DERIFROM_FK foreign key (DERIVEDFROMID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2LABEMIXT add constraint NMR_EXPERIMENT_LABEMIXT_FK foreign key (LABELEDMIXTUREID) references nmr.LMOL_LABELEDMIXTURE;
alter table nmr.NMR_EXPERIMENT2LABEMIXT add constraint LMOL_LABEMIXT_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2MOLSYSTEMS add constraint MOLS_MOLSYSTEM_NMREXPE_FK foreign key (NMREXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPERIMENT2MOLSYSTEMS add constraint NMR_EXPERIMENT_MOLSYSTEMS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.NMR_EXPTRAN2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_EXPTRAN2APPLDATA add constraint FKFB04FD6B8C832544 foreign key (DATAOBJECTID) references nmr.NMR_EXPTRANSFER;
alter table nmr.NMR_EXPTRAN2EXPDIMREFS add constraint NMR_EXPTRAN_EXPDIMREFS_FK foreign key (EXPDIMREFID) references nmr.NMR_EXPDIMREF;
alter table nmr.NMR_EXPTRAN2EXPDIMREFS add constraint NMR_EXPDIMREF_EXPTRAN_FK foreign key (EXPTRANSFERID) references nmr.NMR_EXPTRANSFER;
alter table nmr.NMR_EXPTRANSFER add constraint NMR_EXPTRAN_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_EXPTRANSFER add constraint NMR_EXPTRAN_EXPERIMENT_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_EXPTRANSFER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_EXTERNALSHIFTREFERENCE add constraint NMR_EXTESHIFREFE_SHIFREFE_FK foreign key (SHIFTREFERENCEID) references nmr.NMR_SHIFTREFERENCE;
alter table nmr.NMR_FIDDATADIM add constraint NMR_FIDDATADIM_ABSTDATADIM_FK foreign key (ABSTRACTDATADIMID) references nmr.NMR_ABSTRACTDATADIM;
alter table nmr.NMR_FREQDATADIM add constraint NMR_FREQDATADIM_ABSTDATADIM_FK foreign key (ABSTRACTDATADIMID) references nmr.NMR_ABSTRACTDATADIM;
alter table nmr.NMR_HEXCHPROTECTION add constraint NMR_HEXCHPROT_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_HEXCHPROTECTION add constraint NMR_HEXCHPROT_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_HEXCHPROTECTION add constraint NMR_HEXCHPROT_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_HEXCHPROTECTIONLIST;
alter table nmr.NMR_HEXCHPROTECTIONLIST add constraint NMR_HEXCHPROTLIST_REFERATELIST_FK foreign key (REFERENCERATELISTID) references nmr.NMR_HEXCHRATELIST;
alter table nmr.NMR_HEXCHPROTECTIONLIST add constraint NMR_HEXCHPROTLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_HEXCHRATE add constraint NMR_HEXCHRATE_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_HEXCHRATE add constraint NMR_HEXCHRATE_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_HEXCHRATE add constraint NMR_HEXCHRATE_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_HEXCHRATELIST;
alter table nmr.NMR_HEXCHRATELIST add constraint NMR_HEXCHRATELIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_INTERNALSHIFTREFERENCE add constraint NMR_INTESHIFREFE_SHIFREFE_FK foreign key (SHIFTREFERENCEID) references nmr.NMR_SHIFTREFERENCE;
alter table nmr.NMR_ISOTROPICS2 add constraint NMR_ISOTS2_DERIVATION_FK foreign key (DERIVATIONID) references nmr.NMR_ISOTROPICS2DERIVATION;
alter table nmr.NMR_ISOTROPICS2 add constraint NMR_ISOTS2_DERIDATA_FK foreign key (DERIVEDDATAID) references nmr.NMR_DERIVEDDATA;
alter table nmr.NMR_ISOTROPICS2DERIVATION add constraint NMR_ISOTS2DERI_ABSTDATADERI_FK foreign key (ABSTRACTDATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_ISOTROPICS2DERIVATION add constraint NMR_ISOTS2DERI_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_ISOTROPICS2LIST;
alter table nmr.NMR_ISOTROPICS2LIST add constraint NMR_ISOTS2LIST_DERIDATALIST_FK foreign key (DERIVEDDATALISTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.NMR_JCOUPLING add constraint NMR_JCOUPLING_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_JCOUPLING add constraint NMR_JCOUPLING_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_JCOUPLINGLIST;
alter table nmr.NMR_JCOUPLINGLIST add constraint NMR_JCOUPLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_NMREXPSERI2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_NMREXPSERI2APPLDATA add constraint FK20819EA824BA90D foreign key (DATAOBJECTID) references nmr.NMR_NMREXPSERIES;
alter table nmr.NMR_NMREXPSERI2EXPE add constraint NMR_EXPERIMENT_NMREXPSERI_FK foreign key (NMREXPSERIESID) references nmr.NMR_NMREXPSERIES;
alter table nmr.NMR_NMREXPSERI2EXPE add constraint NMR_NMREXPSERI_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_NMREXPSERIES add constraint NMR_NMREXPSERI_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_NMREXPSERIES add constraint NMR_NMREXPSERI_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_NMREXPSERIES add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_NMREXPSERI_CONDNAME add constraint NMR_NMREXPSERI_CONDNAME_FK foreign key (NMREXPSERIESID) references nmr.NMR_NMREXPSERIES;
alter table nmr.NMR_NMRPROJECT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_NMRPROJECT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_NMRPROJECT2APPLDATA add constraint FK37EA089545153A72 foreign key (DATAOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_NOE add constraint NMR_NOE_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_NOE add constraint NMR_NOE_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_NOELIST;
alter table nmr.NMR_NOELIST add constraint NMR_NOELIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_PEAK add constraint NMR_PEAK_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAK add constraint NMR_PEAK_PEAKLIST_FK foreign key (PEAKLISTID) references nmr.NMR_PEAKLIST;
alter table nmr.NMR_PEAK add constraint NMR_PEAK_FITMETHOD_FK foreign key (FITMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_PEAK add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAK2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAK2APPLDATA add constraint FK6BEF87FC45CE6C4B foreign key (DATAOBJECTID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAK2DATADERI add constraint NMR_ABSTDATADERI_PEAKS_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAK2DATADERI add constraint NMR_PEAK_DATADERI_FK foreign key (DATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_PEAK2MEAS add constraint NMR_ABSTMEAS_PEAKS_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAK2MEAS add constraint NMR_PEAK_MEAS_FK foreign key (MEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_PEAK2PEAKVALI add constraint NMR_PEAK_PEAKVALI_FK foreign key (PEAKVALIDATIONID) references nmr.VALD_PEAKVALIDATION;
alter table nmr.NMR_PEAK2PEAKVALI add constraint VALD_PEAKVALI_PEAKS_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAKCLUS2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKCLUS2APPLDATA add constraint FK162AB895D2FF3C37 foreign key (DATAOBJECTID) references nmr.NMR_PEAKCLUSTER;
alter table nmr.NMR_PEAKCLUS2PEAKS add constraint NMR_PEAKCLUS_PEAKS_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAKCLUS2PEAKS add constraint NMR_PEAK_PEAKCLUS_FK foreign key (PEAKCLUSTERID) references nmr.NMR_PEAKCLUSTER;
alter table nmr.NMR_PEAKCLUSTER add constraint NMR_PEAKCLUS_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKCLUSTER add constraint NMR_PEAKCLUS_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKCLUSTER add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKCONT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKCONT2APPLDATA add constraint FKF48368AD7BB8ED6 foreign key (DATAOBJECTID) references nmr.NMR_PEAKCONTRIB;
alter table nmr.NMR_PEAKCONT2PEAKDIMCONT add constraint NMR_PEAKCONT_PEAKDIMCONT_FK foreign key (PEAKDIMCONTRIBID) references nmr.NMR_ABSTRACTPEAKDIMCONTRIB;
alter table nmr.NMR_PEAKCONT2PEAKDIMCONT add constraint NMR_ABSTPEAKDIMCONT_PEAKCONT_FK foreign key (PEAKCONTRIBID) references nmr.NMR_PEAKCONTRIB;
alter table nmr.NMR_PEAKCONTRIB add constraint NMR_PEAKCONT_PEAK_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAKCONTRIB add constraint NMR_PEAKCONT_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKCONTRIB add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKDIM add constraint NMR_PEAKDIM_PEAK_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAKDIM add constraint NMR_PEAKDIM_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKDIM add constraint NMR_PEAKDIM_DATADIMREF_FK foreign key (DATADIMREFID) references nmr.NMR_DATADIMREF;
alter table nmr.NMR_PEAKDIM add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKDIM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKDIM2APPLDATA add constraint FKA98BB20A60829345 foreign key (DATAOBJECTID) references nmr.NMR_PEAKDIM;
alter table nmr.NMR_PEAKDIM2DATADERI add constraint NMR_PEAKDIM_DATADERI_FK foreign key (DATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_PEAKDIM2DATADERI add constraint NMR_ABSTDATADERI_PEAKDIMS_FK foreign key (PEAKDIMID) references nmr.NMR_PEAKDIM;
alter table nmr.NMR_PEAKDIM2MEAS add constraint NMR_ABSTMEAS_PEAKDIMS_FK foreign key (PEAKDIMID) references nmr.NMR_PEAKDIM;
alter table nmr.NMR_PEAKDIM2MEAS add constraint NMR_PEAKDIM_MEAS_FK foreign key (MEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_PEAKDIMCOMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKDIMCOMP2APPLDATA add constraint FK97A325B51183F40 foreign key (DATAOBJECTID) references nmr.NMR_PEAKDIMCOMPONENT;
alter table nmr.NMR_PEAKDIMCOMPONENT add constraint NMR_PEAKDIMCOMP_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKDIMCOMPONENT add constraint NMR_PEAKDIMCOMP_PEAKDIM_FK foreign key (PEAKDIMID) references nmr.NMR_PEAKDIM;
alter table nmr.NMR_PEAKDIMCOMPONENT add constraint NMR_PEAKDIMCOMP_DATADIMREF_FK foreign key (DATADIMREFID) references nmr.NMR_DATADIMREF;
alter table nmr.NMR_PEAKDIMCOMPONENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKDIMCONTRIB add constraint NMR_PEAKDIMCONT_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_PEAKDIMCONTRIB add constraint NMR_PEAKDIMCONT_ABSTPEAKDIMCONT_FK foreign key (ABSTRACTPEAKDIMCONTRIBID) references nmr.NMR_ABSTRACTPEAKDIMCONTRIB;
alter table nmr.NMR_PEAKDIMCONTRIBN add constraint NMR_PEAKDIMCONTN_ABSTPEAKDIMCONT_FK foreign key (ABSTRACTPEAKDIMCONTRIBID) references nmr.NMR_ABSTRACTPEAKDIMCONTRIB;
alter table nmr.NMR_PEAKINTE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKINTE2APPLDATA add constraint FKCBB747E69BFD2830 foreign key (DATAOBJECTID) references nmr.NMR_PEAKINTENSITY;
alter table nmr.NMR_PEAKINTENSITY add constraint NMR_PEAKINTE_PEAK_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PEAKINTENSITY add constraint NMR_PEAKINTE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKINTENSITY add constraint NMR_PEAKINTE_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_PEAKINTENSITY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKLIST add constraint NMR_PEAKLIST_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_PEAKLIST add constraint NMR_PEAKLIST_FITMETHOD_FK foreign key (FITMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_PEAKLIST add constraint NMR_PEAKLIST_DATASOURCE_FK foreign key (DATASOURCEID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_PEAKLIST add constraint NMR_PEAKLIST_INTEMETH_FK foreign key (INTENSMETHODID) references nmr.METH_METHOD;
alter table nmr.NMR_PEAKLIST add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_PEAKLIST2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_PEAKLIST2APPLDATA add constraint FK2C310E9E3C503589 foreign key (DATAOBJECTID) references nmr.NMR_PEAKLIST;
alter table nmr.NMR_PEAKLIST2PEAKLISTVALI add constraint VALD_PEAKLISTVALI_PEAKLISTS_FK foreign key (PEAKLISTID) references nmr.NMR_PEAKLIST;
alter table nmr.NMR_PEAKLIST2PEAKLISTVALI add constraint NMR_PEAKLIST_PEAKLISTVALI_FK foreign key (PEAKLISTVALIDATIONID) references nmr.VALD_PEAKLISTVALIDATION;
alter table nmr.NMR_PEAK_COMPNUMB add constraint NMR_PEAK_COMPNUMB_FK foreign key (PEAKID) references nmr.NMR_PEAK;
alter table nmr.NMR_PKA add constraint NMR_PKA_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_PKA add constraint NMR_PKA_DERIVATION_FK foreign key (DERIVATIONID) references nmr.NMR_PKADERIVATION;
alter table nmr.NMR_PKA add constraint NMR_PKA_DERIDATA_FK foreign key (DERIVEDDATAID) references nmr.NMR_DERIVEDDATA;
alter table nmr.NMR_PKADERIVATION add constraint NMR_PKADERI_ABSTDATADERI_FK foreign key (ABSTRACTDATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_PKADERIVATION add constraint NMR_PKADERI_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_PKALIST;
alter table nmr.NMR_PKALIST add constraint NMR_PKALIST_DERIDATALIST_FK foreign key (DERIVEDDATALISTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.NMR_RDC add constraint NMR_RDC_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_RDC add constraint NMR_RDC_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_RDCLIST;
alter table nmr.NMR_RDCLIST add constraint NMR_RDCLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_RESIDUEPROB add constraint NMR_RESIPROB_RESOGROU_FK foreign key (RESONANCEGROUPID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESIDUEPROB add constraint NMR_RESIPROB_POSS_FK foreign key (POSSIBILITYID) references nmr.MOLS_RESIDUE;
alter table nmr.NMR_RESIDUEPROB add constraint NMR_RESIPROB_ABSTPROB_FK foreign key (ABSTRACTPROBABILITYID) references nmr.TEMP_ABSTRACTPROBABILITY;
alter table nmr.NMR_RESIDUETYPEPROB add constraint NMR_RESITYPEPROB_RESOGROU_FK foreign key (RESONANCEGROUPID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESIDUETYPEPROB add constraint NMR_RESITYPEPROB_POSS_FK foreign key (POSSIBILITYID) references nmr.CHEM_CHEMCOMP;
alter table nmr.NMR_RESIDUETYPEPROB add constraint NMR_RESITYPEPROB_ABSTPROB_FK foreign key (ABSTRACTPROBABILITYID) references nmr.TEMP_ABSTRACTPROBABILITY;
alter table nmr.NMR_RESOGROU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_RESOGROU2APPLDATA add constraint FKE3CFBF9BEE3D283D foreign key (DATAOBJECTID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESOGROU2CHAINS add constraint MOLS_CHAIN_RESOGROU_FK foreign key (RESONANCEGROUPID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESOGROU2CHAINS add constraint NMR_RESOGROU_CHAINS_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.NMR_RESONANCE add constraint NMR_RESONANCE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCE add constraint NMR_RESONANCE_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCE add constraint NMR_RESONANCE_RESOSET_FK foreign key (RESONANCESETID) references nmr.NMR_RESONANCESET;
alter table nmr.NMR_RESONANCE add constraint NMR_RESONANCE_RESOGROU_FK foreign key (RESONANCEGROUPID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESONANCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_RESONANCE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_RESONANCE2APPLDATA add constraint FKCF438BA5C39B0A6A foreign key (DATAOBJECTID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2CHAISTAT add constraint NMR_CHAINSTATE_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2CHAISTAT add constraint NMR_RESONANCE_CHAISTAT_FK foreign key (CHAINSTATEID) references nmr.NMR_CHAINSTATE;
alter table nmr.NMR_RESONANCE2COVABOUN add constraint NMR_RESONANCE_COVABOUN_FK1 foreign key (COVALENTLYBOUNDID1) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2COVABOUN add constraint NMR_RESONANCE_COVABOUN_FK2 foreign key (COVALENTLYBOUNDID2) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2DATUMS add constraint NMR_RESONANCE_DATUMS_FK foreign key (DATUMID) references nmr.NMR_DATUM;
alter table nmr.NMR_RESONANCE2DATUMS add constraint NMR_DATUM_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2DIPORELA add constraint NMR_DIPORELA_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2DIPORELA add constraint NMR_RESONANCE_DIPORELA_FK foreign key (DIPOLARRELAXATIONID) references nmr.NMR_DIPOLARRELAXATION;
alter table nmr.NMR_RESONANCE2ISOTS2S add constraint NMR_RESONANCE_ISOTS2S_FK foreign key (ISOTROPICS2ID) references nmr.NMR_ISOTROPICS2;
alter table nmr.NMR_RESONANCE2ISOTS2S add constraint NMR_ISOTS2_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2JCOUPLINGS add constraint NMR_RESONANCE_JCOUPLINGS_FK foreign key (JCOUPLINGID) references nmr.NMR_JCOUPLING;
alter table nmr.NMR_RESONANCE2JCOUPLINGS add constraint NMR_JCOUPLING_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2NOES add constraint NMR_NOE_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2NOES add constraint NMR_RESONANCE_NOES_FK foreign key (NOEID) references nmr.NMR_NOE;
alter table nmr.NMR_RESONANCE2PEAKDIMCONTNS add constraint NMR_PEAKDIMCONTN_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCE2PEAKDIMCONTNS add constraint NMR_RESONANCE_PEAKDIMCONTNS_FK foreign key (PEAKDIMCONTRIBNID) references nmr.NMR_PEAKDIMCONTRIBN;
alter table nmr.NMR_RESONANCE2RDCS add constraint NMR_RESONANCE_RDCS_FK foreign key (RDCID) references nmr.NMR_RDC;
alter table nmr.NMR_RESONANCE2RDCS add constraint NMR_RDC_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCEGROUP add constraint NMR_RESOGROU_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCEGROUP add constraint NMR_RESOGROU_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCEGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_RESONANCEGROUP add constraint NMR_RESOGROU_RESIDUE_FK foreign key (RESIDUEID) references nmr.MOLS_RESIDUE;
alter table nmr.NMR_RESONANCEGROUPPROB add constraint NMR_RESOGROUPROB_FROMRESOGROU_FK foreign key (FROMRESONANCEGROUPID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESONANCEGROUPPROB add constraint NMR_RESOGROUPROB_POSS_FK foreign key (POSSIBILITYID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESONANCEGROUPPROB add constraint NMR_RESOGROUPROB_ABSTPROB_FK foreign key (ABSTRACTPROBABILITYID) references nmr.TEMP_ABSTRACTPROBABILITY;
alter table nmr.NMR_RESONANCEPROB add constraint NMR_RESOPROB_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESONANCEPROB add constraint NMR_RESOPROB_POSS_FK foreign key (POSSIBILITYID) references nmr.NMR_RESONANCEGROUP;
alter table nmr.NMR_RESONANCEPROB add constraint NMR_RESOPROB_ABSTPROB_FK foreign key (ABSTRACTPROBABILITYID) references nmr.TEMP_ABSTRACTPROBABILITY;
alter table nmr.NMR_RESONANCESET add constraint NMR_RESOSET_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCESET add constraint NMR_RESOSET_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_RESONANCESET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_RESONANCE_ASSINAME add constraint NMR_RESONANCE_ASSINAME_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_RESOSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_RESOSET2APPLDATA add constraint FKD62BB260C71784A0 foreign key (DATAOBJECTID) references nmr.NMR_RESONANCESET;
alter table nmr.NMR_RESOSET2ATOMSETS add constraint NMR_ATOMSET_RESOSETS_FK foreign key (RESONANCESETID) references nmr.NMR_RESONANCESET;
alter table nmr.NMR_RESOSET2ATOMSETS add constraint NMR_RESOSET_ATOMSETS_FK foreign key (ATOMSETID) references nmr.NMR_ATOMSET;
alter table nmr.NMR_SAMPCOND2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_SAMPCOND2APPLDATA add constraint FKD6053248546C16AD foreign key (DATAOBJECTID) references nmr.NMR_SAMPLECONDITION;
alter table nmr.NMR_SAMPCONDSET2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_SAMPCONDSET2APPLDATA add constraint FKA69851A43E396D7D foreign key (DATAOBJECTID) references nmr.NMR_SAMPLECONDITIONSET;
alter table nmr.NMR_SAMPCONDSET2CITATIONS add constraint CITA_CITATION_SAMPCONDSETS_FK foreign key (SAMPLECONDITIONSETID) references nmr.NMR_SAMPLECONDITIONSET;
alter table nmr.NMR_SAMPCONDSET2CITATIONS add constraint NMR_SAMPCONDSET_CITATIONS_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.NMR_SAMPDATADIM_POINERRO add constraint NMR_SAMPDATADIM_POINERRO_FK foreign key (SAMPLEDDATADIMID) references nmr.NMR_SAMPLEDDATADIM;
alter table nmr.NMR_SAMPDATADIM_POINVALU add constraint NMR_SAMPDATADIM_POINVALU_FK foreign key (SAMPLEDDATADIMID) references nmr.NMR_SAMPLEDDATADIM;
alter table nmr.NMR_SAMPLECONDITION add constraint NMR_SAMPCOND_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SAMPLECONDITION add constraint NMR_SAMPCOND_SAMPCONDSET_FK foreign key (SAMPLECONDITIONSETID) references nmr.NMR_SAMPLECONDITIONSET;
alter table nmr.NMR_SAMPLECONDITION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_SAMPLECONDITIONSET add constraint NMR_SAMPCONDSET_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SAMPLECONDITIONSET add constraint NMR_SAMPCONDSET_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SAMPLECONDITIONSET add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_SAMPLEDDATADIM add constraint NMR_SAMPDATADIM_ABSTDATADIM_FK foreign key (ABSTRACTDATADIMID) references nmr.NMR_ABSTRACTDATADIM;
alter table nmr.NMR_SHIFREFE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_SHIFREFE2APPLDATA add constraint FKC0CB8117167F8E55 foreign key (DATAOBJECTID) references nmr.NMR_SHIFTREFERENCE;
alter table nmr.NMR_SHIFREFE2EXPE add constraint NMR_EXPERIMENT_SHIFREFE_FK foreign key (SHIFTREFERENCEID) references nmr.NMR_SHIFTREFERENCE;
alter table nmr.NMR_SHIFREFE2EXPE add constraint NMR_SHIFREFE_EXPE_FK foreign key (EXPERIMENTID) references nmr.NMR_EXPERIMENT;
alter table nmr.NMR_SHIFT add constraint NMR_SHIFT_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_SHIFT add constraint NMR_SHIFT_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_SHIFT add constraint NMR_SHIFT_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_SHIFTLIST;
alter table nmr.NMR_SHIFTANISOTROPY add constraint NMR_SHIFANIS_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_SHIFTANISOTROPY add constraint NMR_SHIFANIS_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_SHIFTANISOTROPY add constraint NMR_SHIFANIS_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_SHIFTANISOTROPYLIST;
alter table nmr.NMR_SHIFTANISOTROPYLIST add constraint NMR_SHIFANISLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_SHIFTDIFFERENCE add constraint NMR_SHIFDIFF_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_SHIFTDIFFERENCE add constraint NMR_SHIFDIFF_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_SHIFTDIFFERENCE add constraint NMR_SHIFDIFF_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_SHIFTDIFFERENCELIST;
alter table nmr.NMR_SHIFTDIFFERENCELIST add constraint NMR_SHIFDIFFLIST_REFESHIFLIST_FK foreign key (REFERENCESHIFTLISTID) references nmr.NMR_SHIFTLIST;
alter table nmr.NMR_SHIFTDIFFERENCELIST add constraint NMR_SHIFDIFFLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_SHIFTLIST add constraint NMR_SHIFTLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_SHIFTREFERENCE add constraint NMR_SHIFREFE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SHIFTREFERENCE add constraint NMR_SHIFREFE_SHIFRATICITA_FK foreign key (SHIFTRATIOCITATIONID) references nmr.CITA_CITATION;
alter table nmr.NMR_SHIFTREFERENCE add constraint NMR_SHIFREFE_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SHIFTREFERENCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_SHIFTREFERENCE add constraint NMR_SHIFREFE_CITATION_FK foreign key (CITATIONID) references nmr.CITA_CITATION;
alter table nmr.NMR_SPARSAMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_SPARSAMP2APPLDATA add constraint FKF609C21CBC72793 foreign key (DATAOBJECTID) references nmr.NMR_SPARSESAMPLING;
alter table nmr.NMR_SPARSAMP_POINNUMB add constraint NMR_SPARSAMP_POINNUMB_FK foreign key (SPARSESAMPLINGID) references nmr.NMR_SPARSESAMPLING;
alter table nmr.NMR_SPARSESAMPLING add constraint NMR_SPARSAMP_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_SPARSESAMPLING add constraint NMR_SPARSAMP_DATASOURCE_FK foreign key (DATASOURCEID) references nmr.NMR_DATASOURCE;
alter table nmr.NMR_SPARSESAMPLING add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_SPECDENS2RESONANCES add constraint NMR_SPECDENS_RESONANCES_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_SPECDENS2RESONANCES add constraint NMR_RESONANCE_SPECDENS_FK foreign key (SPECTRALDENSITYID) references nmr.NMR_SPECTRALDENSITY;
alter table nmr.NMR_SPECTRALDENSITY add constraint NMR_SPECDENS_DERIVATION_FK foreign key (DERIVATIONID) references nmr.NMR_SPECTRALDENSITYDERIVATION;
alter table nmr.NMR_SPECTRALDENSITY add constraint NMR_SPECDENS_DERIDATA_FK foreign key (DERIVEDDATAID) references nmr.NMR_DERIVEDDATA;
alter table nmr.NMR_SPECTRALDENSITYDERIVATION add constraint NMR_SPECDENSDERI_ABSTDATADERI_FK foreign key (ABSTRACTDATADERIVATIONID) references nmr.NMR_ABSTRACTDATADERIVATION;
alter table nmr.NMR_SPECTRALDENSITYDERIVATION add constraint NMR_SPECDENSDERI_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_SPECTRALDENSITYLIST;
alter table nmr.NMR_SPECTRALDENSITYLIST add constraint NMR_SPECDENSLIST_DERIDATALIST_FK foreign key (DERIVEDDATALISTID) references nmr.NMR_DERIVEDDATALIST;
alter table nmr.NMR_STRUANAL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_STRUANAL2APPLDATA add constraint FKEC6D6FFFE22FCB8B foreign key (DATAOBJECTID) references nmr.NMR_STRUCTUREANALYSIS;
alter table nmr.NMR_STRUANAL2STRUENSE add constraint NMR_STRUANAL_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.NMR_STRUANAL2STRUENSE add constraint COOR_STRUENSE_STRUANAL_FK foreign key (STRUCTUREANALYSISID) references nmr.NMR_STRUCTUREANALYSIS;
alter table nmr.NMR_STRUCTUREANALYSIS add constraint NMR_STRUANAL_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_STRUCTUREANALYSIS add constraint NMR_STRUANAL_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_STRUCTUREANALYSIS add constraint NMR_STRUANAL_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMR_STRUCTUREANALYSIS add constraint NMR_STRUANAL_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_STRUCTUREANALYSIS add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_STRUCTUREGENERATION add constraint NMR_STRUGENE_NMRPROJECT_TO_FK foreign key (TOPOBJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_STRUCTUREGENERATION add constraint NMR_STRUGENE_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.NMR_STRUCTUREGENERATION add constraint NMR_STRUGENE_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.NMR_STRUCTUREGENERATION add constraint NMR_STRUGENE_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.NMR_STRUCTUREGENERATION add constraint NMR_STRUGENE_METHOD_FK foreign key (METHODID) references nmr.METH_METHOD;
alter table nmr.NMR_STRUCTUREGENERATION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.NMR_STRUGENE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.NMR_STRUGENE2APPLDATA add constraint FK1FDBC2A2EF8C5307 foreign key (DATAOBJECTID) references nmr.NMR_STRUCTUREGENERATION;
alter table nmr.NMR_T1 add constraint NMR_T1_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_T1 add constraint NMR_T1_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_T1 add constraint NMR_T1_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_T1LIST;
alter table nmr.NMR_T1LIST add constraint NMR_T1LIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_T1RHO add constraint NMR_T1RHO_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_T1RHO add constraint NMR_T1RHO_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_T1RHO add constraint NMR_T1RHO_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_T1RHOLIST;
alter table nmr.NMR_T1RHOLIST add constraint NMR_T1RHOLIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.NMR_T2 add constraint NMR_T2_ABSTMEAS_FK foreign key (ABSTRACTMEASUREMENTID) references nmr.NMR_ABSTRACTMEASUREMENT;
alter table nmr.NMR_T2 add constraint NMR_T2_RESONANCE_FK foreign key (RESONANCEID) references nmr.NMR_RESONANCE;
alter table nmr.NMR_T2 add constraint NMR_T2_PARENTLIST_FK foreign key (PARENTLISTID) references nmr.NMR_T2LIST;
alter table nmr.NMR_T2LIST add constraint NMR_T2LIST_ABSTMEASLIST_FK foreign key (ABSTRACTMEASUREMENTLISTID) references nmr.NMR_ABSTRACTMEASUREMENTLIST;
alter table nmr.REFS_ABSTCOMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_ABSTCOMP2APPLDATA add constraint FKAA805D57F0E7AF2A foreign key (DATAOBJECTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_ABSTCOMP2CATEGORIES add constraint CLAS_SAMPCOMPCATE_COMPONENTS_FK foreign key (COMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_ABSTCOMP2CATEGORIES add constraint REFS_ABSTCOMP_CATEGORIES_FK foreign key (CATEGORYID) references nmr.CLAS_SAMPLECOMPONENTCATEGORY;
alter table nmr.REFS_ABSTCOMP_SYNONYMS add constraint REFS_ABSTCOMP_SYNONYMS_FK foreign key (ABSTRACTCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_ABSTRACTCOMPONENT add constraint REFS_ABSTCOMP_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_ABSTRACTCOMPONENT add constraint REFS_ABSTCOMP_REFSAMPCOMPSTOR_FK foreign key (REFSAMPLECOMPONENTSTOREID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_ABSTRACTCOMPONENT add constraint REFS_ABSTCOMP_NATUSOUR_FK foreign key (NATURALSOURCEID) references nmr.TAXO_NATURALSOURCE;
alter table nmr.REFS_ABSTRACTCOMPONENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_CELL add constraint REFS_CELL_ABSTCOMP_FK foreign key (ABSTRACTCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_COMPDBREF2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_COMPDBREF2APPLDATA add constraint FK731F686070CD6C71 foreign key (DATAOBJECTID) references nmr.REFS_COMPONENTDBREF;
alter table nmr.REFS_COMPELEM2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_COMPELEM2APPLDATA add constraint FK5F8FED2A66C7ED6E foreign key (DATAOBJECTID) references nmr.REFS_COMPOSITEELEMENT;
alter table nmr.REFS_COMPINTE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_COMPINTE2APPLDATA add constraint FK401A42439A51D584 foreign key (DATAOBJECTID) references nmr.REFS_COMPOSITEINTERACTION;
alter table nmr.REFS_COMPINTE2ELEMENTS add constraint REFS_COMPINTE_ELEMENTS_FK foreign key (ELEMENTID) references nmr.REFS_COMPOSITEELEMENT;
alter table nmr.REFS_COMPINTE2ELEMENTS add constraint REFS_COMPELEM_INTE_FK foreign key (INTERACTIONID) references nmr.REFS_COMPOSITEINTERACTION;
alter table nmr.REFS_COMPONENTDBREF add constraint REFS_COMPDBREF_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_COMPONENTDBREF add constraint REFS_COMPDBREF_DBREF_FK foreign key (DBREFID) references nmr.DBR_ENTRY;
alter table nmr.REFS_COMPONENTDBREF add constraint REFS_COMPDBREF_COMPONENT_FK foreign key (COMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_COMPONENTDBREF add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_COMPOSITE add constraint REFS_COMPOSITE_ABSTCOMP_FK foreign key (ABSTRACTCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_COMPOSITEELEMENT add constraint REFS_COMPELEM_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_COMPOSITEELEMENT add constraint REFS_COMPELEM_COMPOSITE_FK foreign key (COMPOSITEID) references nmr.REFS_COMPOSITE;
alter table nmr.REFS_COMPOSITEELEMENT add constraint REFS_COMPELEM_COMPONENT_FK foreign key (COMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_COMPOSITEELEMENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_COMPOSITEINTERACTION add constraint REFS_COMPINTE_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_COMPOSITEINTERACTION add constraint REFS_COMPINTE_COMPOSITE_FK foreign key (COMPOSITEID) references nmr.REFS_COMPOSITE;
alter table nmr.REFS_COMPOSITEINTERACTION add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_CONSTRUCT add constraint REFS_CONSTRUCT_MOLCOMP_FK foreign key (MOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_ISOTLABE2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_ISOTLABE2APPLDATA add constraint FKD4FA04E1F705C1B8 foreign key (DATAOBJECTID) references nmr.REFS_ISOTOPELABEL;
alter table nmr.REFS_ISOTLABE_ATOMNAMES add constraint REFS_ISOTLABE_ATOMNAMES_FK foreign key (ISOTOPELABELID) references nmr.REFS_ISOTOPELABEL;
alter table nmr.REFS_ISOTOPELABEL add constraint REFS_ISOTLABE_SPECLABEGROU_FK foreign key (SPECIFICLABELGROUPID) references nmr.REFS_SPECIFICLABELGROUP;
alter table nmr.REFS_ISOTOPELABEL add constraint REFS_ISOTLABE_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_ISOTOPELABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_LABEL add constraint REFS_LABEL_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_LABEL add constraint REFS_LABEL_COMPONENT_FK foreign key (COMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_LABEL add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_LABEL2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_LABEL2APPLDATA add constraint FKFB966525BC023A3 foreign key (DATAOBJECTID) references nmr.REFS_LABEL;
alter table nmr.REFS_MOLCOMPFEAT2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_MOLCOMPFEAT2APPLDATA add constraint FK5619061B960A23B6 foreign key (DATAOBJECTID) references nmr.REFS_MOLCOMPFEATURE;
alter table nmr.REFS_MOLCOMPFEATURE add constraint REFS_MOLCOMPFEAT_REFMOLCOMP_FK foreign key (REFMOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_MOLCOMPFEATURE add constraint REFS_MOLCOMPFEAT_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_MOLCOMPFEATURE add constraint REFS_MOLCOMPFEAT_MOLCOMP_FK foreign key (MOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_MOLCOMPFEATURE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_MOLCOMPONENT add constraint REFS_MOLCOMP_LABEMIXT_FK foreign key (LABELEDMIXTUREID) references nmr.LMOL_LABELEDMIXTURE;
alter table nmr.REFS_MOLCOMPONENT add constraint REFS_MOLCOMP_ABSTCOMP_FK foreign key (ABSTRACTCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.REFS_MOLCOMPONENT add constraint REFS_MOLCOMP_MOLECULE_FK foreign key (MOLECULEID) references nmr.MOLE_MOLECULE;
alter table nmr.REFS_PRIMER add constraint REFS_PRIMER_MOLCOMP_FK foreign key (MOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_REFSAMPCOMPSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_REFSAMPCOMPSTOR2APPLDATA add constraint FKF363F2CF39F97750 foreign key (DATAOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_REFSAMPLECOMPONENTSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_RESTRICTIONENZYME add constraint REFS_RESTENZY_MOLCOMP_FK foreign key (MOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_SPECIFICLABELGROUP add constraint REFS_SPECLABEGROU_REFSAMPCOMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.REFS_REFSAMPLECOMPONENTSTORE;
alter table nmr.REFS_SPECIFICLABELGROUP add constraint REFS_SPECLABEGROU_MOLCOMP_FK foreign key (MOLCOMPONENTID) references nmr.REFS_MOLCOMPONENT;
alter table nmr.REFS_SPECIFICLABELGROUP add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.REFS_SPECLABEGROU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.REFS_SPECLABEGROU2APPLDATA add constraint FKCE5B2544604F1476 foreign key (DATAOBJECTID) references nmr.REFS_SPECIFICLABELGROUP;
alter table nmr.REFS_SUBSTANCE add constraint REFS_SUBSTANCE_ABSTCOMP_FK foreign key (ABSTRACTCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.SAM_ABSTRACTSAMPLE add constraint SAM_ABSTSAMP_SAMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.SAM_SAMPLESTORE;
alter table nmr.SAM_ABSTRACTSAMPLE add constraint SAM_ABSTSAMP_SAMPSTOR_FK foreign key (SAMPLESTOREID) references nmr.SAM_SAMPLESTORE;
alter table nmr.SAM_ABSTRACTSAMPLE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.SAM_ABSTSAMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.SAM_ABSTSAMP2APPLDATA add constraint FK6859E5F417B859B foreign key (DATAOBJECTID) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_ABSTSAMP2HAZAPHRA add constraint SAM_ABSTSAMP_HAZAPHRA_FK foreign key (HAZARDPHRASEID) references nmr.CLAS_HAZARDPHRASE;
alter table nmr.SAM_ABSTSAMP2HAZAPHRA add constraint SAM_ABSTSAMP_OTHERROLE_FK foreign key (OTHERROLE) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_ABSTSAMP2SAMPCATE add constraint CLAS_SAMPCATE_ABSTSAMP_FK foreign key (ABSTRACTSAMPLEID) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_ABSTSAMP2SAMPCATE add constraint SAM_ABSTSAMP_SAMPCATE_FK foreign key (SAMPLECATEGORYID) references nmr.CLAS_SAMPLECATEGORY;
alter table nmr.SAM_CRYSTALSAMPLE add constraint SAM_CRYSSAMP_SAMPLE_FK foreign key (SAMPLEID) references nmr.SAM_SAMPLE;
alter table nmr.SAM_REFSAMPLE add constraint SAM_REFSAMPLE_ABSTSAMP_FK foreign key (ABSTRACTSAMPLEID) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_REFSAMPLESOURCE add constraint SAM_REFSAMPSOUR_SAMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.SAM_SAMPLESTORE;
alter table nmr.SAM_REFSAMPLESOURCE add constraint SAM_REFSAMPSOUR_SUPPLIER_FK foreign key (SUPPLIERID) references nmr.AFFI_ORGANISATION;
alter table nmr.SAM_REFSAMPLESOURCE add constraint SAM_REFSAMPSOUR_REFSAMPLE_FK foreign key (REFSAMPLEID) references nmr.SAM_REFSAMPLE;
alter table nmr.SAM_REFSAMPLESOURCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.SAM_REFSAMPSOUR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.SAM_REFSAMPSOUR2APPLDATA add constraint FKE6387C8AB62C3751 foreign key (DATAOBJECTID) references nmr.SAM_REFSAMPLESOURCE;
alter table nmr.SAM_SAMPCOMP2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.SAM_SAMPCOMP2APPLDATA add constraint FK13A4A347B114932C foreign key (DATAOBJECTID) references nmr.SAM_SAMPLECOMPONENT;
alter table nmr.SAM_SAMPLE add constraint SAM_SAMPLE_HOLDER_FK foreign key (HOLDERID) references nmr.HOLD_HOLDER;
alter table nmr.SAM_SAMPLE add constraint SAM_SAMPLE_ABSTSAMP_FK foreign key (ABSTRACTSAMPLEID) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_SAMPLE add constraint SAM_SAMPLE_REFSAMPLE_FK foreign key (REFSAMPLEID) references nmr.SAM_REFSAMPLE;
alter table nmr.SAM_SAMPLECOMPONENT add constraint SAM_SAMPCOMP_ABSTSAMP_FK foreign key (ABSTRACTSAMPLEID) references nmr.SAM_ABSTRACTSAMPLE;
alter table nmr.SAM_SAMPLECOMPONENT add constraint SAM_SAMPCOMP_SAMPSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.SAM_SAMPLESTORE;
alter table nmr.SAM_SAMPLECOMPONENT add constraint SAM_SAMPCOMP_CONTAINER_FK foreign key (CONTAINERID) references nmr.SAM_SAMPLECOMPONENT;
alter table nmr.SAM_SAMPLECOMPONENT add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.SAM_SAMPLECOMPONENT add constraint SAM_SAMPCOMP_REFCOMP_FK foreign key (REFCOMPONENTID) references nmr.REFS_ABSTRACTCOMPONENT;
alter table nmr.SAM_SAMPLESTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.SAM_SAMPSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.SAM_SAMPSTOR2APPLDATA add constraint FK34A98DF2B9E51C90 foreign key (DATAOBJECTID) references nmr.SAM_SAMPLESTORE;
alter table nmr.STER_REFSTER2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.STER_REFSTER2APPLDATA add constraint FK4D22E37736173755 foreign key (DATAOBJECTID) references nmr.STER_REFSTEREOCHEMISTRY;
alter table nmr.STER_REFSTEREOCHEMISTRY add constraint STER_REFSTER_STERSTOR_TO_FK foreign key (TOPOBJECTID) references nmr.STER_STEREOCHEMISTRYSTORE;
alter table nmr.STER_REFSTEREOCHEMISTRY add constraint STER_REFSTER_STERSTOR_FK foreign key (STEREOCHEMISTRYSTOREID) references nmr.STER_STEREOCHEMISTRYSTORE;
alter table nmr.STER_REFSTEREOCHEMISTRY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.STER_REFSTER_VALUES add constraint STER_REFSTER_VALUES_FK foreign key (REFSTEREOCHEMISTRYID) references nmr.STER_REFSTEREOCHEMISTRY;
alter table nmr.STER_STEREOCHEMISTRYSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.STER_STERSTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.STER_STERSTOR2APPLDATA add constraint FK342D0004BB9F6751 foreign key (DATAOBJECTID) references nmr.STER_STEREOCHEMISTRYSTORE;
alter table nmr.TAXO_NATURALSOURCE add constraint TAXO_NATUSOUR_TAXONOMY_FK foreign key (TAXONOMYID) references nmr.TAXO_TAXONOMY;
alter table nmr.TAXO_NATURALSOURCE add constraint TAXO_NATUSOUR_TAXONOMY_TO_FK foreign key (TOPOBJECTID) references nmr.TAXO_TAXONOMY;
alter table nmr.TAXO_NATURALSOURCE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.TAXO_NATUSOUR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.TAXO_NATUSOUR2APPLDATA add constraint FK8290049F207948C3 foreign key (DATAOBJECTID) references nmr.TAXO_NATURALSOURCE;
alter table nmr.TAXO_TAXONOMY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.TAXO_TAXONOMY2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.TAXO_TAXONOMY2APPLDATA add constraint FKE113893B1037FBDA foreign key (DATAOBJECTID) references nmr.TAXO_TAXONOMY;
alter table nmr.TEMP_ABSTPROB2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.TEMP_ABSTPROB2APPLDATA add constraint FKA57B04655777C03B foreign key (DATAOBJECTID) references nmr.TEMP_ABSTRACTPROBABILITY;
alter table nmr.TEMP_ABSTRACTPROBABILITY add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.TEMP_MULTITYPESVALUE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.TEMP_MULTITYPEVALUE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.TEMP_MULTTYPEVALU2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.TEMP_MULTTYPEVALU2APPLDATA add constraint FKC9EE17E4A96A619 foreign key (DATAOBJECTID) references nmr.TEMP_MULTITYPESVALUE;
alter table nmr.TEMP_MULTTYPEVALU2APPLDATA add constraint FKC9EE17E2DD8B19E foreign key (DATAOBJECTID) references nmr.TEMP_MULTITYPEVALUE;
alter table nmr.TEMP_MULTTYPEVALU_INTVALUES add constraint TEMP_MULTTYPEVALU_INTVALUES_FK foreign key (MULTITYPESVALUEID) references nmr.TEMP_MULTITYPESVALUE;
alter table nmr.TEMP_MULTTYPEVALU_TEXTVALUES add constraint TEMP_MULTTYPEVALU_TEXTVALUES_FK foreign key (MULTITYPESVALUEID) references nmr.TEMP_MULTITYPESVALUE;
alter table nmr.VALD_ATOMVALI2ATOMS add constraint COOR_ATOM_ATOMVALI_FK foreign key (ATOMVALIDATIONID) references nmr.VALD_ATOMVALIDATION;
alter table nmr.VALD_ATOMVALI2ATOMS add constraint VALD_ATOMVALI_ATOMS_FK foreign key (ATOMID) references nmr.COOR_ATOM;
alter table nmr.VALD_ATOMVALIDATION add constraint VALD_ATOMVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_CHAINVALIDATION add constraint VALD_CHAIVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_CHAIVALI2CHAINS add constraint COOR_CHAIN_CHAIVALI_FK foreign key (CHAINVALIDATIONID) references nmr.VALD_CHAINVALIDATION;
alter table nmr.VALD_CHAIVALI2CHAINS add constraint VALD_CHAIVALI_CHAINS_FK foreign key (CHAINID) references nmr.COOR_CHAIN;
alter table nmr.VALD_ENSEMBLEVALIDATION add constraint VALD_ENSEVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_ENTRYVALIDATION add constraint VALD_ENTRVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_MOLSYSATOMVALI2ATOMS add constraint MOLS_ATOM_MOLSYSATOMVALI_FK foreign key (MOLSYSATOMVALIDATIONID) references nmr.VALD_MOLSYSATOMVALIDATION;
alter table nmr.VALD_MOLSYSATOMVALI2ATOMS add constraint VALD_MOLSYSATOMVALI_ATOMS_FK foreign key (ATOMID) references nmr.MOLS_ATOM;
alter table nmr.VALD_MOLSYSATOMVALIDATION add constraint VALD_MOLSYSATOMVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_MOLSYSCHAINVALIDATION add constraint VALD_MOLSYSCHAIVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_MOLSYSCHAIVALI2CHAINS add constraint MOLS_CHAIN_MOLSYSCHAIVALI_FK foreign key (MOLSYSCHAINVALIDATIONID) references nmr.VALD_MOLSYSCHAINVALIDATION;
alter table nmr.VALD_MOLSYSCHAIVALI2CHAINS add constraint VALD_MOLSYSCHAIVALI_CHAINS_FK foreign key (CHAINID) references nmr.MOLS_CHAIN;
alter table nmr.VALD_MOLSYSRESIDUEVALIDATION add constraint VALD_MOLSYSRESIVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_MOLSYSRESIVALI2RESIDUES add constraint MOLS_RESIDUE_MOLSYSRESIVALI_FK foreign key (MOLSYSRESIDUEVALIDATIONID) references nmr.VALD_MOLSYSRESIDUEVALIDATION;
alter table nmr.VALD_MOLSYSRESIVALI2RESIDUES add constraint VALD_MOLSYSRESIVALI_RESIDUES_FK foreign key (RESIDUEID) references nmr.MOLS_RESIDUE;
alter table nmr.VALD_MOLSYSTEMVALIDATION add constraint VALD_MOLSYSTVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_MOLSYSTVALI2MOLSYSTEMS add constraint VALD_MOLSYSTVALI_MOLSYSTEMS_FK foreign key (MOLSYSTEMID) references nmr.MOLS_MOLSYSTEM;
alter table nmr.VALD_MOLSYSTVALI2MOLSYSTEMS add constraint MOLS_MOLSYSTEM_MOLSYSTVALI_FK foreign key (MOLSYSTEMVALIDATIONID) references nmr.VALD_MOLSYSTEMVALIDATION;
alter table nmr.VALD_NMRCONSTRAINTLISTVALIDATION add constraint VALD_NMRCONSLISTVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_NMRCONSTRAINTVALIDATION add constraint VALD_NMRCONSVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_NMRMEASUREMENTLISTVALIDATION add constraint VALD_NMRMEASLISTVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_NMRMEASUREMENTVALIDATION add constraint VALD_NMRMEASVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_PEAKLISTVALIDATION add constraint VALD_PEAKLISTVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_PEAKVALIDATION add constraint VALD_PEAKVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_RESIDUEVALIDATION add constraint VALD_RESIVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_RESIVALI2RESIDUES add constraint COOR_RESIDUE_RESIVALI_FK foreign key (RESIDUEVALIDATIONID) references nmr.VALD_RESIDUEVALIDATION;
alter table nmr.VALD_RESIVALI2RESIDUES add constraint VALD_RESIVALI_RESIDUES_FK foreign key (RESIDUEID) references nmr.COOR_RESIDUE;
alter table nmr.VALD_STRUCTUREVALIDATION add constraint VALD_STRUVALI_VALIRESU_FK foreign key (VALIDATIONRESULTID) references nmr.VALD_VALIDATIONRESULT;
alter table nmr.VALD_STRUVALI2MODELS add constraint COOR_MODEL_STRUVALI_FK foreign key (STRUCTUREVALIDATIONID) references nmr.VALD_STRUCTUREVALIDATION;
alter table nmr.VALD_STRUVALI2MODELS add constraint VALD_STRUVALI_MODELS_FK foreign key (MODELID) references nmr.COOR_MODEL;
alter table nmr.VALD_VALIDATIONRESULT add constraint VALD_VALIRESU_VALISTOR_FK foreign key (VALIDATIONSTOREID) references nmr.VALD_VALIDATIONSTORE;
alter table nmr.VALD_VALIDATIONRESULT add constraint VALD_VALIRESU_MULTTYPEVALU_FK foreign key (MULTITYPEVALUEID) references nmr.TEMP_MULTITYPEVALUE;
alter table nmr.VALD_VALIDATIONSTORE add constraint VALD_VALISTOR_NMRPROJECT_FK foreign key (NMRPROJECTID) references nmr.NMR_NMRPROJECT;
alter table nmr.VALD_VALIDATIONSTORE add constraint VALD_VALISTOR_STRUENSE_FK foreign key (STRUCTUREENSEMBLEID) references nmr.COOR_STRUCTUREENSEMBLE;
alter table nmr.VALD_VALIDATIONSTORE add constraint VALD_VALISTOR_NMRCONSSTOR_FK foreign key (NMRCONSTRAINTSTOREID) references nmr.NMRC_NMRCONSTRAINTSTORE;
alter table nmr.VALD_VALIDATIONSTORE add constraint VALD_VALISTOR_SOFTWARE_FK foreign key (SOFTWAREID) references nmr.METH_SOFTWARE;
alter table nmr.VALD_VALIDATIONSTORE add constraint IMPL_DATAOBJECT_ACCESS_FK foreign key (ACCESSID) references nmr.ACCO_ACCESSOBJECT;
alter table nmr.VALD_VALISTOR2APPLDATA add constraint IMPL_DATAOBJECT_APPLDATA_FK foreign key (APPLICATIONDATAID) references nmr.IMPL_APPLICATIONDATA;
alter table nmr.VALD_VALISTOR2APPLDATA add constraint FKA6DD6EFF34F1016D foreign key (DATAOBJECTID) references nmr.VALD_VALIDATIONSTORE;
create sequence public.hibernate_sequence;

--
-- Name: mols_residue_molres_proc(); Type: FUNCTION; Schema: public; Owner: -
--

CREATE OR REPLACE FUNCTION nmr.mols_residue_molres_proc() RETURNS "trigger"
    AS $$
  BEGIN
   SELECT MOLRES.DATAOBJECTID INTO NEW.MOLRESIDUEID
     FROM NMR.MOLS_CHAIN CHAIN, NMR.MOLE_MOLECULE MOL,
          NMR.MOLE_MOLRESIDUE MOLRES
     WHERE NEW.CHAINID = CHAIN.DATAOBJECTID AND
           CHAIN.MOLECULEID = MOL.TOPOBJECTID AND
           MOLRES.MOLECULEID = MOL.TOPOBJECTID AND
           NEW.SEQID = MOLRES.SERIAL;
  RETURN NEW;
  END;
 $$
    LANGUAGE plpgsql;



--
-- Name: mols_residue_molres_trg; Type: TRIGGER; Schema: public; Owner: -
--

CREATE TRIGGER mols_residue_molres_trg
    BEFORE INSERT OR UPDATE ON nmr.mols_residue
    FOR EACH ROW
    EXECUTE PROCEDURE nmr.mols_residue_molres_proc();


--
-- Example of hand-coded tuning table for SQL queries only.  This is
-- NOT mapped by hibernate but is queried directly by SQL as is
-- designed to tune certain queries that would simply take too long
-- to run through SQL (typically DB-wide data-mining type queries)
--


CREATE TABLE NMR.TUNE_SHIFT2ATOMS (
--
-- These will get loaded in first pass (as CCPN loads)
    PROJECT_NAME    VARCHAR(80)  NOT NULL,
    PROJECT_ID      INT8         NOT NULL,
    SHIFT_ID        INT8         NOT NULL,
    SHIFT_FREQ      FLOAT        NOT NULL,
    SHIFT_LIST_ID   INT8         NOT NULL,
    ATOM_ID         INT8         NOT NULL,
    ATOM_NAME       VARCHAR(32)  NOT NULL,
    RESIDUE_ID      INT8         NOT NULL,
    RESIDUE_SEQID   INTEGER      NOT NULL,
    RESIDUE_LINKING VARCHAR(32)  NOT NULL,
    RESIDUE_DESCRIP VARCHAR(32)  NOT NULL,
    COMP_ID         INT8         NOT NULL,
    COMP_NAME       VARCHAR(80)  NOT NULL,
    CHEMATOM_ID     INT8         NOT NULL,
    ELEMENTSYMBOL   VARCHAR(32)  NOT NULL,
    CASPER_SCORE    FLOAT,
    IS_CASPER       BOOLEAN      NOT NULL DEFAULT FALSE,
    IS_SIMULATED    BOOLEAN      NOT NULL DEFAULT FALSE,
--
-- These will get populated in a second pass (once evidence loaded)
    GLYCAN_ID       INTEGER,
    EVIDENCE_ID     INTEGER);     


CREATE TABLE NMR.TUNE_COUPLING2ATOMS (
    PROJECT_NAME      VARCHAR(80)  NOT NULL,
    COUPLING_ID       INT8         NOT NULL,
    COUPLING_FREQ     FLOAT        NOT NULL,
    COUPLING_LIST_ID  INT8         NOT NULL,
    ATOM_1_ID         INT8         NOT NULL,
    ATOM_1_NAME       VARCHAR(32)  NOT NULL,
    RESIDUE_1_ID      INT8         NOT NULL,
    RESIDUE_1_SEQID   INTEGER      NOT NULL,
    RESIDUE_1_LINKING VARCHAR(32)  NOT NULL,
    RESIDUE_1_DESCRIP VARCHAR(32)  NOT NULL,
    COMP_1_ID         INT8         NOT NULL,
    COMP_1_NAME       VARCHAR(80)  NOT NULL,
    CHEMATOM_1_ID     INT8         NOT NULL,
    ELEMENTSYMBOL_1   VARCHAR(32)  NOT NULL,
    ATOM_2_ID         INT8         NOT NULL,
    ATOM_2_NAME       VARCHAR(32)  NOT NULL,
    RESIDUE_2_ID      INT8         NOT NULL,
    RESIDUE_2_SEQID   INTEGER      NOT NULL,
    RESIDUE_2_LINKING VARCHAR(32)  NOT NULL,
    RESIDUE_2_DESCRIP VARCHAR(32)  NOT NULL,
    COMP_2_ID         INT8         NOT NULL,
    COMP_2_NAME       VARCHAR(80)  NOT NULL,
    CHEMATOM_2_ID     INT8         NOT NULL,
    ELEMENTSYMBOL_2   VARCHAR(32)  NOT NULL,
    IS_SIMULATED      BOOLEAN      NOT NULL DEFAULT FALSE);




-- FIXME: should try to get rid of this one. No reason
-- not to just query through HQL

CREATE TABLE NMR.TUNE_EXPTS (
    PROJECT_NAME    VARCHAR(20)  NOT NULL,
    SHIFT_LIST_ID   INT8         ,
    SHIFT_LIST_SYN  BOOLEAN      DEFAULT FALSE,
    EXPT_NAME       VARCHAR(80)  NOT NULL,
    EXPT_ID         INT8         NOT NULL,
    EXPT_NUM_DIMS   INTEGER      NOT NULL,
    SPEC_FREQ       VARCHAR(32),
    EXPT_DETAILS    TEXT
);

--
-- Name: atom_shift_comps_proc(); Type: FUNCTION; Schema: public; Owner: -
--
-- Populates a highly normalised, data warehouse-like table based on
-- a shift. This allows rapid querying across the whole DB. Note
-- that this is slow unless indexes are built as described in the
-- create_index_ccpn.sql file.
--

CREATE OR REPLACE FUNCTION nmr.atom_shift_comps_proc() RETURNS "trigger"
    AS $$
  DECLARE
    SHIFT_FREQ      FLOAT;
    IS_CASPER       BOOLEAN;
    CASPER_SHIFT    FLOAT;
    GLYCAN_ID       INTEGER;
    EVIDENCE_ID     INTEGER;
    ROOT_REC        NMR.IMPL_MEMOPSROOT%ROWTYPE;
    MEASLIST_REC    NMR.NMR_ABSTRACTMEASUREMENTLIST%ROWTYPE; 
    ATOM_REC        NMR.MOLS_ATOM%ROWTYPE; 
    RES_REC         NMR.MOLS_RESIDUE%ROWTYPE; 
    MOL_REC         NMR.MOLE_MOLECULE%ROWTYPE; 
    COMP_REC        NMR.CHEM_CHEMCOMP%ROWTYPE;
    CHEMATOM_REC    NMR.CHEM_CHEMATOM%ROWTYPE;

  BEGIN

    SELECT MEAS.VALUE INTO SHIFT_FREQ 
    FROM NMR.NMR_ABSTRACTMEASUREMENT MEAS
    WHERE MEAS.DATAOBJECTID = NEW.ABSTRACTMEASUREMENTID;

    SELECT INTO MEASLIST_REC *
    FROM NMR.NMR_ABSTRACTMEASUREMENTLIST MEASLIST
    WHERE MEASLIST.DATAOBJECTID = NEW.PARENTLISTID;

    IF MEASLIST_REC.NAME LIKE 'CASPER%' THEN
      IS_CASPER = TRUE;
    ELSE
      IS_CASPER = FALSE;
    END IF;

    SELECT INTO ROOT_REC * FROM NMR.IMPL_MEMOPSROOT ROOT,
                                NMR.IMPL_MEMOPSROOT2NMRPROJ ROOT2PROJ,
                                NMR.NMR_NMRPROJECT PROJ,
                                NMR.NMR_ABSTRACTMEASUREMENT MEAS
    WHERE MEAS.DATAOBJECTID = NEW.ABSTRACTMEASUREMENTID
    AND MEAS.TOPOBJECTID = PROJ.TOPOBJECTID
    AND PROJ.TOPOBJECTID = ROOT2PROJ.NMRPROJECTID
    AND ROOT2PROJ.MEMOPSROOTID = ROOT.IMPLEMENTATIONOBJECTID;

    FOR ATOM_REC IN SELECT * FROM NMR.MOLS_ATOM ATOM,
                                NMR.NMR_ATOMSET ATOMSET,
                                NMR.NMR_RESOSET2ATOMSETS ATOM2RESON,
                                NMR.NMR_RESONANCESET RESONSET,
                                NMR.NMR_RESONANCE RESON
      WHERE ATOM.ATOMSETID = ATOMSET.DATAOBJECTID
      AND ATOMSET.DATAOBJECTID = ATOM2RESON.ATOMSETID
      AND RESONSET.DATAOBJECTID = ATOM2RESON.RESONANCESETID
      AND RESON.RESONANCESETID = RESONSET.DATAOBJECTID
      AND RESON.DATAOBJECTID = NEW.RESONANCEID LOOP

      SELECT INTO RES_REC * FROM NMR.MOLS_RESIDUE RES
      WHERE RES.DATAOBJECTID = ATOM_REC.RESIDUEID; 

      SELECT INTO COMP_REC * FROM NMR.CHEM_CHEMCOMP COMP,
                                  NMR.MOLE_MOLRESIDUE MOLRES,
                                  NMR.MOLS_CHAIN CHAIN,
                                  NMR.MOLE_MOLECULE MOL
      WHERE RES_REC.CHAINID = CHAIN.DATAOBJECTID
      AND CHAIN.MOLECULEID = MOL.TOPOBJECTID
      AND MOLRES.MOLECULEID = MOL.TOPOBJECTID
      AND RES_REC.SEQID = MOLRES.SERIAL
      AND MOLRES.CHEMCOMPID = COMP.TOPOBJECTID;

      -- we include this so that we pick up changes correctly
      -- app data will be null on first pass as set when
      -- ccpn project linked to DB

      SELECT INTO MOL_REC * FROM NMR.MOLE_MOLECULE MOL,
                                 NMR.MOLS_CHAIN CHAIN
      WHERE RES_REC.CHAINID = CHAIN.DATAOBJECTID
      AND CHAIN.MOLECULEID = MOL.TOPOBJECTID;

      SELECT APPDATA.APPDATAINT_VALUE INTO GLYCAN_ID FROM
                                   NMR.IMPL_APPLICATIONDATA APPDATA,
                                   NMR.MOLE_MOLECULE2APPLDATA APP2MOL
      WHERE MOL_REC.TOPOBJECTID = APP2MOL.DATAOBJECTID
      AND APP2MOL.APPLICATIONDATAID = APPDATA.MEMOPSDATATYPEOBJECTID
      AND APPDATA.APPLICATION = 'ECDB'
      AND APPDATA.KEYWORD = 'GLYCAN_ID';


      SELECT EVID.EVIDENCE_ID INTO EVIDENCE_ID FROM NMR.NMR_EVIDENCE EVID
      WHERE EVID.MEMOPS_ROOT_ID = ROOT_REC.IMPLEMENTATIONOBJECTID;
                                   
      -- end of block which normally null on first setting


      SELECT INTO CHEMATOM_REC * FROM NMR.CHEM_CHEMATOM CHEMATOM,
                                      NMR.CHEM_ABSTRACTCHEMATOM ABSTRCHEMATOM
      WHERE ABSTRCHEMATOM.CHEMCOMPID = COMP_REC.TOPOBJECTID
      AND ABSTRCHEMATOM.NAME = ATOM_REC.NAME
      AND ABSTRCHEMATOM.DATAOBJECTID = CHEMATOM.ABSTRACTCHEMATOMID;

      IF IS_CASPER THEN
         CASPER_SHIFT = SHIFT_FREQ;
         UPDATE NMR.TUNE_SHIFT2ATOMS
         SET CASPER_SCORE = CASPER_SHIFT
         WHERE ATOM_ID = ATOM_REC.DATAOBJECTID;
      ELSE

         -- we can have more than one casper run so
         -- this could get awkward!

         SELECT CASPER.SHIFT_FREQ INTO CASPER_SHIFT
         FROM NMR.TUNE_SHIFT2ATOMS CASPER
         WHERE CASPER.ATOM_ID = ATOM_REC.DATAOBJECTID
         AND CASPER.IS_CASPER = TRUE
         ORDER BY CASPER.SHIFT_LIST_ID DESC;

      END IF;        

      -- First delete so that we are sure that we will not
      -- end up with duplicate rows after repeat updates

      DELETE FROM NMR.TUNE_SHIFT2ATOMS
      WHERE SHIFT_ID = NEW.ABSTRACTMEASUREMENTID;

      -- Then add new rows

      INSERT INTO NMR.TUNE_SHIFT2ATOMS VALUES (
        ROOT_REC.NAME,
        ROOT_REC.IMPLEMENTATIONOBJECTID,
        NEW.ABSTRACTMEASUREMENTID,
        SHIFT_FREQ,
        NEW.PARENTLISTID,
        ATOM_REC.DATAOBJECTID,
        ATOM_REC.NAME,
        RES_REC.DATAOBJECTID,
        RES_REC.SEQID,       
        RES_REC.LINKING,       
        RES_REC.DESCRIPTOR,       
        COMP_REC.TOPOBJECTID,
        COMP_REC.CCPCODE,
        CHEMATOM_REC.ABSTRACTCHEMATOMID,
        CHEMATOM_REC.ELEMENTSYMBOL,
	CASPER_SHIFT,
   	IS_CASPER,
        MEASLIST_REC.ISSIMULATED,
        GLYCAN_ID,
        EVIDENCE_ID
      );

    END LOOP;

    RETURN NEW;
  END;
 $$
    LANGUAGE plpgsql;

--
-- Need to delete rows from the DW table if we delete the shift
--


CREATE OR REPLACE FUNCTION nmr.atom_shift_comps_del_proc() RETURNS "trigger"
    AS $$
    BEGIN
       DELETE FROM NMR.TUNE_SHIFT2ATOMS WHERE SHIFT_ID = OLD.ABSTRACTMEASUREMENTID;
    RETURN NEW;
    END;
$$
    LANGUAGE plpgsql;



--
-- Name: atom_shift_evid_proc(); Type: FUNCTION; Schema: public; Owner: -
--
-- Stored procedure that adds information from the core schema to the
-- CCPN DW table(s)
--
-- FIXME:
-- This is extremely non-portable! It would be far better to refactor this whole
-- area and stick in a new class NmrEvidenceShift that maps onto the table
-- nmr.tune_shift2atoms (or something close). The return type is just to keep
-- hibernate happy as we are accessing through an sql-query - logically this
-- function is void.

CREATE OR REPLACE FUNCTION nmr.atom_shift_evid_proc(ROOT_ID INT8) RETURNS INTEGER
AS $$
  DECLARE
    RES_ID       INT8;
    EVID_REC     NMR.NMR_EVIDENCE%ROWTYPE;
    MOL_REC      NMR.MOLE_MOLECULE%ROWTYPE;
    GLYC_ID      INTEGER;
  BEGIN

    SELECT INTO EVID_REC * FROM NMR.NMR_EVIDENCE ROOT 
    WHERE ROOT.MEMOPS_ROOT_ID = ROOT_ID;

    FOR RES_ID IN SELECT DISTINCT RESIDUE_ID FROM NMR.TUNE_SHIFT2ATOMS TUNE
    WHERE TUNE.PROJECT_ID = ROOT_ID LOOP

      SELECT INTO MOL_REC * FROM NMR.MOLE_MOLECULE MOL,
                                 NMR.MOLS_RESIDUE RES,
                                 NMR.MOLS_CHAIN CHAIN
      WHERE RES.DATAOBJECTID = RES_ID
      AND RES.CHAINID = CHAIN.DATAOBJECTID
      AND CHAIN.MOLECULEID = MOL.TOPOBJECTID;

      SELECT APPDATA.APPDATAINT_VALUE INTO GLYC_ID FROM
                                   NMR.IMPL_APPLICATIONDATA APPDATA,
                                   NMR.MOLE_MOLECULE2APPLDATA APP2MOL
      WHERE MOL_REC.TOPOBJECTID = APP2MOL.DATAOBJECTID
      AND APP2MOL.APPLICATIONDATAID = APPDATA.MEMOPSDATATYPEOBJECTID
      AND APPDATA.APPLICATION = 'ECDB'
      AND APPDATA.KEYWORD = 'GLYCAN_ID';
                                   
      UPDATE NMR.TUNE_SHIFT2ATOMS
      SET GLYCAN_ID = GLYC_ID, 
          EVIDENCE_ID = EVID_REC.EVIDENCE_ID
      WHERE RESIDUE_ID = RES_ID;

    END LOOP;

    RETURN 1;

  END;
$$
    LANGUAGE plpgsql;




--
-- Name: mols_residue_molres_trg; Type: TRIGGER; Schema: public; Owner: -
--
-- Triggers that populate the nmr.tune_shift2atoms table

CREATE TRIGGER atom_shift_comps_trg
    BEFORE INSERT OR UPDATE ON nmr.nmr_shift
    FOR EACH ROW
    EXECUTE PROCEDURE nmr.atom_shift_comps_proc();

CREATE TRIGGER atom_shift_comps_del_trg
    BEFORE DELETE ON nmr.nmr_shift
    FOR EACH ROW
    EXECUTE PROCEDURE nmr.atom_shift_comps_del_proc();


--
-- Name: nmr.experiment_proc
--
-- populates a small DW table containing Experimental information

-- FIXME: This should be done through HQL. This trigger and
-- the assoicated table do provide any real benefit and so
-- should go.


CREATE OR REPLACE FUNCTION nmr.experiment_proc() RETURNS "trigger"
    AS $$
  DECLARE
    SPEC_FREQ      VARCHAR(32);
    PROJ_NAME      VARCHAR(20);
    MEAS_ROW       NMR.NMR_ABSTRACTMEASUREMENTLIST%ROWTYPE;
  BEGIN
    SELECT PROJ.SEGMENT INTO PROJ_NAME
    FROM NMR.NMR_NMRPROJECT PROJ
    WHERE NEW.TOPOBJECTID = PROJ.TOPOBJECTID;

    SELECT SPEC.NOMINALFREQ INTO SPEC_FREQ
    FROM NMR.INST_NMRSPECTROMETER SPEC
    WHERE NEW.SPECTROMETERID = SPEC.ABSTRACTINSTRUMENTID;

    SELECT INTO MEAS_ROW * 
    FROM  NMR.NMR_ABSTRACTMEASUREMENTLIST MEAS
    WHERE MEAS.DATAOBJECTID = NEW.SHIFTLISTID;
  
    INSERT INTO NMR.TUNE_EXPTS VALUES (
      PROJ_NAME,
      MEAS_ROW.DATAOBJECTID,
      MEAS_ROW.ISSIMULATED,
      NEW.NAME,
      NEW.DATAOBJECTID,
      NEW.NUMDIM,
      SPEC_FREQ,
      NEW.DETAILS
    );

    RETURN NEW;
  END;
 $$
    LANGUAGE plpgsql;

CREATE TRIGGER nmr_experiment_trg
    BEFORE INSERT ON nmr.nmr_experiment
    FOR EACH ROW
    EXECUTE PROCEDURE nmr.experiment_proc();

-- END DUBLIN DEVELOPMENT VERSION



  


  
