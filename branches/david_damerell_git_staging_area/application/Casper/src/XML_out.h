/* Filename = XML_out.h */
/* Prefix = XML_ */
/* Output of casper-spectra/structures in XML */

/* Format:
<casper>
<code>
casper structure
</code>

<spectrum nucleus="13C">
<peak residue="label" atom="Cn">cs</peak>


</spectrum>

<spectrum nucleus="1H">

<spectrum nucleus="1H 1H">

<spectrum nucleus="13C 1H">
*/

#ifndef _XML_OUT_H
#define _XML_OUT_H

void XML_code(struct BU_Struct *structure);
void XML_residues(struct BU_Struct *structure);
void XML_linkages(struct BU_Struct *structure);
void XML_spec_c(struct BU_Struct *structure);
void XML_spec_h(struct BU_Struct *structure);
int XML_structure();

#endif
