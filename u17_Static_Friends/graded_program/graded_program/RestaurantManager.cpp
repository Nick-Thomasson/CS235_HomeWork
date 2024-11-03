#include "RestaurantManager.h"
#include <iostream>
using namespace std;


list<Order> RestaurantManager::orders;
list<Meal> RestaurantManager::meals;

void RestaurantManager::CreateOrder(string meal_name)
{
	cout << "Your new order of " << meal_name << " has been created! Yay!" << endl;
	Order order(meal_name);
	orders.push_back(order);
}

void RestaurantManager::PrepNextOrder()
{
	if (orders.size() == 0) {
		cout << "No meals to prep at the moment! Sorry!!" << endl;
	}
	else {
		Order& order = orders.front();
		Meal meal;
		meal.meal_name = order.meal_name;
		meal.foods = GetIngredients(order.meal_name);
		meals.push_back(meal);
		orders.pop_front();
	}

}

Meal RestaurantManager::ReturnMeal()
{
	if (meals.size() == 0) {
		throw runtime_error("No meals ready!! I'm sorry!!!");
	}
	else {
		Meal meal = meals.front();
		meals.pop_front();
		return meal;

	}
}

void RestaurantManager::Display()
{
	cout << "Restaurant manager" << endl;
	cout << "* Total orders: " << orders.size() << endl;
	cout << "* Total meals:  " << meals.size() << endl;
}

vector<string> RestaurantManager::GetIngredients(string meal_name)
{
	vector<string> foods;

	if (meal_name == "breakfast combo")
	{
		foods.push_back("eggs");
		foods.push_back("pancakes");
		foods.push_back("bacon");
		foods.push_back("coffee");
	}
	else if (meal_name == "soup of the day")
	{
		foods.push_back("tomato soup");
		foods.push_back("french bread");
	}
	else if (meal_name == "lunch combo")
	{
		foods.push_back("sandwich");
		foods.push_back("chips");
		foods.push_back("soda");
	}

	return foods;
}

