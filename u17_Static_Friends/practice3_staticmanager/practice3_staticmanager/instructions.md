# Static and friends practice: manager class

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
LAUNCH PRICES

ID   NAME                PRICE     YEAR
--------------------------------------------------------------------------------
0    NES                 199.00    1985
1    SNES                199.00    1991
2    Nintendo 64         199.00    1996
3    GameCube            199.00    2001
4    Wii                 249.00    2006
5    Wii U               299.00    2012
6    Nintendo Switch     299.00    2017
```


## Instructions
Within Product.h the `Product` class is declared and `ProductManager` is also specified as a friend class. The Product class has three private member variables: `name`, `price`, and `year`. These normally wouldn't be accessible to functions or classes outside of itself but since ProductManager has been specified as a friend the manager class will be able to access these.

Within ProductManager.h declare the `ProductManager` class with the following:

- `AddProduct`, a static void function that takes in a `Product` as its parameter.
- `AddProduct`, a static void function that takes in a `name`, `price`, and `year` as its parameters.
- `Display`, a static void function.
- `products`, a static vector of `Product` objects.

Within ProductManager.cpp you will need to initialize the static member vector:
```
vector<Product> ProductManager::products;
```

And define each of its member functions:

### `void ProductManager::AddProduct( Product new_product )`
Push the `new_product` into the `products` vector.

### `void ProductManager::AddProduct( string name, float price, int year )`
Create a new `Product` object, initialize it with the `name`, `price`, and `year`, and push this object into the `products` vector.

### `void ProductManager::Display()`
Use this code as the header:

```
  cout << left << fixed << setprecision(2);
  cout << setw( 5 ) << "ID"
       << setw( 20 ) << "NAME"
       << setw( 10 ) << "PRICE"
       << setw( 10 ) << "YEAR"
       << endl;
  cout << string( 80, '-' ) << endl;
```

then iterate through all of the `products` and display each item's index (`i`), name, price, and yeaer.


## main

Uncomment out the contents of main() once you've implemented everything.


## Reference
STL Vector: https://cplusplus.com/reference/vector/vector/

Define a friend class:
```
class CLASSNAME
{
    friend class OTHERCLASS;
};
```
