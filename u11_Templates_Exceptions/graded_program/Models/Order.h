#ifndef _Order_Header
#define _Order_Header

#include "Product.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum class OrderStatus
{
    UNKNOWN = 0,
    PROCESSING = 1,
    SHIPPED = 2,
    DELIVERED = 3
};

string OrderStatusString( OrderStatus status );

//! An Order, including from which store, who to deliver to, and the order status
class Order
{
    public:
    Order();
    Order( int new_id, const vector<Product>& new_products, OrderStatus new_status );
    void Create( int new_id, const vector<Product>& new_products );
    void ChangeStatus( OrderStatus new_status );
    void Display();

    private:
    //! ID of the order
    int id{-1};
    //! OrderStatus of the order
    OrderStatus status{OrderStatus::UNKNOWN};
    //! List of products
    vector<Product> products;
};

#endif
