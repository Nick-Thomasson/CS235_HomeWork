#ifndef _RESTAURANT
#define _RESTAURANT

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Order
{
public:
	Order() {};
	Order(string new_meal_name)
	{
		this->meal_name = new_meal_name;
	}
	void Display()
	{
		cout << "Order: " << meal_name << endl;
	}

private:
	string meal_name;
	friend void Tester();
	friend class RestaurantManager;
};

class Meal
{
public:
	void Display()
	{
		cout << meal_name << ": ";
		for (auto& food : foods)
		{
			cout << food << " ";
		}
		cout << endl;
	}
private:
	string meal_name;
	vector<string> foods;
	friend void Tester();
	friend class RestaurantManager;
};

#endif
