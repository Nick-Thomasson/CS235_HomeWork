# Practice 2: Class constructor functions (Ingredient program)

## Introduction

Within the "Ingredient.h" file, a class is declared: `Ingredient`.
Pet contains the following **member variables**:

- `string name`
- `string unit`
- `float amount`

These member variables are **private**, meaning that you cannot access
these variables from within `main()` or outside of the class itself.

The class also has the following **member functions** (aka methods):

- `Ingredient()`, a default constructor
- `Ingredient( string new_name, string new_unit, float new_amount )`, a parameterized constructor
- `void Display()`

Constructors are special functions that will automatically be **called** whenever we create a new variable of this type (Ingredient). We can use these functions to initialize or setup

-------------------------------------------------------------------------------

## Updating main()

Within `main()` we have a set of variables that need to be converted to use the `Ingredient` class:

```c++
string ingredient1_name = "Flour";
string ingredient1_unit = "Cups";
float  ingredient1_amount = 4.5;

string ingredient2_name = "Sugar";
string ingredient2_unit = "Tablespoons";
float  ingredient2_amount = 1;

string ingredient3_name = "Instant Yeast";
string ingredient3_unit = "Teaspoons";
float  ingredient3_amount = 2.25;

string ingredient4_name = "Water";
string ingredient4_unit = "Cups";
float  ingredient4_amount 1.66;

string ingredient5_name = "Table Salt";
string ingredient5_unit = "Teaspoons";
float  ingredient5_amount 2.5;
```

Update `main()` so that we're using `Ingredient` variables, initializing
each item's data via its **parameterized constructor**, like this:

`Ingredient ing1( "Flour", "Cups", 4.5 );`



And further down in the program:

```c++
cout << "Ingredients" << endl;
cout << "* " << ingredient1_amount << " " << ingredient1_unit << " of " << ingredient1_name << endl;
cout << "* " << ingredient2_amount << " " << ingredient2_unit << " of " << ingredient2_name << endl;
cout << "* " << ingredient3_amount << " " << ingredient3_unit << " of " << ingredient3_name << endl;
cout << "* " << ingredient4_amount << " " << ingredient4_unit << " of " << ingredient4_name << endl;
cout << "* " << ingredient5_amount << " " << ingredient5_unit << " of " << ingredient5_name << endl;
```

Instead of writing a `cout` statement for each ingredient, instead call each one's `Display()` function, like this:

`ing1.Display();`

-------------------------------------------------------------------------------

## Example output

```
g++ *.h *.cpp && ./a.out 
BREAD RECIPE

Ingredients
* 4.5 Cups of Flour
* 1 Tablespoons of Sugar
* 2.25 Teaspoons of Instant Yeast
* 1.66 Cups of Water
* 2.5 Teaspoons of Table Salt
```
