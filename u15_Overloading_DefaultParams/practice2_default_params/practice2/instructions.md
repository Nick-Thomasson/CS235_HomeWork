# Default parameters practice

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

Copy your functions from the Overloaded Function practice.

For this program you will remove the two extra `DisplayProduct` functions that have 1 and 2 parameters, and will add add default parameter values to the version with 3 parameters.

To set a default value for a function's parameters you add `= VALUE` after the parameter name. This usually goes in a function declaration but not the definition, but in this program we have everything in the .cpp file.



## Reference
Function header with default parameters:
```
TYPE FUNCNAME( TYPE PARAM = VALUE )
```
