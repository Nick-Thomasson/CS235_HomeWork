#include "Product.h"

#include <vector>
using namespace std;


class ProductManager {
public:
	static vector<Product> products;
	static void AddProduct(string name, float price, int year);
	static void AddProduct(Product& product);
	static void Display();
};


 