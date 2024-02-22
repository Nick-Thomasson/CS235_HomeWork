// PROGRAM: Practice counting with for loops

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  int low, high;

  cout << "Enter a low number: ";
  cin >> low;

  cout << "Enter a high number: ";
  cin >> high;

  // This for loop goes from `low` to `high`, using `i` as a counter variable.
  // Starting: `i` is initialized to the `low` value.
  // Condition: Loops while `i <= high`.
  // Update: 1 is added to `i` each time throuhg the loop.
  for ( int i = low; i <= high; i++ )
    {
      cout << i << " ";
    }

  // TODO: Create a for loop using a counter variable `i`.
  // Starting: `i` at `high`'s value.'
  // Condition: Loop while `i` is greater than or equal to `low`.
  // Update: Subtract 2 from `i` each time.
  // Within the loop display the value of `i`, with a space afterwards.


  // TODO: Create a for loop using a counter variable `i`.
  // Starting: `i` at `low`'s value.'
  // Condition: Loop while `i` is less than or equal to `high`.
  // Update: Multiply `i` by 2 each time.
  // Within the loop display the value of `i`, with a space afterwards.



  cout << endl << "GOODBYE" << endl;

  // Return 0 means quit program with no errors, in this context.
  return 0;
}
