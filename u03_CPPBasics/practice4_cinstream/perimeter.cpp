// PROGRAM: Console input and variable arithmetic practice

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // TODO: Declare a float variable for `width`.
	float width;

  // TODO: Declare a float variable for `length`.
	float length;

  // TODO: Use `cout` to display a prompt - tell the user - "Enter a width: "
	cout << "Enter a width." << endl;

  // TODO: Use `cin` to get keyboard input, store in `width` variable.
	cin >> width;

  // TODO: Use `cout` to display a prompt - tell the user - "Enter a length: "
	cout << "Enter a length." << endl;

  // TODO: Use `cin` to get keyboard input, store in `length` variable.
	cin >> length;

  // TODO: Declare a float variable `perimeter`, assign it the result of `2 * width + 2 * length`.
	float perimeter;
	perimeter = 2 * width + 2 * length;

  // TODO: Declare a float variable `area`, assign it the result of `width * length`.
	float area;
	area = width * length;

  // TODO: Use `cout` to display "Perimeter:", and then the value of the `perimeter` variable.
	cout << "Perimeter: " << perimeter << endl;

  // TODO: Use `cout` to display "Area:", and then the value of the `area` variable.
	cout << "Area: " << area << endl;


  // Return 0 means quit program with no errors, in this context.
  return 0;
}
