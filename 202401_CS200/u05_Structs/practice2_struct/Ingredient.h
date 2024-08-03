#ifndef _INGREDIENT
#define _INGREDIENT
#include <iostream>   
#include <iomanip>
#include <string>  
using namespace std;
// - STRUCT DECLARATION -----------------------------------------------------//
// TODO: Declare an Ingredient struct,
// It should have a string for `name`,
// a string for `unit`
// and a float for `amount`.

struct Ingredient{
    string name;
    string unit;
    float amount;
};

#endif
