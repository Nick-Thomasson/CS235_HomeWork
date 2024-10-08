# Templates & Exceptions practice 4: Custom exceptions

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
OK amount of friends / pizza:
```
PIZZA PARTY
How many pizza slices at pizza party? 50
How many friends at party? 4

Give each friend 12 slices of pizza
```

0 friends:
```
PIZZA PARTY
How many pizza slices at pizza party? 10
How many friends at party? 0

You should really make more friends.
Exception: Zero friends at party!
```

0 pizza:
```
PIZZA PARTY
How many pizza slices at pizza party? 0
How many friends at party? 10

You can't have a pizza party without pizza!
Exception: Zero pizza at party!
```


## Instructions

### Custom exceptions

At the top of the file declare two new exception classes - `NotEnoughFriendsException` and `NotEnoughPizzaException`. You can have these inherit from the `runtime_error` exception class (see reference for a template).

Within these exceptions' constructors you will pass the `message` to the parent constructor, and within the constructor function body you can add additional instructions. In this case, we're just going to `cout` an extra message, though usually this would be used to clean up the program or log errors.

- `NotEnoughFriendsException`: Display "You should really make more friends."
- `NotEnoughPizzaException`: Display "You can't have a pizza party without pizza!"


### Risky function definition - `int SlicesPerPerson(int friends, int pizzaSlices)`

This function does the math to figure out how many slices of pizza per person. However, since there is division, it's possible that we could end up with **divide by zero**. In this case (if `friends` is 0) we need to throw the `NotEnoughFriendsException`. You can also add an error message at this point, like "Zero friends at party!" to give more context as to why the exception was thrown.

Secondly, if there are 0 `pizzaSlices` at the party, while it won't cause an arithmetic error, it is a logic error for this pizza party planning program. If we detect this state, then we throw the `NotEnoughPizzaException` with an error message like "Zero pizza at party!".


### Calling the risky function in main()

Finally we need to make sure our program actually detects the exceptions and handles them when found. Currently, the function call is just: `slices = SlicesPerPerson(friendCount, pizzaSliceCount);`. We need to **wrap** this function call in a `try {}` statement.

The two exceptions that could be thrown are `NotEnoughFriendsException` or `NotEnoughPizzaException`, so we need two `catch` cases following the try statement. Within the catch code blocks I usually just `cout` the error message, which you can also do here. This would also be a good place to write the exceptions out to a log file if this were the real world.


## Reference

Example of inheriting from `runtime_error`, with a constructor that calls the `runtime_error` constructor:

```
class NEWEXCEPTION : public std::runtime_error
{
public:
  NEWEXCEPTION(std::string message)  // Constructor definition
    : std::runtime_error(message)    // This calls the parent class' constructor, which handles the message
  {
    // Additional code
  }
};
```

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
