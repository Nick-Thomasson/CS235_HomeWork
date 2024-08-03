#include "Functions.h"

#include <string>
#include <iostream>
using namespace std;

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U07-P1-TEST; STUDENT: " << YOURNAME << endl;

  int i = 0;

  // Test unsigned int GetStringLength( string text ) --------------------------------------------------------------------------------------------
  {
    string input = "cow";
    unsigned int expectedOut = 3;
    unsigned int actualOut = GetStringLength( input );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetStringLength(\"" << input << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetStringLength(\"" << input <<  "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input = "one two";
    unsigned int expectedOut = 7;
    unsigned int actualOut = GetStringLength( input );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetStringLength(\"" << input << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetStringLength(\"" << input <<  "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test char GetLetter( string text, unsigned int position ) -----------------------------------------------------------------------------------
  {
    string input1 = "cheeseburger";
    int    input2 = 4;
    char   expectedOut = 's';
    char   actualOut = GetLetter( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetLetter(\"" << input1 << "\", " << input2 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetLetter(\"" << input1 <<  "\", " << input2 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "cats";
    int    input2 = 1;
    char   expectedOut = 'a';
    char   actualOut = GetLetter( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetLetter(\"" << input1 << "\", " << input2 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetLetter(\"" << input1 <<  "\", " << input2 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test int GetSubstringPosition( string haystack, string needle ) -----------------------------------------------------------------------------

  {
    string input1 = "the quick brown fox";
    string input2 = "quick";
    int expectedOut = 4;
    int actualOut = GetSubstringPosition( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetSubstringPosition(\""  << input1 <<  "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetSubstringPosition(\""  << input1 <<  "\", \"" << input2 <<  "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "jumps over the lazy dog";
    string input2 = "quick";
    int expectedOut = -1;
    int actualOut = GetSubstringPosition( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", GetSubstringPosition(\""  << input1 <<  "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", GetSubstringPosition(\""  << input1 <<  "\", \"" << input2 <<  "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test string CombineStrings( string str1, string str2 ) --------------------------------------------------------------------------------------

  {
    string input1 = "cat";
    string input2 = "dog";
    string expectedOut = "catdog";
    string actualOut = CombineStrings( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CombineStrings(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CombineStrings(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "cheese";
    string input2 = "burger";
    string expectedOut = "cheeseburger";
    string actualOut = CombineStrings( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CombineStrings(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CombineStrings(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test int CompareStrings( string str1, string str2 ) -----------------------------------------------------------------------------------------

  {
    string input1 = "cheese";
    string input2 = "burger";
    int expectedOut = 1;
    int actualOut = CompareStrings( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CompareStrings(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CompareStrings(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "aardvark";
    string input2 = "burger";
    int expectedOut = -1;
    int actualOut = CompareStrings( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CompareStrings(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CompareStrings(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "burger";
    string input2 = "burger";
    int expectedOut = 0;
    int actualOut = CompareStrings( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CompareStrings(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CompareStrings(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test string StringRelations( string str1, string str2 ) -------------------------------------------------------------------------------------

  {
    string input1 = "cheese";
    string input2 = "burger";
    string expectedOut = "cheese > burger";
    string actualOut = StringRelations( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", StringRelations(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", StringRelations(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "aardvark";
    string input2 = "burger";
    string expectedOut = "aardvark < burger";
    string actualOut = StringRelations( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", StringRelations(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", StringRelations(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "burger";
    string input2 = "burger";
    string expectedOut = "burger == burger";
    string actualOut = StringRelations( input1, input2 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", StringRelations(\"" << input1 << "\", \"" << input2 << "\") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", StringRelations(\"" << input1 <<  "\", \"" << input2 << "\")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  // Test string InsertString( string original, string insert_me, int position ) -----------------------------------------------------------------

  {
    string input1 = "cats";
    string input2 = "arac";
    int    input3 = 3;
    string expectedOut = "cataracs";
    string actualOut = InsertString( input1, input2, input3 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CombineStrings(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CombineStrings(\"" << input1 <<  "\", \"" << input2 << "\", " << input3 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
    } i++;

  {
    string input1 = "four cats";
    string input2 = "teen";
    int    input3 = 4;
    string expectedOut = "fourteen cats";
    string actualOut = InsertString( input1, input2, input3 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", CombineStrings(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", CombineStrings(\"" << input1 <<  "\", \"" << input2 << "\", " << input3 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;


  // Test string EraseFromString( string original, int position, int length ) --------------------------------------------------------------------

  {
    string input1 = "cheeseburger";
    int    input2 = 6;
    int    input3 = 6;
    string expectedOut = "cheese";
    string actualOut = EraseFromString( input1, input2, input3 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", EraseFromString(\"" << input1 << "\", " << input2 << ", " << input3 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", EraseFromString(\"" << input1 << "\", " << input2 << ", " << input3 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
    } i++;

  {
    string input1 = "superman";
    int    input2 = 0;
    int    input3 = 5;
    string expectedOut = "man";
    string actualOut = EraseFromString( input1, input2, input3 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", EraseFromString(\"" << input1 << "\", " << input2 << ", " << input3 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", EraseFromString(\"" << input1 << "\", " << input2 << ", " << input3 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;


  // Test string ReplaceInString( string original, string insert_me, int position, int length ) --------------------------------------------------

  {
    string input1 = "hamburger";
    string input2 = "cheese";
    int    input3 = 0;
    int    input4 = 3;
    string expectedOut = "cheeseburger";
    string actualOut = ReplaceInString( input1, input2, input3, input4 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", ReplaceInString(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ", " << input4 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", ReplaceInString(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ", " << input4 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;

  {
    string input1 = "crabby patty";
    string input2 = " rangoon";
    int    input3 = 4;
    int    input4 = 8;
    string expectedOut = "crab rangoon";
    string actualOut = ReplaceInString( input1, input2, input3, input4 );

    if ( actualOut == expectedOut ) { cout << GRN << "[PASS] TEST " << i+1 << ", ReplaceInString(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ", " << input4 << ") = " << actualOut << endl; }
    else { cout << RED << "[FAIL] TEST " << i+1 << ", ReplaceInString(\"" << input1 << "\", \"" << input2 << "\", " << input3 << ", " << input4 << ")" << endl << "   EXPECTED OUTPUT: [" << expectedOut << "]" << endl << "   ACTUAL OUTPUT:   [" << actualOut << "]" << endl; }
  } i++;



  cout << CLR;
}
