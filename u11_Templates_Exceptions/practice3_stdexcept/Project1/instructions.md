# Templates & Exceptions practice 3: The STD exception types

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
--------------------------------------------------------------------------------
DIVISION EXAMPLE
Enter a numerator and denominator, separated by a space: 5 0
invalid_argument Exception: Division by 0 not allowed!

--------------------------------------------------------------------------------
DISPLAY EXAMPLE
Enter an index between 0 and 4: 10
out_of_range Exception: Invalid index!

--------------------------------------------------------------------------------
POINTER EXAMPLE
Display good_ptr...
Item being pointed to is: 10

Display bad_pointer...
invalid_argument Exception: ptr is null!
```

## Instructions

With this program we have some risky functions that need us to check for error scenarios and throw an exception if found. We will also update main() to wrap the calls to those risky functions in try/catch statements.

### Risky functions

1. For the `Divide` function check if `denom` is 0. If this is the case, throw an `invalid_argument` exception.

2. For the `Display` function check if `index` is invalid (less than 0 or greater than/equal to `arr.size()`). If it's invalid, then throw an `out_of_range` exception.

3. For the `PtrDisplay` function check if `arr` is pointing to `nullptr`. If it is, then throw an `invalid_argument` exception.


### Updating function calls

1. Wrap the function call `quotient = Divide( num, denom );` in a try/catch statement. This risky function might throw an `invalid_argument` exception so that is what you'll listen for in the catch portion. When the exception is caught, display what the exception was (`ex.what()`).

2. Wrap the function call `Display(my_array, index);` in a try/catch statement. The catch should listen for an `out_of_range` exception. Display the error message when detected.

3. There are two calls to `PtrDisplay`, each should have **their own** try/catch blocks surrounding them. For both, listen for an `invalid_argument` exception and display the error when detected.


## Reference
Exception family documentation: https://en.cppreference.com/w/cpp/error/exception

THROWing exceptions - Detect problem states and THROW as a result within the function that could cause problems.
```
void SOME_RISKY_FUNCTION( PARAMS )
{
  if ( BAD_SCENARIO )
  {
    throw SOME_EXCEPTION( "Message!" );
  }
  // ...
}
```

TRY/CATCH exceptions - Wrap the function call to the risky function in try, catch any possible exception types with catch.

```
try
{
  SOME_RISKY_FUNCTION( XYZ );
}
catch( const SOME_EXCEPTION& ex )
{
  cout << "Exception: " << ex.what() << endl;
}
```
