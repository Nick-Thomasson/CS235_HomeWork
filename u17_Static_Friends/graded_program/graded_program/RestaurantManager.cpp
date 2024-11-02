#include "RestaurantManager.h"

#include <iostream>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------
// TODO: Initialize the list of orders and the list of meals.
list<Order> RestaurantManager::orders;
list<Meal> RestaurantManager::meals;

/**
Create a new Order object and set up its meal name, then push it onto the orders list.
*/
void RestaurantManager::CreateOrder( string meal_name )
{
}

/**
If there are 0 orders then display an error that there are no meals to prep.
Otherwise, set up a new Meal object, set its foods and meal name.
Push it to the meals list, then pop the front-most item from orders.
*/
void RestaurantManager::PrepNextOrder()
{
}

/**
If there are no meals then throw a runtime_error with an error message
Otherwise, grab the front-most meal from `meals`, pop the front item from the meals list, then return the meal you grabbed.
*/
Meal RestaurantManager::ReturnMeal()
{
    throw runtime_error( "NOT YET IMPLEMENTED!" ); // TODO: Remove this line of code after you implement this function
}
// -------------------------------------------------------------------------

void RestaurantManager::Display()
{
    cout << "Restaurant manager" << endl;
    cout << "* Total orders: " << orders.size() << endl;
    cout << "* Total meals:  " << meals.size() << endl;
}

vector<string> RestaurantManager::GetIngredients( string meal_name )
{
    vector<string> foods;

    if ( meal_name == "breakfast combo" )
    {
        foods.push_back( "eggs" );
        foods.push_back( "pancakes" );
        foods.push_back( "bacon" );
        foods.push_back( "coffee" );
    }
    else if ( meal_name == "soup of the day" )
    {
        foods.push_back( "tomato soup" );
        foods.push_back( "french bread" );
    }
    else if ( meal_name == "lunch combo" )
    {
        foods.push_back( "sandwich" );
        foods.push_back( "chips" );
        foods.push_back( "soda" );
    }

    return foods;
}

