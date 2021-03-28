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
*   Last commit: $Rev: 1231 $ by $Author: glycoslave $ on $Date:: 2009-06-18 #$  
*/

package test.eurocarbdb.sugar.seq;

import java.util.List;
import java.util.ArrayList;

import org.eurocarbdb.util.graph.Vertex;
import org.eurocarbdb.util.graph.Graph;
import org.eurocarbdb.util.graph.Edge;

import org.eurocarbdb.sugar.Sugar;
import org.eurocarbdb.sugar.Residue;
import org.eurocarbdb.sugar.Linkage;
import org.eurocarbdb.sugar.SequenceFormat;
import org.eurocarbdb.sugar.SequenceFormatException;

import test.eurocarbdb.dataaccess.CoreApplicationTest;

/*  SequenceFormatTest  *//******************************************
*
*   Base class for specific {@link SequenceFormat} tests; provides some 
*   helper testing functions.
*
*   @author mjh
*/
/*  -- interactive use commented out for the moment --
<pre>  
Usage:

to test:
java -cp lib org.eurocarbdb.seq.grammar.GlycoctTest

for an interactive shell: 
java -cp 'lib:lib/antlr-2.7.5.jar' org.eurocarbdb.sugar.seq.grammar.GlycoctTest\$Shell

</pre>
*/
public abstract class SequenceFormatTest extends CoreApplicationTest
{
    /** Returns the SequenceFormat to use for the test. */
    protected abstract SequenceFormat getParser();

    
    /** For interactive use. */
    /*
    public static class Shell
    {
        public static void main( String[] args ) throws Exception
        {
            String format = args[0];
            SequenceFormatTest test 
                = (SequenceFormatTest) Class.forName( 
                    SequenceFormatTest.class.getPackage().getName()
                    +   format 
                    +   "Test"
                    ).newInstance(); 
        
            for ( 
                    System.out.print("enter a sugar sequence > " );; 
                    System.out.print("enter another sugar sequence > " ) 
            )
            {
                String seq = new BufferedReader( 
                                new InputStreamReader( 
                                    System.in )).readLine();
                
                try
                {
                    Sugar s = test.getSugar( seq );
                    System.out.println( "sequence is correct" );
                    
                    System.out.println( s );
                }
                catch ( SequenceFormatException e )
                {
                    System.out.println( "Syntax error: " + e.getMessage() );
                    e.printStackTrace();
                }
                catch ( Exception e )
                {
                    System.out.println( "quitting" );
                    System.exit( 1 );
                }

            }         
        }
    }
    */
        
    /**
    *   Parses the given array of sequences testing for syntactic 
    *   correctness - none of these should throw format exceptions.
    */
    public void testParsing( String[] correct_sequences )
    {
        SequenceFormat format = getParser();

        System.out.println( "Testing " 
                          + correct_sequences.length 
                          + " correct sequence(s) for format '"
                          + format.getName() 
                          + "'"
                          );
        /*
        System.out.println( "(For maximum debugging, ensure logging is "
                          + "set to <= DEBUG, and that the 'traceParser' "
                          + "option in the Ant 'build-grammar' task is set "
                          + "to 'true')"
                          );
        */
        System.out.println();
        
        List<Exception> failed = new ArrayList<Exception>();
        
        
        int count_correct = 0;
        int count_failed  = 0;

        long parse_time_msec = 0;
        long cumulative_time_msec = 0;
        int  count_total_chars_parsed = 0;
        
        for ( String seq : correct_sequences ) 
        {
            try 
            { 
                System.out.println();
                System.out.println( "--- parsing correct sequence " 
                                  + ++count_correct 
                                  + " ---");
                System.out.println( seq );
                
                long start_time = System.currentTimeMillis();

                Sugar s = format.getSugar( seq );
                
                parse_time_msec = System.currentTimeMillis() - start_time;
                cumulative_time_msec += parse_time_msec;
                count_total_chars_parsed += seq.length();
                
                System.out.println();
                System.out.println( "the final sugar:" );
                System.out.println( s.getGraph() );

                /*
                for ( Vertex<Linkage,Residue> v : s.getGraph() )
                {
                    List<Edge<Linkage,Residue>> 
                        inclist = v.getIncomingEdges(),
                        outlist = v.getOutgoingEdges();
                        
                    System.out.println( 
                        "incoming edges of " 
                        + v 
                        + " (" 
                        + inclist.size() 
                        + "): " 
                        + inclist  
                    );
                    
                    System.out.println( 
                        "outgoing edges of " 
                        + v 
                        + " (" 
                        + outlist.size() 
                        + "): " 
                        + outlist  
                    );
                }
                */
                System.out.println();                
                
                System.out.println("TEST PASSED: sequence appears correct");                
                System.out.println("parse took " 
                                  + parse_time_msec 
                                  + " msec"
                                  );
            }
            catch ( SequenceFormatException e )
            {
                // this means a correct sequence is actually wrong, or
                //  there is an error in the parser.
                System.out.println();
                System.out.println( "*** TEST FAILED ***" );
                System.out.println( "this sequence should have parsed "
                                  + "correctly, but threw a parse exception "
                                  + "-- check test output!"
                                  );                

                e.printStackTrace();
                
                failed.add( e );
                count_failed++;
            }
        }
        
        //  reporting...  
        System.out.println();
        System.out.println("=== SUMMARY ===");
        System.out.println( count_failed == 0 
                            ? "All tests successful"
                            : count_failed + " test(s) failed"
                            );        
        
        //  some performance metrics...
        System.out.println( String.format( 
                            "total parse time (for the %d correct sequences): %d msec",
                            count_correct, cumulative_time_msec  ) );
        
        System.out.println( String.format( 
                            "avg parse time / sequence: %.1f msec", 
                            (double) cumulative_time_msec / count_correct  ) );
        
        System.out.println( String.format( 
                            "avg parse time / sequence char: %.3f msec", 
                            (double) cumulative_time_msec / count_total_chars_parsed  ) );

        if ( failed.size() > 0 )
        {
            System.out.println(); 
            System.out.println( "The tests that failed were:");

            for ( Exception e : failed ) 
            {
                System.out.println(); 
                e.printStackTrace();
            }
            
            throw new RuntimeException( 
                failed.size() 
                + " of "
                + correct_sequences.length 
                + " sequence(s) failed to parse correctly -- check test output"
            );
        }

        return;
    }
    
    
    /**
    *   Parses the given array of sequences testing for syntactic 
    *   errors - all of the given sequences are expected to throw 
    *   {@link SequenceFormatException}s.
    */
    public void testParsingExceptions( String[] incorrect_sequences )
    {
        //  INCORRECT SEQUENCES
        //    
        //  iterate through the collection of sequences that have deliberate 
        //  syntax errors - all of these *should* throw SequenceFormatExceptions. 
        //
        SequenceFormat format = getParser();

        System.out.println( "Testing " 
                          + incorrect_sequences.length 
                          + " incorrect sequence(s) for format '"
                          + format.getName() 
                          + "'"
                          );
        System.out.println();
        
        int count_incorrect = 0;
        int count_failed  = 0;
        List<Exception> failed = new ArrayList<Exception>();
        
        for ( String seq : incorrect_sequences ) 
        {
            try 
            { 
                System.out.println();
                System.out.println( "--- parsing incorrect sequence " 
                                  + ++count_incorrect
                                  + " ---");
                System.out.println( seq );
                
                Sugar s = format.getSugar( seq );
                
                //  this test fails if it gets to this point since we were
                //  expectingly sequence format exceptions to have been thrown.
                count_failed++; 
                throw new RuntimeException(
                        "*** TEST FAILED ***\n"
                        + seq
                        + "\n"
                        + "the sequence above was determined to be correct, "
                        + "when it should have thrown a sequence format error "
                        + "-- check test output!" );
            }
            catch ( SequenceFormatException e )
            {
                System.out.println(); 
                System.out.println( "TEST PASSED: Sequence correctly judged as "
                                  + "incorrect, exception was:" );
                e.printStackTrace();
            }
            catch ( Exception e )
            {
                System.out.println( 
                    "ERROR!!! Expected a SequenceFormatException, but got: " 
                    + e
                );
                
                throw new RuntimeException( e );
                //failed.add( e );
            }

        }
        
        if ( failed.size() > 0 )
        {
            System.out.println(); 
            System.out.println( "The tests that failed were:");
            
            for ( Exception e : failed ) 
            {
                System.out.println(); 
                System.out.println( e ); 
                e.printStackTrace();
            }
            
            throw new RuntimeException( 
                failed.size() 
                + " of "
                + incorrect_sequences.length 
                + " sequence(s) parsed correctly when they should have failed"
            );
        }
        
        return;
    }
 
}


