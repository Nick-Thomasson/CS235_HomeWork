// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <iomanip>    // Library for text formatting, has `setw`, `left`.`
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  cout << " PET PROGRAM " << endl << endl;

  // Variable declarations
  string your_name;
  string pet_name, pet_animal, pet_breed;
  int    pet_age;

  // TODO: Implement the rest of the program...
  cout << "Enter your name: ";
  getline( cin, your_name );

  cout << endl << "Tell me about your pet..." << endl;
  cout << "Name: ";
  getline( cin, pet_name );

  cout << "Age:  ";
  cin >> pet_age;
  cin.ignore();

  cout << "Animal: ";
  getline( cin, pet_animal );

  cout << "Breed: ";
  getline( cin, pet_breed );

  cout << endl;
  cout << your_name << " has a " << pet_breed << " " << pet_animal
       << " named " << pet_name << ". " << pet_name << " is " << pet_age << "!" << endl;

  // Return 0 means quit program with no errors, in this context.
  cout << endl << " THE END " << endl;
  return 0;
}
