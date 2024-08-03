#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include "Ingredient.h"
#include "SinghFunctions.h"
#include <vector>
#include "Functions.h"

int main() {
	vector<Recipe> recipes = LoadRecipes();
	MainMenu(recipes);
	SaveRecipes(recipes);
}
