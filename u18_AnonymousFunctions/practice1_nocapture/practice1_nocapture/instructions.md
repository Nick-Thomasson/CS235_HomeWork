# Anonymous function practice 1: No capture

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Search for which term? mayo
Result: 3
```


## Instructions
For this program I've already set up the anonymous function, which takes this form:
```
[CAPTURE](PARAMETERS) -> RETURNTYPE {
    // FUNCTION BODY
}( ARGUMENTS );
```

Each part has been split into its own line and you will implement a basic *linear search* within the anonymous function's body. Iterate over all of the elements of the `input` vector checking if each one matches the `findme` parameter. If it matches, return the current index `i`.

Otherwise, if the for loop completes and nothing has been returned, keep the `return -1;` to represent nothing found.


## Reference
Anonymous function form:
```
[CAPTURE](PARAMETERS) -> RETURNTYPE {
    // FUNCTION BODY
}( ARGUMENTS );
```

Capture types:
- `[]` - No capture; don't pull any variables from surrounding scope.
- `[=]` - Capture in-scope variables by-value.
- `[VAR]` - Capture VAR by-value.
- `[&]` - Capture in-scope variables by-reference.
- `[&VAR]` - Capture VAR by-reference.
