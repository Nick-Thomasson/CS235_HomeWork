#ifndef _Product_Header
#define _Product_Header

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//! A Product listing in a store, linked to an Inventory id
struct Product
{
    Product();
    Product( string new_title, float new_price );
    void Display();

    //! Store specific title of this product listing
    string title{"unset"};
    //! Store specific price of this product listing
    float price{-1};
};

#endif
