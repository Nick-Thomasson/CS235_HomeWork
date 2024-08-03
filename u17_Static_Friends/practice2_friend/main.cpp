#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Product.h"

// - STUDENT CODE ----------------------------------------------------------
// TODO: Define the Display function.

// -------------------------------------------------------------------------

int main()
{
  cout << endl << "LAUNCH PRICES" << endl << endl;
  vector<Product> products;
  products.push_back( Product( "PlayStation", 299, 1995 ) );
  products.push_back( Product( "PlayStation 2", 299, 2000 ) );
  products.push_back( Product( "PlayStation 3", 499, 2006 ) );
  products.push_back( Product( "PlayStation 4", 399, 2013 ) );
  products.push_back( Product( "PlayStation 5", 499, 2020 ) );

  // Display( products ); // TODO: Uncomment this out

  cout << endl << endl;
  return 0;
}
