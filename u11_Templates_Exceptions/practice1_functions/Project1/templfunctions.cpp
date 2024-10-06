#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------
// TODO: Replace these three functions with ONE templated function.
template <typename T>
void DisplayValue(string variable_name, T variable_value) {
	cout << setw(20) << variable_name << setw(20) << variable_value << endl;
}


int main()
{
  cout << left;
  string product   = "USB-C cable pack";
  float  price     = 9.99;
  int    quantity  = 5;
  bool   sold_out  = false;

  cout << setw(20) << "FIELD" << setw( 20 ) << "DATA" << endl;
  cout << string( 80, '-' ) << endl;

  DisplayValue<string>("product",product);
  DisplayValue<float>("price",price);
  DisplayValue<int>("quantity",quantity);
  DisplayValue<bool>("sold_out",sold_out);

  return 0;
}
