

-- FIXME
-- not all new glycans are being stored correctly which is
-- resulting in nulls. Allow these for now.

alter table core.glycan_sequence
   alter column     sequence_ct_condensed 
                                    DROP NOT NULL;
-- FIXME
-- not all new IUPAC sequences are bing generated correctly
-- and this is breaking the UK constraint. Therefore drop
-- it for now.

alter table core.glycan_sequence 
   drop constraint glycan_sequence_sequence_iupac_key;


-- This is a large fix to change what appears to be a last minute
-- change in the code. Instead of having a link between glycan_residue
-- and residue, we have the name incorporated directly into the new
-- table. We therefore have to move the names across in a (large)
-- update.

alter table seq.glycan_residue
   alter column    residue_id      DROP NOT NULL;

alter table seq.glycan_residue
   add column      residue_name    varchar(64);

update seq.glycan_residue gr set residue_name = 
      ( select r.name 
        from seq.residue r 
        where gr.residue_id = r.residue_id);

alter table seq.glycan_residue
   alter column    residue_name     SET NOT NULL; 

-- FIXME
-- These columns are in the latest SQL and are required for the
-- current UI, but are not in the DB dump on which the development
-- build was based.
--

alter table seq.glycan_residue
   add column      basetype_id      int default null;

alter table seq.glycan_residue
   add column      stereochem_id    int default null;

alter table seq.glycan_residue
   add column      anomer           char default null;

alter table seq.glycan_residue
   add column      conformation     char default null;

alter table seq.glycan_residue
   add column      superclass       smallint default null;

alter table seq.glycan_residue
   add column      linkage_parent   smallint default null;

alter table seq.glycan_residue
   add column    linkage_child      smallint default null;


alter table core.glycan_sequence_to_evidence 
     add column     date_entered    TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

alter table core.glycan_sequence_to_evidence 
     add column    contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.glycan_sequence_to_evidence 
     alter column    contributor_id   DROP DEFAULT;

alter table core.glycan_sequence_to_biological_context 
     add column     contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.glycan_sequence_to_biological_context 
     alter column    contributor_id   DROP DEFAULT;

alter table core.glycan_sequence_to_biological_context 
     add column     date_entered    TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

alter table core.glycan_sequence_to_reference 
     add column     contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.glycan_sequence_to_reference 
     alter column    contributor_id   DROP DEFAULT;

alter table core.glycan_sequence_to_reference
     add column     date_entered    TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

alter table core.evidence_to_reference 
     add column     contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.evidence_to_reference 
     alter column    contributor_id   DROP DEFAULT;

alter table core.evidence_to_reference
     add column     date_entered    TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

alter table core.evidence_to_biological_context 
      add column   contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.evidence_to_biological_context 
     alter column    contributor_id   DROP DEFAULT;

alter table core.evidence_to_biological_context
      add column     date_entered   TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

alter table core.biological_context_to_experiment 
      add column   contributor_id   INT NOT NULL DEFAULT 5 
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table core.biological_context_to_experiment
      add column     date_entered   TIMESTAMP WITH TIME ZONE NOT NULL
                                    DEFAULT CURRENT_TIMESTAMP;

-- FIXME
-- required for UI and in latest SQL but not in DB dump on which
-- development build was based

CREATE SEQUENCE ref_link_ref_link_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;

CREATE SEQUENCE ref_link_ref_link_seq
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;

 alter table hplc.ref_link add column ref_link_id integer NOT NULL DEFAULT nextval('ref_link_ref_link_seq'::regclass);

alter table hplc.ref_link add column     core_reference_id integer;
alter table hplc.ref_link add column     ref_ref_id integer;

alter table hplc.ref_link add column     contributor_id integer
                                    REFERENCES core.contributor
                                    ON UPDATE CASCADE ON DELETE CASCADE;

alter table hplc.ref_link add column     date_entered timestamp without time zone
                                    DEFAULT CURRENT_TIMESTAMP;
