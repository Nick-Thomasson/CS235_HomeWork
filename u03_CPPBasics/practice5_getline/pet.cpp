// PROGRAM: cin and getline practice

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <iomanip>    // Library for text formatting, has `setw`, `left`.`
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // ------- GET USER INPUT -------
  cout << "---- PET 1 ----" << endl;

  // Declaring variables
  string pet1_name;
  int    pet1_age;
  string pet1_animal;
  string pet1_breed;

  // Ask the user to enter information...
  cout << "Name: ";             // Display prompt
  getline( cin, pet1_name );    // Get string input

  cout << "Age:  ";             // Display prompt
  cin >> pet1_age;              // Get int input
  cin.ignore();                 // Flush the input buffer

  cout << "Animal: ";           // Display prompt
  getline( cin, pet1_animal );  // Get string input

  cout << "Breed: ";            // Display prompt
  getline( cin, pet1_breed );   // Get string input

  cout << endl << "---- PET 2 ----" << endl;

  // TODO: Create variables `name2`, `age2`, `animal2`, `breed2`, based on the previous example.


  // TODO: Ask the user to enter the name, age, animal, and breed for pet 2.


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
  cout << setw( COL2 ) << pet1_name;
  cout << setw( COL3 ) << pet1_age;
  cout << setw( COL4 ) << pet1_animal;
  cout << setw( COL5 ) << pet1_breed;
  cout << endl;


  // TODO: Display information for pet 2



  // Return 0 means quit program with no errors, in this context.
  return 0;
}

