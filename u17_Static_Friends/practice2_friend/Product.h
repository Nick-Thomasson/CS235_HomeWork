#ifndef _PRODUCT
#define _PRODUCT

#include <string>
#include <vector>
using namespace std;

class Product
{
 public:
  Product( string name, float price, int year );

 private:
  string name;
  float price;
  int year;

  // - STUDENT CODE ----------------------------------------------------------
  // TODO: Specify Display as a friend
  // -------------------------------------------------------------------------
};

#endif
