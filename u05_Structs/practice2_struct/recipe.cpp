// PROGRAM: Practice using struct

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <iomanip>
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

#include "Ingredient.h"

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // TODO: Update this program to use the Ingredient type instead of separate varaibles for each ingredient.

  // TODO: Add "Ingredient ing1;", then set up "ing1.name", "ing1.unit", etc.
  string ingredient1_name = "Flour";
  string ingredient1_unit = "Cups";
  float  ingredient1_amount = 4.5;

  // Same for the rest of these
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

  // TODO: Update how the data is outputted
  cout << "Ingredients" << endl;
  cout << "* " << ingredient1_amount << " " << ingredient1_unit << " of " << ingredient1_name << endl;
  cout << "* " << ingredient2_amount << " " << ingredient2_unit << " of " << ingredient2_name << endl;
  cout << "* " << ingredient3_amount << " " << ingredient3_unit << " of " << ingredient3_name << endl;
  cout << "* " << ingredient4_amount << " " << ingredient4_unit << " of " << ingredient4_name << endl;
  cout << "* " << ingredient5_amount << " " << ingredient5_unit << " of " << ingredient5_name << endl;

 // Return 0 means quit program with no errors, in this context.
 return 0;
}
