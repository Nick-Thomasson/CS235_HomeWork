#include "ProductManager.h"

#include <iostream>
#include <iomanip>
using namespace std;


vector<Product>ProductManager::products;
void ProductManager::AddProduct(Product& new_product) {
	products.push_back(new_product);

}
void ProductManager::AddProduct(string name, float price, int year) {
	Product myProduct(name, price, year);
	products.push_back(myProduct);
}

void ProductManager::Display() {
	cout << left << fixed << setprecision(2);
	cout << setw(5) << "ID"
		<< setw(20) << "NAME"
		<< setw(10) << "PRICE"
		<< setw(10) << "YEAR"
		<< endl;
	cout << string(80, '-') << endl;

	for (size_t i = 0; i < products.size(); i++) {
		cout << left << fixed << setprecision(2);
		cout << setw(5) << i
			<< setw(20) << products[i].name
			<< setw(10) << products[i].price
			<< setw(10) << products[i].year
			<< endl;
	}
}


