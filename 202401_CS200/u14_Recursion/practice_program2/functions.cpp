#include <iostream>         // Use input and output streams
#include <string>           // Using string (for text)
#include <iomanip>          // Special library for formatting text (used in my tests)
using namespace std;        // Use the STandarD library

#include "functions.h"    // Function headers are stored here

// USER-DEFINED FUNCTIONS - You will edit these!

/***********************************************/
/** Function Set 2 ****************************/

/**
Factorial functions
@param      int     n       The value of n
@return     int             The value of n!

Calculate n! by multiplying n * (n-1) * (n-2) * ... * 3 * 2 * 1.
*/
//! Calculates n!
int Factorial_Iter( int n )
{
    return -1; // Temporary
}

/**
Factorial functions
@param      int     n       The value of n
@return     int             The value of n!

Calculate n! by multiplying n * (n-1) * (n-2) * ... * 3 * 2 * 1.
*/
//! Calculates n!
int Factorial_Rec( int n )
{
    // Terminating case:
    // n is 0.

    // Recursive case:
    // n is greater than 0.

    return -1; // Temporary
}

/** Program code **/
void Program()
{
  cout << "***************************************" << endl;
  cout << "**             RECURSION             **" << endl;
  cout << "***************************************" << endl;

  int n;
  cout << "Enter a value for n: ";
  cin >> n;
  cout << endl;

  cout << "Factorial, Iterative:" << endl;
  cout << n << "! = " << Factorial_Iter( n ) << endl;

  cout << endl << endl;
  cout << "Factorial, Recursive:" << endl;
  cout << n << "! = " << Factorial_Rec( n ) << endl;


  cout << endl << endl;
}

// Tester functions (DO NOT MODIFY) ----------------------------------------------------
void RunTests()
{
    Test_Set2();
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

void Test_Set2()
{
    // int Factorial_Iter( int n );
    cout << endl << "---------------------------------------------------" << endl;
    cout << "Test - Factorial" << endl;
    int expectedOut, actualOut;

    cout << endl << left << setw( headerWidth ) << "TEST 1: Factorial_Iter: Find 0!" << setw( pfWidth );
    expectedOut = 1;
    actualOut = Factorial_Iter( 0 );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 2: Factorial_Iter: Find 5!" << setw( pfWidth );
    expectedOut = 120;
    actualOut = Factorial_Iter( 5 );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 3: Factorial_Rec: Find 0!" << setw( pfWidth );
    expectedOut = 1;
    actualOut = Factorial_Rec( 0 );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }

    cout << endl << left << setw( headerWidth ) << "TEST 4: Factorial_Rec: Find 5!" << setw( pfWidth );
    expectedOut = 120;
    actualOut = Factorial_Rec( 5 );

    if ( actualOut == expectedOut )     { cout << " * PASS" << endl; }
    else                                { cout << " x FAIL\n\t EXPECTED: \"" << expectedOut << "\" \n\t ACTUAL:   \"" << actualOut << "\"" << endl; }
}
