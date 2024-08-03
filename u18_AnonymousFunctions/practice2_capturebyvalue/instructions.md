# Anonymous function practice 2: By-value capture

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Vector:
[0=bread, 1=cheese, 2=lettuce, 3=tomato, 4=mayo, 5=bread]

Search for which term? bread
Item "bread" found at position 0
Item "bread" found at position 5
```


## Instructions
For this program I've already set up the anonymous function, which takes this form:
```
[CAPTURE](PARAMETERS) -> RETURNTYPE {
    // FUNCTION BODY
}( ARGUMENTS );
```

In this example we're using `[=]` to capture all in-scope variables as a pass-by-value. This means that the data *cannot change within the anonymous function*, but we can access any variables that exist at this scope.

Within the function body write out a linear search over `data` and if `findme` is found then just display a message that the search term was found at position `i`.


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
