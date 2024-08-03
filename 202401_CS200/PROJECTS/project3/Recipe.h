#ifndef RECIPE_H  
#define RECIPE_H

using namespace std;
#include <string>
#include <vector>
#include "Ingredient.h"  


struct Recipe {
	string name;
	string url;
	vector<Ingredient> ingredients;
};

#endif // RECIPE_H
