// PROGRAM: Practice if statements

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  cout << fixed << setprecision( 2 ); // Format floats like USD

  // TODO: Create three float variables: `balance`, `withdraw`, and `remaining`.
  

  // TODO: Use `cout` to prompt the user to enter information and `cin` to get information from the keyboard.
  // Get user's input for `balance` (their current bank balance) and `withdraw` (how much to withdraw from bank).


  // TODO: Calculate the `remaining` balance after the withdraw with `remaining = balance - withdraw;`


  // TODO: Display "Remaining balance: $" and the `remaining` variable.


  // TODO: If `remaining` is less than 0, then also display "(OVERDRAWN)".


  // Return 0 means quit program with no errors, in this context.
  return 0;
}
