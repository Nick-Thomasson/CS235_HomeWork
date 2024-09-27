# STL graded program: Grocery store simulator

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
```


## Instructions

### Structures

We will be working within the **GroceryStoreProgram** files. This grocery store contains the following member variables:

1. `queue<Customer> checkout_queue;` - This represents the list of all the Customers currently standing in line waiting to purchase their items.

2. `map<string, float> product_prices;` - This represents the lookup table of all products' prices.

3. `map<string, Customer> customers_in_store;` - This represents the list of all Customers currently in the store, searchable by customer name.


Additionally, the **Customer** struct has the following member variables:

1. `string name;` - The customer's name

2. `stack<string> products_in_cart;` A stack of items currently in the customer's basket/cart.


And the final structure to take note of is the Product, which contains:

1. `string name;` - The name of the product

2. `float price;` - The cost of the product


### GroceryStoreProgram functionality

#### void GroceryStoreProgram::Stock( string product, float price )

INPUT PARAMETERS:
@param  product          The name of the product to be stocked on the shelves
@param  price            The price of the product to be stocked on the shelves

Related member variable: map<string, float> product_prices

Use the `product` as the key and the `price` as the value, adding the data to the `product_prices` map.


#### void GroceryStoreProgram::CustomerEnterStore( string customer_name )

INPUT PARAMETER:
@param  customer          The name of the customer who has entered the store

Related member variable:  map<string, Customer> customers_in_store
Use the `customer_name` as the key for a new item in the `customers_in_store` map.

Since this is a `Customer` object, make sure to set its `name` member variable.


#### void GroceryStoreProgram::CustomerCartAdd( string customer_name, string product_name )

INPUT PARAMETERS:
@param  customer          The name of the customer who is adding an item to their cart
@param  product           The name of the product that the customer is adding to their cart

Access the customer at the `customer` key. The Customer object contains a `products_in_cart` stack, push the new `product` onto that stack.


#### void GroceryStoreProgram::CustomerOops( string customer_name )

INPUT PARAMETER:
@param  customer          The name of the customer who is putting an item back/removing from cart

Related member variable:  GroceryStoreProgram - map<string, Customer> customers_in_store
                          Customer - stack<string> products_in_cart
                          
Related member variable:  GroceryStoreProgram - map<string, Customer> customers_in_store
                          Customer - stack<string> products_in_cart;
                          
Access the customer at the `customer` key. The Customer object contains a `products_in_cart` stack, use the pop function to remove the last-added item from their cart.


#### void GroceryStoreProgram::CustomerLineup( string customer_name )

INPUT PARAMETER:
@param  customer          The name of the customer who is lining up in the checkout queue

Related member variable:  queue<Customer> checkout_queue
                          map<string, Customer> customers_in_store
                          
Access the customer at the `customer` key in the `customers_in_store` map.
Push this customer into the `checkout_queue`.


#### void GroceryStoreProgram::Process()

Related member variables:   GroceryStoreProgram - queue<Customer> checkout_queue
                            GroceryStoreProgram - map<string, float> product_prices
                            Customer - stack<string> products_in_cart
                            
This function will process everybody who is currently in the `checkout_queue`.

1. While the checkout queue is not empty:
  a. Display the name of the customer at the front of the checkout queue.
  b. Create a float variable to store the total cost of the transaction, initialize to 0.
  c. For the front customer, while their `products_in_cart` stack is not empty:
    I. Get the price of the next item - use the `product_prices` and the key of the product name.
    II. Add the product price to your total variable.
    III. Display the front item in the customer's cart and the price.
    IV. Pop the top item from the `products_in_cart`.
  d. After the while loop, display that checkout is done and the total amount of money.
  e. Pop the customer from the checkout queue.

Hints:
- You can get the next customer in line with: `checkout_queue.front()`.

- You can access Customer member variables further: `checkout_queue.front().name`

- You can access the next customer's next item in cart with: `checkout_queue.front().products_in_cart.top()`

- You can get the price of an item with `product_prices[ KEY ]`. The key will be the product name, which corresponds to `checkout_queue.front().products_in_cart.top()`.
    

## Reference
stack documentation: https://cplusplus.com/reference/stack/stack/
queue documentation: https://cplusplus.com/reference/queue/queue/
map documetation:    https://cplusplus.com/reference/map/map/


private:
    //! The queue of customers waiting in line to purchase their items
    queue<Customer> checkout_queue;

    //! The lookup table of products' prices
    map<string, float> product_prices;

    //! The lookup table of all customers in the store, by name
    map<string, Customer> customers_in_store;