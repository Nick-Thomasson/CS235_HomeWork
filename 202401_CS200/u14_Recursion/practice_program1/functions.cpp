#include <iostream>         // Use input and output streams
#include <string>           // Using string (for text)
#include <iomanip>          // Special library for formatting text (used in my tests)
using namespace std;        // Use the STandarD library

#include "functions.h"    // Function headers are stored here

// USER-DEFINED FUNCTIONS - You will edit these!

/***********************************************/
/** Function Set 1 ****************************/

/**
@param      char        start       The starting char (inclusive) to begin at
@param      char        end         The end char (inclusive) to run until
@return     string                  A string containing all the letters from start to end.
*/
//! Build a string that contains letters from start to end.
string Alphabet_Iter( char start, char end )
{
    return "NOT IMPLEMENTED"; // Temporary
}

/**
@param      char        start       The starting char (inclusive) to begin at
@param      char        end         The end char (inclusive) to run until
@return     string                  A string containing all the letters from start to end.
*/
//! Build a string that contains letters from start to end.
string Alphabet_Rec( char start, char end, string text /* = "" */ )
{
    // Terminating Case:
    // Out of letters to go over (in other words, start > end).

    // Recursive case:
    // Add the next letter, then call return and recurse into this function using the next letter.

    return "NOT IMPLEMENTED"; // Temporary
}

/** Program code **/
void Program()
{
  cout << "***************************************" << endl;
  cout << "**             RECURSION             **" << endl;
  cout << "***************************************" << endl;
  bool quit = false;
  while ( quit == false )
    {

      char start;
      char end;

      cout << "Enter starting letter and ending letter: ";
      cin >> start >> end;
      cout << endl;

      cout << "Alphabet, Iterative:" << endl;
      string result = Alphabet_Iter( start, end );
      cout << result << endl;

      cout << endl << endl;
      cout << "Alphabet, Recursive:" << endl;
      result = Alphabet_Rec( start, end, "" );
      cout << result << endl;

      cout << endl << endl;
    }
}

// Tester functions (DO NOT MODIFY) ----------------------------------------------------
void RunTests()
{
    Test_Set1();
}

string B2S( bool val )
{
    return ( val ) ? "true" : "false";
}

void ClearScreen()
{
    #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    system( "cls" );
    #else
    system( "clear" );
    #endif
}

void Pause()
{
    cout << "Press enter to continue..." << endl;
    cin.ignore();
    cin.get();
    cin.get();
}

void Test_Set1()
{
    //string Alphabet_Iter( char start, char end )
    cout << endl << "---------------------------------------------------" << endl;
    cout << "Test - Alphabet" << endl;
    string expectedOut, actualOut;

    cout << endl << left << setw( headerWidth ) << "TEST 1: Alphabet_Iter: Generate 'a' thru 'g'" << setw( pfWidth );
    expectedOut = "abcdefg";
    actualOut = Alphabet_Iter( 'a', 'g' );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 2: Alphabet_Iter: Generate 'l' thru 'p'" << setw( pfWidth );
    expectedOut = "lmnop";
    actualOut = Alphabet_Iter( 'l', 'p' );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 3: Alphabet_Rec: Generate 'a' thru 'g'" << setw( pfWidth );
    expectedOut = "abcdefg";
    actualOut = Alphabet_Rec( 'a', 'g' );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 4: Alphabet_Rec: Generate 'l' thru 'p'" << setw( pfWidth );
    expectedOut = "lmnop";
    actualOut = Alphabet_Rec( 'l', 'p' );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

}
