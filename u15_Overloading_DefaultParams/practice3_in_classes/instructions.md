# Overloaded functions & default parameters practice

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
fileout/Default.txt written out
fileout/fileb.txt written out
fileout/filec.html written out
fileout/filec.html written out
```


## Instructions
For this program you will implement overloaded constructors for the `File` class, and work with the `CreateFile` function, which has default parameters.

- `File::File( string name )` - call the `CreateFile` function passing in the one argument.
- `File::File( string name, string ext )` - call the `CreateFile` function passing in the two arguments and "2 parameters".
- `File::File( const File& other )` - call the `CreateFile` function passing in `other.name`, `other.ext`, and "Copied file."

Within the `CreateFile` function, create an `ofstream` variable named `output`. Open the `path` and write `text` out to the file, then close the output.

After running the program there will be a "fileout" folder generated and you can view the generated files there.


## Reference
Declare an output file stream:
```
ofstream output;
```

Open a path:
```
output.open( path );
```

Write text out to an output file:
```
output << TEXTINFO;
```

Close an output file:
```
output.close();
```

