#include "Ingredient.h"

#include <string>
#include <iostream>
using namespace std;

Ingredient::Ingredient()
{
    name = "UNKNOWN";
    unit = "UNKNOWN";
    amount = 0;
}

Ingredient::Ingredient( string new_name, string new_unit, float new_amount )
{
    name = new_name;
    unit = new_unit;
    amount = new_amount;
}

void Ingredient::Display()
{
    cout << "* " << amount << " " << unit << " of " << name << endl;
}