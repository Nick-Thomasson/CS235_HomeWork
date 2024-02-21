// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

#include "Functions.h"

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
// TODO: Add DisplayMenu here
void DisplayMenu()
{
}

// TODO: Add FormatUSD here
void FormatUSD( float price )
{
}

// TODO: Add GetTaxPercent here
float GetTaxPercent()
{
  return -1; // REMOVE THIS AND REPLACE WITH PROPER DATA
}

// TODO: Add GetPricePlusTax here
float GetPricePlusTax( float original_price, float tax_percent )
{
  return -1; // REMOVE THIS AND REPLACE WITH PROPER DATA
}

// TODO: Add GetNewPrice function. Inputs: None, Output: float
// Within the function ask the user to enter the price of a new item, use `cin` to get their input.
// Store it in a float variable. `return` this float at the end of the function.
float GetNewPrice()
{
}

// TODO: Add GetChoice function. Inputs: min and max (both ints), Output: int
// Within this function ask the user to enter a number between the `min` and `max`.
// Store their choice in an integer variable, then use a while loop - while their input
// is invalid, ask them to re-enter their selection.
// Make sure to use `return` to return their selection at the end.
int GetChoice( int min, int max )
{
}

float StudentCode()
{
  float final_price = 0;
  float transaction_total = 0;
  bool running = true;
  float new_price;
  int choice;

  // TODO: Add program code

  return final_price;
}
