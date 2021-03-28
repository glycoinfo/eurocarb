#!/usr/bin/perl

#
# script that goes through a directory systematically
# loading entries and linking them into the evidence
# table / glcan sequence
#


####### EDIT THESE TO CHANGE THE LOAD ##############

$dir_to_load = "/home/jionides/work/CCPN/sugabase_v2_b2";
$suffix = "sugabaseCcpn";
$user = "aceroni";
$ref_data_dir = "/home/jionides/work/ECDB/eurocarb/application/Eurocarbdb/data/ccpn_ref_data/";

$INDEX_START =904;
$BATCH_SIZE = 10;
$TOTAL_SIZE = 1;

$log = "/home/jionides/work/ECDB/eurocarb/logs/nmrload.log";

################# MAIN LOOP ########################


open( LOG, '>'.$log);

@ls = `ls $dir_to_load`;


@batch = ();

$count = 0;
for ($i=$INDEX_START; $i<$#ls; $i++) {

    $file = $ls[$i];
    chomp $file;

    # test to make sure we have a valid project structure
    $test_name = $dir_to_load.'/'.$file.'/'.$suffix.'/memops/Implementation';
    if (-e $test_name ) {
	print "INFO: adding $file to batch\n";
	# then we have a project we can read so add to stack
	push (@batch,$file);
	$count += 1;
    } else {
	print "WARNING: cannot find project directory $test_name\n";
	next;
    }
    
    # run the load if we have reached the batch size or the total size
    if ( ($count%$BATCH_SIZE == 0 && $count != 0) ||  $count == $TOTAL_SIZE || ($i + 1) == $#ls) {

	$bstr = join (" ",@batch);
	print "processing batch\nant load-batch-nmr -Darg1=$dir_to_load -Darg2=$suffix -Darg3=$user -Darg4=$ref_data_dir -Darg5='$bstr'\n";

	$v = `ant load-batch-nmr -Darg1=$dir_to_load -Darg2=$suffix -Darg3=$user -Darg4=$ref_data_dir -Darg5='$bstr'`;
	print LOG $v;

	@batch = ();
    }

    if ( $count == $TOTAL_SIZE ) {
	last;
    }
   
}

