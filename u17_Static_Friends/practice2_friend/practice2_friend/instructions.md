# Friend practice

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
0    PlayStation         299.00    1995
1    PlayStation 2       299.00    2000
2    PlayStation 3       499.00    2006
3    PlayStation 4       399.00    2013
4    PlayStation 5       499.00    2020
```


## Instructions
Within main.cpp declare a new function above main() called `Display`. Its return type is `void` and it takes in one parameter: `const vector<Product>& products`. Leave it as-is for now.

Within the Product.h file specify that the Display function is a **friend** by putting the Display function's header within the class, prefixed with the keyword `friend`. This marks the function as a place that can access the private members of the class.

Back in main.cpp you can implement the Display function. The header of the table will look like this:
```
  cout << left << fixed << setprecision(2);
  cout << setw( 5 ) << "ID"
       << setw( 20 ) << "NAME"
       << setw( 10 ) << "PRICE"
       << setw( 10 ) << "YEAR"
       << endl;
  cout << string( 80, '-' ) << endl;
```

Then you can create a for loop to iterate over all of the `products` in the vector. You can then access the Product's private member variables `name`, `price`, and `year`.

Within the main() function un-comment out the Display function call.

## Reference
Specify a friend function with a class:
```
class CLASSNAME
{
friend TYPE FUNCNAME( PARAMS );
};
```
