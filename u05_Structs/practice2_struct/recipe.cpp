// PROGRAM: Practice using struct

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   
#include <iomanip>
#include <string>     
using namespace std;  
#include "Ingredient.h"


Ingredient ing1;
Ingredient ing2;
Ingredient ing3;
Ingredient ing4;
Ingredient ing5;

int main()
{
ing1.name = "Flour";
ing1.unit = "Cups";
ing1.amount = 4.5;

ing2.name = "Sugar";
ing2.unit =  "Tablespoons";
ing2.amount =  1;

ing3.name = "Instant Yeast";
ing3.unit =  "Teaspoons";
ing3.amount =  2.25;

ing4.name = "Water";
ing4.unit = "Cups";
ing4.amount = 1.66;

ing5.name = "Table Salt";
ing5.unit = "Teaspoons";
ing5.amount = 2.5;


  cout << "BREAD RECIPE" << endl << endl;

  // TODO: Update how the data is outputted
  cout << "Ingredients" << endl;
  cout << "* " <<  ing1.amount << " " << ing1.unit << " of " << ing1.name << endl;
  cout << "* " <<  ing2.amount << " " << ing2.unit << " of " << ing2.name << endl;
  cout << "* " <<  ing3.amount << " " << ing3.unit << " of " << ing3.name << endl;
  cout << "* " <<  ing4.amount << " " << ing4.unit << " of " << ing4.name << endl;
  cout << "* " <<  ing5.amount << " " << ing5.unit << " of " << ing5.name << endl;

 // Return 0 means quit program with no errors, in this context.
 return 0;
}
