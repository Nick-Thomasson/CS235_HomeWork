// PROGRAM: Practice counting with for loops
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  int low_number;
  int high_number;
  int step;
  int counter;

  cout << "Enter a low number: ";
  cin >> low_number;

  cout << "Enter a high number: ";
  cin >> high_number;
  cout << endl;

  cout << "Enter step: ";
  cin >> step;

  cout << endl << "LOW TO HIGH" << endl;
  // TODO: Implement low to high loop
  for ( int counter = low_number; counter <= high_number; counter += step )
    {
      cout << counter << " ";
    }

  cout << endl;

  cout << endl << "HIGH TO LOW" << endl;
  // TODO: Implement high to low loop
  for ( int counter = high_number; counter >= low_number; counter -= step )
    {
      cout << counter << " ";
    }
  cout << endl;

  // Return 0 means quit program with no errors, in this context.
  cout << endl << "GOODBYE" << endl;
  return 0;
}
