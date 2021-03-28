CREATE  INDEX index_tune_s2a_comp_id ON NMR.TUNE_SHIFT2ATOMS ( comp_id )
;

CREATE  INDEX index_tune_s2a_atom_id ON NMR.TUNE_SHIFT2ATOMS ( atom_id )
;

CREATE  INDEX index_tune_s2a_residue_id ON NMR.TUNE_SHIFT2ATOMS ( residue_id )
;

CREATE  INDEX index_tune_s2a_shiftlist_id ON NMR.TUNE_SHIFT2ATOMS ( shift_list_id )
;
