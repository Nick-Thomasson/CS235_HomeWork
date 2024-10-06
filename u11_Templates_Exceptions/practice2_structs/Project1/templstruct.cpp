#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class GenericProduct
{
public:
  string name;
  float price;
  void Display() const
  {
    cout << name << "\t $" << price << endl;
  }
};

class FoodProduct : public GenericProduct
{
public:
  int calories;
  void Display() const
  {
    cout << name << "\t $" << price << ", " << calories << " calories" << endl;
  }
};

class MovieProduct : public GenericProduct
{
public:
  string rating;
  void Display() const
  {
    cout << name << "\t $" << price << ", rated " << rating << endl;
  }
};

// - STUDENT CODE ----------------------------------------------------------
// TODO: Convert this into a templated struct/class
template <typename T> 
class ShoppingCart
{
private:
    vector<T> products;


public:
    void AddProduct(T new_product)
    {
        products.push_back(new_product);
    }

    void DisplayProducts() const
    {
        for (const T& p : products)
        {
            p.Display();
        }
    }
};
// -------------------------------------------------------------------------


int main()
{
  cout << left;

  GenericProduct product1;
  product1.name = "Ballpoint pen";
  product1.price = 2.29;

  FoodProduct product2;
  product2.name = "Burrito";
  product2.price = 1.99;
  product2.calories = 400;

  MovieProduct product3;
  product3.name = "Kiki's Delivery Service";
  product3.price = 19.99;
  product3.rating = "G";
   
  ShoppingCart<GenericProduct> cart_generic;
  cart_generic.AddProduct(product1);
  cart_generic.DisplayProducts();

  ShoppingCart<FoodProduct> cart_food;
  cart_food.AddProduct(product2);
  cart_food.DisplayProducts();

  ShoppingCart<MovieProduct> cart_movie;
  cart_movie.AddProduct(product3);
  cart_movie.DisplayProducts();

  

  return 0;
}
