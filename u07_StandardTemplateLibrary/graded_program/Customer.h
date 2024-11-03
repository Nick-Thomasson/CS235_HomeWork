#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include <vector>
#include <string>
#include <stack>
using namespace std;

#include "Product.h"

struct Customer
{
    string name;
    stack<string> products_in_cart;
};

#endif
