// PROGRAM: Practice with function - NO input, YES output
#include <iostream>

#include <string>

using namespace std;

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
float getTaxPercent() {
  return 9.61;
}

int main() {
  // -- IMPLEMENT PROGRAM HERE --------------------------------------------------
  float myTax = getTaxPercent();
  cout << "Tax rate is: " << myTax << endl;
  return 0;
}
