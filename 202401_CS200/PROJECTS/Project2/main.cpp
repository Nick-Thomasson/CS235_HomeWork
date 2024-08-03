#include <iostream>
#include <string>
using namespace std;
#include "Ingredient.h"
#include "Functions.h"

int main(){
  bool running = true;
  float batches;
  string recipe1_name, recipe1_url, recipe2_name, recipe2_url;
  Ingredient recipe1_ing1, recipe1_ing2, recipe1_ing3, recipe2_ing1, recipe2_ing2, recipe2_ing3;

  // Call to SetupRecipes function
  SetupRecipes(recipe1_name, recipe1_url, recipe1_ing1, recipe1_ing2, recipe1_ing3,
    recipe2_name, recipe2_url, recipe2_ing1, recipe2_ing2, recipe2_ing3);

  while (running) {
    // Main menu:
    DisplayMenu();
    // Get user choice:
    int choice = GetUserInput(0, 2);
    // Quit?
    if (choice == 0) {
      running = false;
      break;
    } else if (choice == 1) {
      cout << "How many batches would you like to make?" << endl;
      cin >> batches;
      cout << "Displaying recipe for 3-Ingredient Mac & Cheese for " << batches << " batches." << endl;
      cout << "RECIPE PROGRAM" << endl;
      cout << "--------------------------------------------------------------------------------" << endl;
      DisplayRecipe(recipe1_name, recipe1_url, batches, recipe1_ing1, recipe1_ing2, recipe1_ing3);
    } else if (choice == 2) {
      cout << "How many batches would you like to make?" << endl;
      cin >> batches;
      cout << "Displaying recipe for 3-Ingredient Banana Bread for " << batches << " batches." << endl;
      cout << "RECIPE PROGRAM" << endl;
      cout << "--------------------------------------------------------------------------------" << endl;
      DisplayRecipe(recipe2_name, recipe2_url, batches, recipe2_ing1, recipe2_ing2, recipe2_ing3);
    }
  }

}
