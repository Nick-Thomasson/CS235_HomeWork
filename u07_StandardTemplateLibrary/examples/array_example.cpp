#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

int main()
{
  cout << "ARRAY PROGRAM" << endl;
  cout << fixed << setprecision( 2 ); // USD formatting
  
  array<float, 5> price_list;
  
  price_list[0] = 4.29;
  price_list[1] = 34.23;
  price_list[2] = 12.43;
  price_list[3] = 5.85;
  price_list[4] = 79.58;
  
  cout << "Prices:" << endl;
  for ( size_t i = 0; i < price_list.size(); i++ )
  {
    cout << "Index: " << i << ", Element: $" << price_list[i] << endl;
  }
  
  cout << "THE END" << endl;
  return 0;
}
