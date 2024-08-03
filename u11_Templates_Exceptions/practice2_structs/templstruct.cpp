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
class ShoppingCart
{
private:
  vector<GenericProduct> products_generic;
  vector<FoodProduct> products_food;
  vector<MovieProduct> products_movie;

public:
  void AddProduct( GenericProduct new_product )
  {
    products_generic.push_back( new_product );
  }

  void AddProduct( FoodProduct new_product )
  {
    products_food.push_back( new_product );
  }

  void AddProduct( MovieProduct new_product )
  {
    products_movie.push_back( new_product );
  }

  void DisplayProducts() const
  {
    for ( const GenericProduct& p : products_generic )
      {
        p.Display();
      }

    for ( const FoodProduct& p : products_food )
      {
        p.Display();
      }

    for ( const MovieProduct& p : products_movie )
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

  ShoppingCart cart;
  cart.AddProduct( product1 );
  cart.AddProduct( product2 );
  cart.AddProduct( product3 );

  cart.DisplayProducts();

  return 0;
}
