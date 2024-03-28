// PROGRAM: Practice using the STL vector
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Product
{
  string name;
  float price;
};

int main()
{
  cout << fixed << setprecision(2);

  // Set up the data
  vector<Product> product_list(3);

  product_list[0].name = "Bean Burrito";
  product_list[0].price = 1.99;

  product_list[1].name = "Crunchy Taco";
  product_list[1].price = 1.79;

  product_list[2].name = "Baja Blast";
  product_list[2].price = 1.29;

  // Display the data
  cout << "MENU" << endl;
  for ( size_t i = 0; i < product_list.size(); i++ )
  {
    cout << i << ". " << product_list[i].name << " ($" << product_list[i].price << ")" << endl;
  }

  // TODO: Create an integer variable named `index`.
  int index;

  // TODO: Ask the user what they want to eat. Store their response in `index`.
  cout << "What would you like to eat?" << endl;
  cin >> index;


  // TODO: Display the name and price of what they chose, use `product_list[index]` to access the item.
  cout << "Looks like you chose, " << product_list[index].name << endl;
  cout << "This comes out to a total of $" << product_list[index].price << endl;


  cout << endl << "GOODBYE" << endl;

  return 0;
}
