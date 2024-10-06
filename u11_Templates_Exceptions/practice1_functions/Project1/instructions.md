# Templates & Exceptions practice 1: Templated functions

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
FIELD               DATA
--------------------------------------------------------------------------------
product             USB-C cable pack
price               9.99
quantity            5
sold_out            0
```


## Instructions

At the top of the file are three overloaded functions for `DisplayValue`. Each one is distinct by having a different parameter list - one has a `string` as its second parameter, one has an `int` as its second, and one has a `float` as its second.

However, writing a new display function for every possible data type is gross and ugly, so instead we're going to write a new TEMPLATED DisplayValue function. By setting the second parameter's type to `T`, it can now receive **any** data type and work with it.

Write the templated DisplayValue function and remove the previous versions. The code in main() will continue working but now our code is much cleaner and simpler.


## Reference
Templated function example:
```
template <typename T>
TYPE FUNCNAME( int PARAM1, string PARAM2, T PARAM3 )
{
    // Can use "T" as a data type
}
```
