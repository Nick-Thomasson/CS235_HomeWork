#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------
// TODO: Replace these three functions with ONE templated function.
void DisplayValue( string variable_name, string variable_value )
{
  cout << setw( 20 ) << variable_name << setw( 20 ) << variable_value << endl;
}

void DisplayValue( string variable_name, int variable_value )
{
  cout << setw( 20 ) << variable_name << setw( 20 ) << variable_value << endl;
}

void DisplayValue( string variable_name, float variable_value )
{
  cout << setw( 20 ) << variable_name << setw( 20 ) << variable_value << endl;
}
// -------------------------------------------------------------------------


int main()
{
  cout << left;
  string product   = "USB-C cable pack";
  float  price     = 9.99;
  int    quantity  = 5;
  bool   sold_out  = false;

  cout << setw( 20 ) << "FIELD" << setw( 20 ) << "DATA" << endl;
  cout << string( 80, '-' ) << endl;

  DisplayValue( "product",  product );
  DisplayValue( "price",    price );
  DisplayValue( "quantity", quantity );
  DisplayValue( "sold_out", sold_out );

  return 0;
}
