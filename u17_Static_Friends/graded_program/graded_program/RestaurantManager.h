#ifndef _RESTAURANT_MANAGER
#define _RESTAURANT_MANAGER

#include "Restaurant.h"

#include <string>
#include <vector>
#include <list>
using namespace std;

class RestaurantManager
{
    public:
    static void CreateOrder( string meal_name );
    static Meal ReturnMeal();
    static void PrepNextOrder();

    static void Display();

    private:
    static vector<string> GetIngredients( string meal_name );

    static list<Order> orders;
    static list<Meal> meals;

    friend void Tester();
};

#endif
