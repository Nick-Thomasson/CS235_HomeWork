// PROGRAM: Practice using class
// This is based off the Unit 5 Practice 2 program

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

#include "Ingredient.h"

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // TODO: Update this program to use the Ingredient class.
  // Assign values to each ingredient using its constructor.

  string ingredient1_name = "Flour";
  string ingredient1_unit = "Cups";
  float  ingredient1_amount = 4.5;

  string ingredient2_name = "Sugar";
  string ingredient2_unit = "Tablespoons";
  float  ingredient2_amount = 1;

  string ingredient3_name = "Instant Yeast";
  string ingredient3_unit = "Teaspoons";
  float  ingredient3_amount = 2.25;

  string ingredient4_name = "Water";
  string ingredient4_unit = "Cups";
  float  ingredient4_amount = 1.66;

  string ingredient5_name = "Table Salt";
  string ingredient5_unit = "Teaspoons";
  float  ingredient5_amount = 2.5;


  cout << "BREAD RECIPE" << endl << endl;

  // TODO: Use each ingredient's Display() function here instead of the separate `cout` statements for each.
  cout << "Ingredients" << endl;
  cout << "* " << ingredient1_amount << " " << ingredient1_unit << " of " << ingredient1_name << endl;
  cout << "* " << ingredient2_amount << " " << ingredient2_unit << " of " << ingredient2_name << endl;
  cout << "* " << ingredient3_amount << " " << ingredient3_unit << " of " << ingredient3_name << endl;
  cout << "* " << ingredient4_amount << " " << ingredient4_unit << " of " << ingredient4_name << endl;
  cout << "* " << ingredient5_amount << " " << ingredient5_unit << " of " << ingredient5_name << endl;

 // Return 0 means quit program with no errors, in this context.
 return 0;
}
