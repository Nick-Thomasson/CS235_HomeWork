#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include "Ingredient.h"
using namespace std;  
#include <vector>
#include "Recipe.h"


void MainMenu(vector<Recipe>& recipes);
int GetChoice(int min, int max);
void DisplayRecipe(Recipe recipe);
void ViewRecipesMenu(vector<Recipe>& recipes);
void AddNewRecipeMenu(vector<Recipe>& recipes);
void PrintRecipesMenu(vector<Recipe>& recipes);



#endif
