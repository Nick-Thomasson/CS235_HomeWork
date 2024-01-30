// PROGRAM: Variable arithmetic practice

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{

  // Declaring variables
  float num1, num2;

  // Ask the user to enter num1
  cout << "Please enter num1: "; // Display prompt
  cin >> num1;                   // Get input from keyboard

  // Ask the user to enter num2
  cout << "Please enter num2: "; // Display prompt
  cin >> num2;                   // Get input from keyboard

  // Declaring more variables
  float sum, difference, product, quotient;

  // TODO: Assign the variable `sum` the value of `num1` plus `num2`.
	sum = num1 + num2;

  // TODO: Assign the variable `difference` the value of `num1` minus `num2`.
	difference = num1 - num2;

  // TODO: Assign the variable `product` the value of `num1` times `num2`.
	product = num1 * num2;

  // TODO: Assign the variable `quotient` the value of `num1` divided by `num2`.
	quotient = num1 / num2;

  cout << endl; // Adding more space
  cout << "ARITHMETIC:" << endl;
  cout << "SUM:        " << num1 << " + " << num2 << " = " << sum << endl;
  cout << "DIFFERENCE: " << num1 << " - " << num2 << " = " << difference << endl;
  cout << "PRODUCT:    " << num1 << " * " << num2 << " = " << product << endl;
  cout << "QUOTIENT:   " << num1 << " / " << num2 << " = " << quotient << endl;

  // Return 0 means quit program with no errors, in this context.
  return 0;
}
