// PROGRAM: Practice with function - YES input, NO output
#include <iostream>

#include <iomanip>

using namespace std;
float myPrice;

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
void FormatUSD(float price) {
  cout << fixed << setprecision(2);
  cout << "You entered the amount of $" << price << endl;
}

int main() {
  // -- IMPLEMENT PROGRAM HERE --------------------------------------------------
  float myPrice;
  cout << "Please enter an amount of money: " << endl;
  cin >> myPrice;
  FormatUSD(myPrice);
  return 0;
}
