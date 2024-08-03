// PROGRAM: Practice using struct
// This is based off the Unit 3 Practice 5 program

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <iomanip>
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries


// - INCLUDE THE Pet.h FILE, WHICH CONTAINS THE Pet STRUCT!
#include "Pet.h"

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // ------- GET USER INPUT -------
  cout << "---- PET 1 ----" << endl;

  Pet pet1;

  // Ask the user to enter information...
  cout << "Name: ";             // Display prompt
  getline( cin, pet1.name );    // Get string input

  cout << "Age:  ";             // Display prompt
  cin >> pet1.age;              // Get int input
  cin.ignore();                 // Flush the input buffer

  cout << "Animal: ";           // Display prompt
  getline( cin, pet1.animal );  // Get string input

  cout << "Breed: ";            // Display prompt
  getline( cin, pet1.breed );   // Get string input

  // TODO: Create a variable `pet2` whose type is `Pet`, like the previous example
  // TODO: Ask the user to enter the name, age, animal, and breed for `pet2`.
cout << "---- PET 2 ----" << endl;
  Pet pet2;

  // Ask the user to enter information...
  cout << "Name: ";             // Display prompt
  getline( cin, pet2.name );    // Get string input

  cout << "Age:  ";             // Display prompt
  cin >> pet2.age;              // Get int input
  cin.ignore();                 // Flush the input buffer

  cout << "Animal: ";           // Display prompt
  getline( cin, pet2.animal );  // Get string input

  cout << "Breed: ";            // Display prompt
  getline( cin, pet2.breed );   // Get string input


  // ------- DISPLAY RESULTS -------

  cout << left; // Set left alignment
  cout << endl; // Add more spacing

  const int COL1 = 7;
  const int COL2 = 20;
  const int COL3 = 7;;
  const int COL4 = 15;
  const int COL5 = 15;

  cout << "Collected information:" << endl << endl;

  cout << setw( COL1 ) << "PET#" << setw( COL2 ) << "NAME" << setw( COL3 ) << "AGE" << setw( COL4 ) << "ANIMAL" << setw( COL5 ) << "BREED" << endl;
  cout << string( 80, '-' ) << endl;

  // Pet 1:
  cout << setw( COL1 ) << "1";
  cout << setw( COL2 ) << pet1.name;
  cout << setw( COL3 ) << pet1.age;
  cout << setw( COL4 ) << pet1.animal;
  cout << setw( COL5 ) << pet1.breed;
  cout << endl;


  // TODO: Display information for pet 2
  cout << setw( COL1 ) << "2";
  cout << setw( COL2 ) << pet2.name;
  cout << setw( COL3 ) << pet2.age;
  cout << setw( COL4 ) << pet2.animal;
  cout << setw( COL5 ) << pet2.breed;
  cout << endl;



 // Return 0 means quit program with no errors, in this context.
 return 0;
}
