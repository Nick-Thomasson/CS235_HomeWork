#include "GroceryStoreProgram.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


void GroceryStoreProgram::Stock( string product, float price )
{
  PrintTimestamp();
  product_prices[product] =  price;
}

void GroceryStoreProgram::CustomerEnterStore( string customer_name )
{
  Customer customer;
  PrintTimestamp();
  customer.name = customer_name;
  customers_in_store[customer_name] = customer;
}

void GroceryStoreProgram::CustomerCartAdd( string customer_name, string product_name )
{
  PrintTimestamp();
  

  Customer& customer = customers_in_store[customer_name];
  customer.products_in_cart.push(product_name);

  
}

void GroceryStoreProgram::CustomerOops( string customer_name )
{
  PrintTimestamp();
  Customer& customer = customers_in_store[customer_name];
  customer.products_in_cart.pop();
  
}

void GroceryStoreProgram::CustomerLineup( string customer_name )
{
  PrintTimestamp();
  Customer& customer = customers_in_store[customer_name];
  checkout_queue.push(customer);
  
}

void GroceryStoreProgram::Process()
{
  // TODO: Implement me

  PrintTimestamp();
  cout << "Done processing line!" << endl;

  while (!checkout_queue.empty()) {
      cout << "Customer in front of line is: " << checkout_queue.front().name;
      float totalCost = 0;

  }
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

GroceryStoreProgram::GroceryStoreProgram()
{
  cout << left << fixed << setprecision( 2 );
  minutes = 0;
  hours = 8;
}

void GroceryStoreProgram::PrintTimestamp()
{
  cout << "(" << hours << ":";
  if ( minutes < 10 ) { cout << "0"; }
  cout << minutes << ") ";

  minutes += 5;
  if ( minutes == 60 )
  {
    minutes = 0;
    hours++;
  }
}


void GroceryStoreProgram::Run()
{
  ifstream input( "../events.txt" );
  string action, product, customer;
  float price;

  while ( input >> action )
  {
    if ( action == "STOCK" )      // STOCK food price
    {
      input >> product >> price;
      Stock( product, price );
    }
    else if ( action == "ENTER" ) // ENTER name
    {
      input >> customer;
      CustomerEnterStore( customer );
    }
    else if ( action == "CART" )  // CART name food
    {
      input >> customer >> product;
      CustomerCartAdd( customer, product );
    }
    else if ( action == "OOPS" ) // OOPS name
    {
      CustomerOops( customer );
    }
    else if ( action == "LINEUP" ) // LINEUP name
    {
      input >> customer;
      CustomerLineup( customer );
    }
    else if ( action == "PROCESS" )
    {
      Process();
    }
  }
}
