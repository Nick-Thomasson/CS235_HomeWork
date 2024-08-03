# Overloaded functions practice

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output

```
NAME                                    PRICE               IN STOCK
--------------------------------------------------------------------------------
Playstation 1 game
Playstation 2 game                      39.99
Playstation 3 game                      49.99
Playstation 4 game                      59.99               10
Playstation 5 game                      79.99               30
```


## Instructions
For this program, implement three versions of the `DisplayProduct` function. Each one will have a `void` return type, and different sets of parameters:

1. `string name` - Within this function, use this code:
   `cout << setw( 40 ) << name << endl;`

2. `string name, float price`
   `cout << setw( 40 ) << name << setw( 20 ) << price << endl;`

3. `string name, float price, int quantity`
   `cout << setw( 40 ) << name << setw( 20 ) << price << setw( 20 ) << quantity << endl;`


Afterwards in main() you can uncomment out the calls to the DisplayProduct functions.


## Reference
Functions can use the same **name** as long as they have a unique parameter list. This can mean a different amount of parameters or different types. The return type doesn't count as part of the "unique signature" of a function.

```
int Sum( int a, int b );
float Sum( float a, float b );
```
