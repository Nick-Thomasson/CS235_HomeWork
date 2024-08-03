#ifndef _INGREDIENT
#define _INGREDIENT

#include <string>
using namespace std;

// - CLASS DECLARATION -----------------------------------------------------//
class Ingredient
{
public:
  // Member functions (methods)
  Ingredient(); // Default constructor
  Ingredient( string new_name, string new_unit, float new_amount ); // Parameterized constructor
  void Display();

private:
  // Member variables
  string name{"unset"};
  string unit{"unset"};
  float amount{0};
};

#endif
