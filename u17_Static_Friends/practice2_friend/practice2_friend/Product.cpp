#include "Product.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

Product::Product( string name, float price, int year )
{
  this->name = name;
  this->price = price;
  this->year = year;
}


void Display(const vector<Product>& products)
{
    cout << left << fixed << setprecision(2);
    cout << setw(5) << "ID"
        << setw(20) << "NAME"
        << setw(10) << "PRICE"
        << setw(10) << "YEAR"
        << endl;
    cout << string(80, '-') << endl;

    for (size_t i = 0; i < products.size(); i++) {
        cout << i << "\t" << products[i].name << "\t" << products[i].price << "\t" << products[i].year << endl;
    }
}
