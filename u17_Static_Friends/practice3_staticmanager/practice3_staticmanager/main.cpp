#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Product.h"
#include "ProductManager.h"

int main()
{
  Product example( "NES", 199, 1985 );
  
  /*
  ProductManager::AddProduct( example );

  ProductManager::AddProduct( "SNES", 199, 1991 );
  ProductManager::AddProduct( "Nintendo 64", 199, 1996 );
  ProductManager::AddProduct( "GameCube", 199, 2001 );
  ProductManager::AddProduct( "Wii", 249, 2006 );
  ProductManager::AddProduct( "Wii U", 299, 2012 );
  ProductManager::AddProduct( "Nintendo Switch", 299, 2017 );

  cout << endl << "LAUNCH PRICES" << endl << endl;

  ProductManager::Display();
  * */

  cout << endl << endl;
  return 0;
}
