// PROGRAM: Practice using logic operators

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
// TODO: Create two boolean variables, `has_paper` and `printer_on`.
bool has_paper;
bool printer_on;

// TODO: Display the message "Is the printer on? (0) off, (1) on: ";
cout << "Is the printer on? (0) off, (1) on: " << endl;

// TODO: Use `cin` to get keyboard input and store it in `printer_on`.
cin >> printer_on;

// TODO: Display the message "Does the printer have paper? (0) no paper, (1) has paper: ";
cout << "Does the printer have paper? (0) no paper, (1) has paper: " << endl;

// TODO: Use `cin` to get keyboard input and store it in `has_paper`.
cin >> has_paper;

// TODO: If has_paper is true and printer_on is true then display "CAN PRINT!"
// Otherwise, display "CANNOT PRINT!".
if (has_paper && printer_on){
cout << "Can print!!" << endl;}
else {cout << "Can not print!" << endl;}

// Return 0 means quit program with no errors, in this context.
return 0;
}
