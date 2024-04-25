#include <iostream>         // Use input and output streams
#include <string>           // Using string (for text)
#include <iomanip>          // Special library for formatting text (used in my tests)
using namespace std;        // Use the STandarD library

#include "functions.h"    // Function headers are stored here

// USER-DEFINED FUNCTIONS - You will edit these!

/***********************************************/
/** Function Set 4 ****************************/

//! Helper function to figure out if letter is upper-case
bool IsUppercase( char letter )
{
    return ( letter != ' ' && toupper( letter ) == letter );
}

/**
@param  string  text    The text to look for capital letters in
@return char            The first upper-case character found, or ' ' if none found.

Iterate through each char in the string [text] and return the char if it is an upper-case letter.
If no upper-case letters are found, return a space character: ' '
*/
//! Returns the first uppercase letter found, or ' ' if none are found.
char GetFirstUppercase_Iter( string text )
{
    for (size_t i = 0; i < text.size(); i++) {
        if (IsUppercase(text[i]))
        {
            return text[i];
        }
    } 
    return  ' ';
}

/**
@param  string  text    The text to look for capital letters in
@param  int     pos     The current position being investigated
@return char            The first upper-case character found, or ' ' if none found.

Recurse through each char in the string [text] and return the char if it is an upper-case letter.
If no upper-case letters are found, return a space character: ' '
*/
//! Returns the first uppercase letter found, or ' ' if none are found.
char GetFirstUppercase_Rec( string text, unsigned int pos /* = 0 */ )
{
    // Terminating case:
    // No more letters to look at, OR
    // First uppercase letter found.
    if (pos >= text.size()) {
        return ' ';
    }
    if (IsUppercase(text[pos])) {
        return text[pos];
    }

    // Recursive case:
    // Still more letters to investigate
    return GetFirstUppercase_Rec(text, pos + 1);

    return 'x'; // Temporary
}


/** Program code **/
void Program()
{
  cout << "***************************************" << endl;
  cout << "**             RECURSION             **" << endl;
  cout << "***************************************" << endl;

  string text[] = { "how are YOU?", "What?", "where am I?", "no caps" };

  cout << "GetFirstUppercase, Iterative:" << endl;
  for ( int i = 0; i < 4; i++ )
    {
      cout << " * First upper-case in " << text[i] << ": '" << GetFirstUppercase_Iter( text[i] ) << "'" << endl;
    }

  cout << endl << endl;
  cout << "GetConsonants, Recursive:" << endl;
  for ( int i = 0; i < 4; i++ )
    {
      cout << " * First upper-case in " << text[i] << ": '" << GetFirstUppercase_Rec( text[i], 0 ) << "'" << endl;
    }

  cout << endl << endl;
}

// Tester functions (DO NOT MODIFY) ----------------------------------------------------
void RunTests()
{
    Test_Set4();
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
}

void Test_Set4()
{
    //char GetFirstUppercase_Iter( string text )
    cout << endl << "---------------------------------------------------" << endl;
    cout << "Test - GetFirstUppercase" << endl;
    char expectedOut, actualOut;

    cout << endl << left << setw( headerWidth ) << "TEST 1: GetFirstUppercase_Iter: Find first consonant in \"HELLO\"" << setw( pfWidth );
    expectedOut = 'H';
    actualOut = GetFirstUppercase_Iter( "HELLO" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 2: GetFirstUppercase_Iter: Find first consonant in \"heLLO\"" << setw( pfWidth );
    expectedOut = 'L';
    actualOut = GetFirstUppercase_Iter( "heLLO" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 3: GetFirstUppercase_Iter: Find first consonant in \"hello\"" << setw( pfWidth );
    expectedOut = ' ';
    actualOut = GetFirstUppercase_Iter( "hello" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }



    cout << endl << left << setw( headerWidth ) << "TEST 4: GetFirstUppercase_Rec: Find first consonant in \"HELLO\"" << setw( pfWidth );
    expectedOut = 'H';
    actualOut = GetFirstUppercase_Rec( "HELLO" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 5: GetFirstUppercase_Rec: Find first consonant in \"heLLO\"" << setw( pfWidth );
    expectedOut = 'L';
    actualOut = GetFirstUppercase_Rec( "heLLO" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }


    cout << endl << left << setw( headerWidth ) << "TEST 6: GetFirstUppercase_Rec: Find first consonant in \"hello\"" << setw( pfWidth );
    expectedOut = ' ';
    actualOut = GetFirstUppercase_Rec( "hello" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

}
