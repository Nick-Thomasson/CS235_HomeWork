#include "GroceryStoreProgram.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**
@param  product          The name of the product to be stocked on the shelves
@param  price            The price of the product to be stocked on the shelves
*/
void GroceryStoreProgram::Stock( string product, float price )
{
  PrintTimestamp();
  // TODO: Implement me
}

/**
@param  customer          The name of the customer who has entered the store
*/
void GroceryStoreProgram::CustomerEnterStore( string customer_name )
{
  PrintTimestamp();
  // TODO: Implement me
}

/**
@param  customer          The name of the customer who is adding an item to their cart
@param  product           The name of the product that the customer is adding to their cart
*/
void GroceryStoreProgram::CustomerCartAdd( string customer_name, string product_name )
{
  PrintTimestamp();
  // TODO: Implement me
}

/**
@param  customer          The name of the customer who is putting an item back/removing from cart
*/
void GroceryStoreProgram::CustomerOops( string customer_name )
{
  PrintTimestamp();
  // TODO: Implement me
}

/**
@param  customer          The name of the customer who is lining up in the checkout queue
*/
void GroceryStoreProgram::CustomerLineup( string customer_name )
{
  PrintTimestamp();
  // TODO: Implement me
}

void GroceryStoreProgram::Process()
{
  // TODO: Implement me

  PrintTimestamp();
  cout << "Done processing line!" << endl;
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
