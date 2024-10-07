#include "Order.h"
#include "../Utilities.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
using namespace std;

//! Default constructor
Order::Order()
{
}

//! Parameterized constructor
Order::Order( int new_id, const vector<Product>& new_products, OrderStatus new_status )
{
    Create( new_id, new_products );
    this->status = new_status;
}

//! Sets up the order, sets to processing status. ERROR CHECK: new_products cannot be empty.
void Order::Create( int new_id, const vector<Product>& new_products )
{
    this->id = new_id;
    this->status = OrderStatus::PROCESSING;
    for ( const auto& p : new_products )
    {
        this->products.push_back( p );
    }
}

//! Change the order status...
// ERROR CHECK: status must be "PROCESSING" to change to "SHIPPED".
// ERROR CHECK: status must be "SHIPPED" to change to "DELIVERED".
void Order::ChangeStatus( OrderStatus new_status )
{
    bool valid_change = false;

    if ( this->status == OrderStatus::PROCESSING && new_status == OrderStatus::SHIPPED )
    {
        valid_change = true;
    }
    else if ( this->status == OrderStatus::SHIPPED && new_status == OrderStatus::DELIVERED )
    {
        valid_change = true;
    }

    if ( valid_change )
    {
        this->status = new_status;
    }
    else
    {
        // - STUDENT CODE ----------------------------------------------------------
        // TODO: Throw exception!
       
        throw invalid_argument("Going from " + OrderStatusString(this->status) + " to " + OrderStatusString(new_status) + "was invalid");
       
     
        // -------------------------------------------------------------------------
    }
}

//! Displays information about the order
void Order::Display()
{
    cout
        << setw( 10 ) << string( "ID: " + to_string( this->id ) )
        << setw( 20 ) << string( "STATUS: " + OrderStatusString( this->status ) )
        << "PRODUCTS: ";
    DisplayAll( this->products );
    cout << endl;
}

string OrderStatusString( OrderStatus status )
{
    switch( status )
    {
        case OrderStatus::UNKNOWN:    return "UNKNOWN";    break;
        case OrderStatus::PROCESSING: return "PROCESSING"; break;
        case OrderStatus::SHIPPED:    return "SHIPPED";    break;
        case OrderStatus::DELIVERED:  return "DELIVERED";  break;
        default:                      return "INVALID";
    }
}
