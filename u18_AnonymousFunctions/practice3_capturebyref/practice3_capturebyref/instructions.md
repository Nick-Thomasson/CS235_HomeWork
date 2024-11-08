# Anonymous function practice 3: By-reference capture

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Vector before anonymous function:
[0=bread, 1=cheese, 2=lettuce, 3=tomato, 4=mayo, 5=bread]

Search for which term? bread
Replace with what? toast
Item #0 replace bread with toast
Item #5 replace bread with toast

Vector after anonymous function:
[0=toast, 1=cheese, 2=lettuce, 3=tomato, 4=mayo, 5=toast]
```


## Instructions
For this program I've already set up the anonymous function, which takes this form:
```
[CAPTURE](PARAMETERS) -> RETURNTYPE {
    // FUNCTION BODY
}( ARGUMENTS );
```

Here we have `[&]` for the capture clause which captures all in-scope variables by-reference so we can modify the variables within the anonymous function's body.

Implement another linear search but whenever the `findme` search term is found replace the item (`data[i]`) with the `replacewith` value.

After the anonymous function is ran the `data` vector will show the changes.


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
