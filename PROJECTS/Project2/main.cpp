#include <iostream>
#include <string>
using namespace std;

int main() {
	
	float batches;
	cout << "How many batches would you like to make?" << endl;
	cin >> batches;
	
	
    //Recipe 1 Variables
    string recipeOneName = "3-Ingredient Mac & Cheese";
    string recipeOneURL = "https://tasty.co/recipe/3-ingredient-mac-cheese";
    int recipeOneIngredientOneAmount = 5;
    string recipeOneIngredientOneName = "milk";
    string recipeOneIngredientOneUnit = "cups";
    int recipeOneIngredientTwoAmount = 1;
    string recipeOneIngredientTwoName = "Elbow Macaroni";
    string recipeOneIngredientTwoUnit = "lb";
    int recipeOneIngredientThreeAmount = 2;
    string recipeOneIngredientThreeName = "Shredded Cheddar Cheese";
    string recipeOneIngredientThreeUnit = "cubes";
    
    //Recipe 2 Variables
    string recipeTwoName = "3-Ingredient Banana Bread";
    string recipeTwoURL = "https://www.tasteofhome.com/article/3-ingredient-banana-bread/";
    int recipeTwoIngredientOneAmount = 3;
    string recipeTwoIngredientOneName = "very ripe bananas";
    int recipeTwoIngredientTwoAmount = 1;
    string recipeTwoIngredientTwoName = "box yellow cake mix";
    int recipeTwoIngredientTwoSize = 15;
    string recipeTwoIngredientTwoUnit = "ounces";
    int recipeTwoIngredientThreeAmount = 2;
    string recipeTwoIngredientThreeName = "large eggs";
    
    cout << "RECIPE PROGRAM" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Recipe 1: " << recipeOneName << endl;
    cout << "From " << recipeOneURL << endl << endl;
    cout << "INGREDIENTS:" << endl;
    cout << "* " << recipeOneIngredientOneAmount * batches << " " << recipeOneIngredientOneUnit << " " << recipeOneIngredientOneName << endl;
    cout << "* " << recipeOneIngredientTwoAmount * batches << " " << recipeOneIngredientTwoUnit << " " << recipeOneIngredientTwoName << endl;
    cout << "* " << recipeOneIngredientThreeAmount * batches << " " << recipeOneIngredientThreeUnit << " " << recipeOneIngredientThreeName << endl << endl;
    
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Recipe 2: " << recipeTwoName << endl;
    cout << "From " << recipeTwoURL << endl << endl;
    cout << "INGREDIENTS:" << endl;
    cout << "* " << recipeTwoIngredientOneAmount * batches << " " << recipeTwoIngredientOneName << endl;
    cout << "* " << recipeTwoIngredientTwoAmount * batches << " box (" << recipeTwoIngredientTwoSize << " " << recipeTwoIngredientTwoUnit << ") " << recipeTwoIngredientTwoName << endl;
    cout << "* " << recipeTwoIngredientThreeAmount * batches << " " << recipeTwoIngredientThreeName << endl << endl;

    cout << "THE END" << endl;
    return 0;
}
