// PROGRAM: Practice with function - YES input, YES output
#include <iostream>

#include <string>

using namespace std;

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
float GetPricePlusTax(float original_price, float tax_percent) {
  return original_price + (tax_percent / 100 * original_price);
}

int main() {
  float price, tax, updated_price;
  cout << "Enter Price: $";
  cin >> price;
  cout << "Enter tax: %";
  cin >> tax;

  updated_price = GetPricePlusTax(price, tax);
  cout << "You entered " << price << " for your price, " << "and " << tax << " for your tax." << endl;

  cout << "Your updated price is: " << updated_price << endl;

  return 0;
}
