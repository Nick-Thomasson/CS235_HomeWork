#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Functions.h"

void DisplayMenu() {
  cout << "0. Quit Program" << endl;
  cout << "1. 3-Ingredient Mac & Cheese" << endl;
  cout << "2. 3-Ingredient Banana Bread" << endl;
}

void DisplayRecipe(string recipe_name, string recipe_url, float batches, Ingredient a, Ingredient b, Ingredient c) {
  cout << "Recipe: " << recipe_name << endl;
  cout << "From " << recipe_url << endl << endl;
  cout << "INGREDIENTS:" << endl;
  cout << "* " << a.amount * batches << " " << a.name << " " << a.unit << endl;
  cout << "* " << b.amount * batches << " " << b.name << " " << b.unit << endl;
  cout << "* " << c.amount * batches << " " << c.name << " " << c.unit << endl << endl;
}

int GetUserInput(int min, int max) {
  int choice;
  cin >> choice;
  while (choice < min || choice > max) {
    cout << "Invalid choice! Please enter again: ";
    cin >> choice;
  }
  return choice;
}

void SetupRecipes(string& rec1_name, string& rec1_url, Ingredient& rec1_ing1, Ingredient& rec1_ing2, Ingredient& rec1_ing3,
  string& rec2_name, string& rec2_url, Ingredient& rec2_ing1, Ingredient& rec2_ing2, Ingredient& rec2_ing3) {
  // Setup for Recipe 1
  rec1_name = "3-Ingredient Mac & Cheese";
  rec1_url = "https://tasty.co/recipe/3-ingredient-mac-cheese";
  rec1_ing1 = {"milk", 5,"cups"};
  rec1_ing2 = {"Elbow Macaroni", 1, "lb"};
  rec1_ing3 = {"Shredded Cheddar Cheese", 2, "cubes"};

  // Setup for Recipe 2
  rec2_name = "3-Ingredient Banana Bread";
  rec2_url = "https://www.tasteofhome.com/article/3-ingredient-banana-bread/";
  rec2_ing1 = {"very ripe bananas", 3, "pieces"};
  rec2_ing2 = {"box yellow cake mix", 1,"box"};
  rec2_ing3 = {"eggs", 2, "Large"};
}
