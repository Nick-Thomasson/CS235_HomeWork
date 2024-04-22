#include <iostream>         // Use input and output streams
#include <string>           // Using string (for text)
#include <iomanip>          // Special library for formatting text (used in my tests)
using namespace std;        // Use the STandarD library

#include "functions.h"    // Function headers are stored here

// USER-DEFINED FUNCTIONS - You will edit these!

/***********************************************/
/** Function Set 3 ****************************/

//! Helper function to find whether something is a consonant or not.
bool IsConsonant( char letter )
{
    if (    tolower( letter ) == 'a' ||
            tolower( letter ) == 'e' ||
            tolower( letter ) == 'i' ||
            tolower( letter ) == 'o' ||
            tolower( letter ) == 'u'
        )
    {
        return false;
    }

    return true;
}

/**
CountConsonants functions
@param  string  text        The text to count the consonants within
@return int                 The amount of consonants found

Iterate through each char in the string [text] and count up 1 if that letter is a consonant.
Return the amount of consonants found.
*/
//! Count the amount of consonants in a string and return the count.
int CountConsonants_Iter( string text )
{
    return -1; // Temporary
}

/**
CountConsonants functions
@param  string  text        The text to count the consonants of
@param  int     pos         The current position being investigated
@return int                 The amount of consonants found

Recurse through each char in the string [text] and count up 1 if that letter is a consonant.
Return the amount of consonants found.
*/
//! Count the amount of consonants in a string and return the count.
int CountConsonants_Rec( string text, unsigned int pos /* = 0 */ )
{
    // Terminating case:
    // No more letters to look at.

    // Recursive case:
    // Still more letters to inspect.

    return -1; // Temporary
}

/** Program code **/
void Program()
{
  cout << "***************************************" << endl;
  cout << "**             RECURSION             **" << endl;
  cout << "***************************************" << endl;

  string text;
  cout << "Enter a word (no spaces): ";
  cin >> text;
  cout << endl;

  cout << "GetConsonants, Iterative:" << endl;
  cout << " * Consonants in " << text << ": " << CountConsonants_Iter( text ) << endl;

  cout << endl << endl;
  cout << "GetConsonants, Recursive:" << endl;
  cout << " * Consonants in " << text << ": " << CountConsonants_Rec( text ) << endl;

  cout << endl << endl;
}

// Tester functions (DO NOT MODIFY) ----------------------------------------------------
void RunTests()
{
    Test_Set3();
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

void Test_Set3()
{
    // int CountConsonants_Iter( string text )
    cout << endl << "---------------------------------------------------" << endl;
    cout << "Test - CountConsonants" << endl;
    int expectedOut, actualOut;

    cout << endl << left << setw( headerWidth ) << "TEST 1: CountConsonants_Iter: Count consonants in \"aeiou\"" << setw( pfWidth );
    expectedOut = 0;
    actualOut = CountConsonants_Iter( "aeiou" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 2: CountConsonants_Iter: Count consonants in \"jkl\"" << setw( pfWidth );
    expectedOut = 3;
    actualOut = CountConsonants_Iter( "jkl" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 3: CountConsonants_Iter: Count consonants in \"hellothere\"" << setw( pfWidth );
    expectedOut = 6;
    actualOut = CountConsonants_Iter( "hellothere" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }



    cout << endl << left << setw( headerWidth ) << "TEST 4: CountConsonants_Rec: Count consonants in \"aeiou\"" << setw( pfWidth );
    expectedOut = 0;
    actualOut = CountConsonants_Rec( "aeiou" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 5: CountConsonants_Rec: Count consonants in \"jkl\"" << setw( pfWidth );
    expectedOut = 3;
    actualOut = CountConsonants_Rec( "jkl" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 6: CountConsonants_Rec: Count consonants in \"hellothere\"" << setw( pfWidth );
    expectedOut = 6;
    actualOut = CountConsonants_Rec( "hellothere" );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }
}

