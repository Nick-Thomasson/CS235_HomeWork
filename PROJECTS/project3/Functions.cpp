#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
#include "Functions.h"

void MainMenu(vector<Recipe>& recipes) {
	bool running = true;

	while (running) {


		cout << endl;
		cout << "ALL CURRENTLY STORED RECIPES" << endl;
		// Display a list of all recipe names
		for (int i = 0; i < recipes.size(); i++) {
			cout << i + 1 << ". " << recipes[i].name << endl;
		}

		// Display the main menu
		cout << endl;
		cout << "------------- MAIN MENU ------------" << endl;
		cout << "0. Quit program" << endl;
		cout << "1. View recipe" << endl;
		cout << "2. Save recipes to text file" << endl;
		cout << "3. Add new recipe" << endl;
		cout << "--> Where do you want to go? (Enter 0, 1, 2 or 3)" << endl;

		int choice = GetChoice(0, 3);

		switch (choice) {
		case 0:
			running = false;
			break;
		case 1:
			ViewRecipesMenu(recipes);
			break;
		case 2:
			PrintRecipesMenu(recipes);
			break;
		case 3:
			AddNewRecipeMenu(recipes);
			break;
		default:
			cout << "Invalid option. Please try again.\n";
		}
	}
}

int GetChoice(int min, int max)
{
	int choice;
	cout << ">> ";
	cin >> choice;

	while (choice < min || choice > max)
	{
		cout << "Invalid, must be between " << min << " and " << max << endl;
		cout << ">> ";
		cin >> choice;
	}

	return choice;
}

void ViewRecipesMenu(vector<Recipe>& recipes) {
	cout << "---------------------------------------------------------------------" << endl;
	cout << "VIEW RECIPE" << endl;
	cout << "---------------------------------------------------------------------" << endl;

	for (int i = 0; i < recipes.size(); i++) {
		cout << i << ": " << recipes[i].name << endl;
	}
	cout << endl;
	cout << "Which recipe would you like to view?: " << endl;
	int choice = GetChoice(0, recipes.size());
	cout << "---------------------------------------------------------------------" << endl;
	cout << "You chose recipe number: " << choice << endl;
	cout << "---------------------------------------------------------------------" << endl;
	DisplayRecipe(recipes[choice]);
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Now returning to the main menu........" << endl;

}

void DisplayRecipe(Recipe recipe) {
	
	cout << recipe.name << endl;
	cout << recipe.url << endl;
	for (int j = 0; j < recipe.ingredients.size(); j++) {
	cout << "* " << recipe.ingredients[j].amount << " "
		<< recipe.ingredients[j].unit << " "
		<< recipe.ingredients[j].name << endl;
}
}

void AddNewRecipeMenu(vector<Recipe>& recipes) {
	cout << "---------------------------------------------------------------------" << endl;
	cout << "NEW RECIPE" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	Recipe new_recipe;
	Ingredient new_ingredient;
	int total_ings;
	cout << "Please enter new recipe name" << endl;
	cin >> new_recipe.name;
	cout << "Please enter the new recipe URL" << endl;
	cin >> new_recipe.url;
	cout << "How many total ingredients make up this recipe?" << endl;
	cin >> total_ings;
	for (int i = 1; i <= total_ings; i++) {
		cout << "INGREDIENT #" << i << endl;
		cout << "Please enter the ingredient name:" << endl;
		cin >> new_ingredient.name;
		cout << "Please enter the measurement unit:" << endl;
		cin >> new_ingredient.unit;
		cout << "Please enter the amount:" << endl;
		cin >> new_ingredient.amount;
		new_recipe.ingredients.push_back(new_ingredient);
	}
	recipes.push_back(new_recipe);
}

void PrintRecipesMenu(vector<Recipe>& recipes) {
	string fileName;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "PRINT RECIPES" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Please enter the file name you'd like to output to: " << endl;
	cin >> fileName;
	ofstream output;
	output.open(fileName);
	for (int i = 0; i < recipes.size(); i++) {
		output << "Recipe Name: " << i << ". " << recipes[i].name << endl;
		output << "Recipe URL: " << i << ". " << recipes[i].url << endl;
		for (int j = 0; j < recipes[i].ingredients.size(); j++) {
			output <<"Ingredient name: " << recipes[i].ingredients[j].name << endl;
			output << "Ingredient amount: " << recipes[i].ingredients[j].amount << endl;
			output << "Ingredient Unit: " << recipes[i].ingredients[j].unit << endl;
		}
		output << "-------------------------------------" << endl;
	}
	output.close();
}