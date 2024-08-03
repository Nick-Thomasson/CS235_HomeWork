// PROGRAM: Validate user input
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

/**
   @param   min_value    The minimum valid value
   @param   max_value    The maximum valid value
   @return  int          The user's input, validated to be between min_value and max_value
 */
int GetInput( int min_value, int max_value )
{
  // TODO: Implement this function
  int choice;
  cout << "Enter a number between " << min_value << " and " << max_value << ": ";
  cin >> choice;

  while ( choice < min_value || choice > max_value )
    {
      cout << endl << "** INVALID CHOICE! Try again: ";
      cin >> choice;
    }

  return choice;
}


// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  int secret_number = 5;

  cout << "I'm thinking of a secret number between 1 and 10." << endl << endl;
  cout << "What is your guess?" << endl;
  int guess = GetInput( 1, 10 );

  cout << endl << "My number was " << secret_number << "!" << endl;
  cout << "How did you do?" << endl;

  cout << endl << "GOODBYE" << endl;
  // Return 0 means quit program with no errors, in this context.
  return 0;
}
