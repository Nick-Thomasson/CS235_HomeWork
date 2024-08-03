#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include "Ingredient.h"
using namespace std;  
void SetupRecipes(string & rec1_name, string & rec1_url, Ingredient & rec1_ing1, Ingredient & rec1_ing2, Ingredient & rec1_ing3,
  string & rec2_name, string & rec2_url, Ingredient & rec2_ing1, Ingredient & rec2_ing2, Ingredient & rec2_ing3);
void DisplayMenu();
int GetUserInput(int min, int max);
void DisplayRecipe(string recipe_name, string recipe_url, float batches, Ingredient a, Ingredient b, Ingredient c);

    #endif
