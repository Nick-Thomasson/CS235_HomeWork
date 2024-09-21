#ifndef _GROCERY_STORE_PROGRAM_H
#define _GROCERY_STORE_PROGRAM_H

#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <fstream>
using namespace std;

#include "Customer.h"

class GroceryStoreProgram
{
public:
    GroceryStoreProgram();

    void Run();

    void Stock( string product, float price );
    void CustomerEnterStore( string customer_name );
    void CustomerCartAdd( string customer_name, string product_name );
    void CustomerOops( string customer_name );
    void CustomerLineup( string customer_name );
    void Process();
    void PrintTimestamp();

private:
    //! The queue of customers waiting in line to purchase their items
    queue<Customer> checkout_queue;

    //! The lookup table of products' prices
    map<string, float> product_prices;

    //! The lookup table of all customers in the store, by name
    map<string, Customer> customers_in_store;

    //! Current time in the simulation
    int minutes, hours;

    friend void Tester_GroceryStoreProgram();
};

#endif
