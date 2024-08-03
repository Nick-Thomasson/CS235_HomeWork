// PROGRAM: Practice with function - YES input, YES output
#include <iostream>
#include <string>
using namespace std;

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
/**
   CalculatePricePlusTax function
   NO input parameters / YES output return
   @param   original_price    The original price of an item (before tax)
   @param   tax_percent       The tax rate, in % form
   @return  float             The new price after tax is applied
   Calculates the price plus the additional price to due tax and returns the value.
*/
// TODO: Define the CalculatePricePlusTax function here
float CalculatePricePlusTax( float original_price, float tax_percent )
{
  float tax_decimal = tax_percent / 100;
  float new_price = original_price + ( tax_decimal * original_price );
  return new_price;
}

// -- MAIN PROGRAM FUNCTION ---------------------------------------------------
int main()
{
  float price, tax, updated_price;

  cout << "Enter price: $";
  cin >> price;
  cout << "Enter tax: %";
  cin >> tax;

  // TODO: Call the GetPricePlusTax function,
  updated_price = CalculatePricePlusTax( price, tax );

  cout << "Updated price: $" << updated_price << endl;

  return 0;
}
