// PROGRAM: Practice if/else if statements

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
// TODO: Create an int variable named `charge`.
int charge;

// TODO: Use `cout` to tell the user to enter their battery charge %.
cout << "Please enter your battery percentage: " << endl;

// TODO: Use `cin` to get their input and store it in the `charge` variable.
cin >> charge;

// TODO: Use if/else if/else statements to decide which battery image to draw.
// 90% and above: [****];  75% and above: [***-];  50% and above: [**--];  25% and above: [*---];  below 25%: [----]
if (charge >= 90){
cout << "90% and above: [****]" << endl;}
else if (charge >= 75){
cout << "75% and above: [***-]" << endl;}
else if (charge >= 50){
cout << "50% and above: [**--]" << endl;}
else if (charge >= 25){
cout << "25% and above: [*---]" << endl;}
else {cout << "below 25%: [----]" << endl;}
	

// Return 0 means quit program with no errors, in this context.
return 0;
}
