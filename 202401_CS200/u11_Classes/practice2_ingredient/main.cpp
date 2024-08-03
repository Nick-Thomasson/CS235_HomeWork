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

	Ingredient ingredient1("Flour", "Cups", 4.5);

	Ingredient ingredient2("Sugar", "Tablespoons", 1);

	Ingredient ingredient3("Instant Yeast", "Teaspoons", 2.25);

	Ingredient ingredient4("Water", "Cups", 1.66);

	Ingredient ingredient5("Table Salt", "Teaspoons", 2.5);




  cout << "BREAD RECIPE" << endl << endl;

  // TODO: Use each ingredient's Display() function here instead of the separate `cout` statements for each.
  cout << "Ingredients" << endl;
  ingredient1.Display();
  ingredient2.Display();
  ingredient3.Display();
  ingredient4.Display();
  ingredient5.Display();


 // Return 0 means quit program with no errors, in this context.
 return 0;
}
