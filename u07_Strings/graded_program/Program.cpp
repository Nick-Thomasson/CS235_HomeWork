//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "Functions.h"
#include "Colors.h"

#include <iostream>
#include <iomanip>
using namespace std;

// - PROGRAM STARTER --------------------------------------------------------//
void FallbackProgram();
int main( int argCount, char* args[] )
{
  cout << fixed << setprecision( 2 );
  if ( argCount == 2 && string( args[1] ) == "test" )
  {
    // Run tests
    Tester();
  }
  else if ( argCount == 1 )
  {
    FallbackProgram();
  }
  else
    {
      // Run program
      string action = string( args[1] );

      if      ( action == "length" )  { cout << "RESULT: " << GetStringLength( string( args[2] ) ) << endl; }
      else if ( action == "letter" )  { cout << "RESULT: " << GetLetter( string( args[2] ), stoi( args[3] )) << endl; }
      else if ( action == "find" )    { cout << "RESULT: " << GetSubstringPosition( string( args[2] ), string( args[3] ) ) << endl; }
      else if ( action == "combine" ) { cout << "RESULT: " << CombineStrings( string( args[2] ), string( args[2] ) ) << endl; }
      else if ( action == "compare" ) { cout << "RESULT: " << CompareStrings( string( args[2] ), string( args[2] ) ) << endl; }
      else if ( action == "relate" )  { cout << "RESULT: " << StringRelations( string( args[2] ), string( args[2] ) ) << endl; }
      else if ( action == "insert" )  { cout << "RESULT: " << InsertString( string( args[2] ), string( args[3] ), stoi( args[4] ) ) << endl; }
      else if ( action == "erase" )   { cout << "RESULT: " << EraseFromString( string( args[2] ), stoi( args[3] ), stoi( args[3] ) ) << endl; }
      else if ( action == "replace" ) { cout << "RESULT: " << ReplaceInString( string( args[2] ), string( args[3] ), stoi( args[4] ), stoi( args[5] ) ) << endl; }
      else { cout << "UNKNOWN COMMAND!" << endl; }
    }

  return 0;
}

void FallbackProgram()
{
  bool running = true;
  while ( running )
    {
      string title = "- STRING PROGRAM -";
      cout << GREEN_ON_BLACK << title << string( 80-title.size(), '-' ) << CLEAR << endl;

      cout << "OPTIONS:" << endl << endl;
      cout << "0. RUN AUTOMATED TESTS" << endl << endl;
      cout << "1. String length" << endl;
      cout << "2. Get letter" << endl;
      cout << "3. Find substring" << endl;
      cout << "4. Combine strings" << endl;
      cout << "5. Compare strings" << endl;
      cout << "6. String relations" << endl;
      cout << "7. Insert string" << endl;
      cout << "8. Erase string" << endl;
      cout << "9. Replace string" << endl;
      cout << endl;
      cout << ">> ";
      int choice;
      cin >> choice;

      if ( choice == 0 ) { Tester();  running = false; }
      else if ( choice == 1 )
        {
          string text;
          cout << "Enter a string: ";
          cin.ignore();
          getline( cin, text );
          cout << "The length of your string is: " << GetStringLength( text ) << " characters" << endl;
        }
      else if ( choice == 2 )
        {
          string text;
          int position;
          cout << "Enter a string: ";
          cin.ignore();
          getline( cin, text );
          cout << "Enter a position #: ";
          cin >> position;
          cout << "The letter at position " << position << " is: " << GetLetter( text, position ) << endl;
        }
      else if ( choice == 3 )
        {
          string text1, text2;
          cout << "Enter the full string: ";
          cin.ignore();
          getline( cin, text1 );
          cout << "Enter the substring to search for: ";
          getline( cin, text2 );
          int result = GetSubstringPosition( text1, text2 );
          if ( result == -1 )
            {
              cout << "The substring was not found (returned " << result << ")" << endl;
            }
          else
            {
              cout << "The substring was found at position " << result << endl;
            }
        }
      else if ( choice == 4 )
        {
          cin.ignore();
          string text1, text2;
          cout << "Enter a first string: ";
          getline( cin, text1 );
          cout << "Enter a second string: ";
          getline( cin, text2 );
          cout << "The strings combined is: \"" << CombineStrings( text1, text2 ) << "\"" << endl;
        }
      else if ( choice == 5 )
        {
          cin.ignore();
          string text1, text2;
          cout << "Enter a first string: ";
          getline( cin, text1 );
          cout << "Enter a second string: ";
          getline( cin, text2 );
          cout << "The comparison between string 1 and string 2 is: " << CompareStrings( text1, text2 ) << endl;
        }
      else if ( choice == 6 )
        {
          cin.ignore();
          string text1, text2;
          cout << "Enter a first string: ";
          getline( cin, text1 );
          cout << "Enter a second string: ";
          getline( cin, text2 );
          cout << "The relation between string 1 and string 2 is: " << StringRelations( text1, text2 ) << endl;
        }
      else if ( choice == 7 )
        {
          cin.ignore();
          string text1, text2;
          int position;
          cout << "Enter first string: ";
          getline( cin, text1 );
          cout << "Enter string to insert: ";
          getline( cin, text2 );
          cout << "Enter position where to insert it: ";
          cin >> position;
          cout << "The string is now: \"" << InsertString( text1, text2, position ) << "\"" << endl;
        }
      else if ( choice == 8 )
        {
          cin.ignore();
          string text;
          int position;
          int length;
          cout << "Enter string: ";
          getline( cin, text );
          cout << "Enter position to begin erasing from: ";
          cin >> position;
          cout << "Enter length of characters to remove: ";
          cin >> length;
          cout << "The string is now: \"" << EraseFromString( text, position, length ) << "\"" << endl;
        }
      else if ( choice == 9 )
        {
          cin.ignore();
          string text1, text2;
          int position;
          int length;
          cout << "Enter a first string: ";
          getline( cin, text1 );
          cout << "Enter a second string: ";
          getline( cin, text2 );
          cout << "Enter starting position of string 1 to replace: ";
          cin >> position;
          cout << "Enter length of characters to remove: ";
          cin >> length;
          cout << "The string is now: \"" << ReplaceInString( text1, text2, position, length ) << "\"" << endl;
        }


      cout << endl << RED_ON_BLACK << string( 80, '-' ) << CLEAR << endl << endl;
    }
  string bye = "- GOODBYE -";
  cout << endl << BLACK_ON_RED << bye << string( 80-bye.size(), '-' ) << CLEAR << endl;
}

