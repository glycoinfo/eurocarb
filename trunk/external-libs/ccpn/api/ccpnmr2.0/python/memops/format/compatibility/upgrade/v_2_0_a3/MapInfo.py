
# Packages, classElements and AbstractDataTypes skipped in new model
# (prefix, typeName, elemName, newGuid, elemType)
skipElements = [
]

# classElements skipped in new model, but available for simple data transfer
# (prefix, typeName, elemName, newGuid, elemMap, valueTypeGuid)
delayElements = [
]

# MetaConstraints added in new model
# (qualifiedName, guid)
newConstraints = [
]

# Mandatory classElements added in new model
# New ClassElements with locard !=0, no default, not derived or Implementation
# (prefix, typeName, elemName, newGuid)
newMandatories = [
]

# Packages, classElements and AbstractDataTypes added in new model
# Optional, i.e. excluding mandatory classElements given above
# (prefix, typeName, elemName, newGuid)
newElements = [
 ('HADD', 'HaddockPartner', 'airUpperDistanceLimit', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00001'), 
 ('HADD', 'HaddockPartner', 'semiFlexMode', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00002'), 
 ('HADD', 'Run', 'cnsExecutable', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00004'), 
 ('HADD', 'Run', 'cpuNumber', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00006'), 
 ('HADD', 'Run', 'haddockDir', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00003'), 
 ('HADD', 'Run', 'queueCommand', 'www.ccpn.ac.uk_Fogh_2009-02-20-13:12:00_00005'), 
 ('HADD', 'SemiFlexMode', None, 'www.ccpn.ac.uk_Fogh_2009-02-20-13:11:56_00001'), 
 ('NSIM', 'NmrSimStore', 'application', 'www.ccpn.ac.uk_Fogh_2009-01-19-16:41:42_00001'), 
]

# Class elements that exist in both models but that require handcode for
# transfer. E.g. elements that go from derived to non-derived.
# Note that old derivation functions can not be relied on to work during
# data transfer
# (prefix, typeName, elemName, newGuid, elemType)
neutraliseElements = [
]

# Differences between equivalent classElements and AbstractDataTypes :

# name changes
# (prefix, typeName, elemName, newName, newGuid
renames = [
]

# ValueType changes
# change types are : 'ignore': do nothing, 'delay': available for calculation
# (prefix, typeName, elemName, action, newGuid, elemMap, valueTypeGuid)
typeChanges = [
 ('NMR', 'ResonanceGroup', 'details', 'delay', 'www.ccpn.ac.uk_Fogh_2006-08-16-18:20:11_00004', {'eType': 'cplx', 'tag': 'NMR.ResonanceGroup.details', 'type': 'attr', 'name': 'details'}, 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035'), 
]

# Different elements with matching qualifiedNames
# (element.qName, differentTags, oldGuid, newGuid
nameMatches = [
]

# Differences for matching elements, 
# excluding those where only names and/or valueTypes differ
# (oldElem.qName, newElem.name, oldGuid, newGuid, differentTags
allDiffs = [
]
