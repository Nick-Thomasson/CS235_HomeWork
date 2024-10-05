#include "Product.h"

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Product::Product()
{
}

Product::Product( string new_title, float new_price )
{
    this->title = new_title;
    this->price = new_price;
}

void Product::Display()
{
    cout << "[" << this->title << ", $" << this->price << "] ";
}
