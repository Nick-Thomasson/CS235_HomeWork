// PROGRAM: Practice if/else statements

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // TODO: Create an integer `number` variable. Ask the user to enter a value for the number.
  int number;
  cout << "Please enter the value for this number: " << endl;
  cin >> number;

  // TODO: If number is greater than 0, then display "Positive number". Otherwise, display "Negative or zero".
if (number > 0){
	cout << "Positive Number!" << endl;}
	else {
		cout << "Not Postitive!" << endl;}


  // Return 0 means quit program with no errors, in this context.
  return 0;
}
