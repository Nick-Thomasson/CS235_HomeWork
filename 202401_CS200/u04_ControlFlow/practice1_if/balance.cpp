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
  float balance;
  float withdraw;
  float remaining;

  // TODO: Use `cout` to prompt the user to enter information and `cin` to get information from the keyboard.
  // Get user's input for `balance` (their current bank balance) and `withdraw` (how much to withdraw from bank).
  cout << "Please enter your current bank balance: " << endl;
  cin >> balance;
  cout << "Please enter the amount you'd like to withdraw:" << endl;
  cin >> withdraw;
 

  // TODO: Calculate the `remaining` balance after the withdraw with `remaining = balance - withdraw;`
  remaining = balance - withdraw;


  // TODO: Display "Remaining balance: $" and the `remaining` variable.
	cout << "Remaining balance : $" << remaining << endl;

  // TODO: If `remaining` is less than 0, then also display "(OVERDRAWN)".
	if (remaining < 0){
		cout << "OVERDRAWN!" << endl;}


  // Return 0 means quit program with no errors, in this context.
  return 0;
}
