# u02: CS 200 review

## Setup
- In your IDE create a new project within the `u02_Review/graded_program` folder.
- Use the "Add existing item" feature to add all the .h and .cpp files to your project.
- You may need to copy "image1.txt", "image2.txt", and "image3.txt" into your project folder.



## Image files
This program has some text files with images: "image1.txt", "image2.txt", "image3.txt". These files contain characters that represent different colors.



## Instructions
Look for comments marked `// TODO:` for places to update in the code.

### Colors.cpp

This file contains the `DrawPixel` function. This function takes in `code`, a character, as an input parameter. Use branching (if statements or a switch statement) to `cout` one of the color codes based on a value.

| code value | execute            |
|------------|--------------------|
| ' '        | `cout << CLEAR;`   |
| 'K'        | `cout << BLACK;`   |
| 'R'        | `cout << RED;`     |
| 'G'        | `cout << GREEN;`   |
| 'Y'        | `cout << YELLOW;`  |
| 'B'        | `cout << BLUE;`    |
| 'M'        | `cout << MAGENTA;` |
| 'C'        | `cout << CYAN;`    |
| 'W'        | `cout << WHITE;`   |


### Image.h

Within this file you will need to add two private member variables:
- `pixelrows`, a vector of strings
- `filename`, a string


### Image.cpp

#### Image::Load

Within the `Image::Load` function you will need to add in the image loading using an input file stream. Documentation for this type is here: https://cplusplus.com/reference/fstream/ifstream/

1. Use the `input` variable's `open` function to open the `new_filename` given.
2. If `input`'s `fail` function results in true, then display an error and return early. (could not find file)
3. Set the member variable `filename` to the value given by the input parameter `new_filename`.
4. Use a while loop to read in each `line` from the `input` file, use the `getline` function.
   4a. Within the while loop, use the `push_back` function on the `pixelrows` vector to add `line` to the vector.


#### Image::Draw

Within the `Image::Draw` function you'll need to iterate all of the pixels in the file. The file format is a series of strings, with each character representing a color. For example:

```
YYYYY
YKYKY
YYYYY
YKXKY
YYYYY
```

We will have an OUTSIDE LOOP to iterate over the rows (each string line) and we will have an INSIDE LOOP to iterate over the columns (each character in the current string) to read each pixel.

Pseudocode:

```
FOR EACH ROW IN pixelrows:
    FOR EACH COLUMN IN ROW:
        DRAW PIXEL AT ROW, COLUMN
    DRAW NEW LINE
```

You can use a range-based for loop or a traditional for loop to solve this. You can iterate over an "array" with a range-based for loop like this:

```
for ( TYPE TEMPVAR : ARRAY )
{
    // Can use TEMPVAR here
}
```

Or with a traditional loop like this:
```
for ( size_t i = 0; i < ARRAY.size(); i++ )
{
    // Can use ARRAY[i] here.
}
```

Note that the OUTER LOOP is grabbing 1 string out of the array of strings `pixelrows`,
the INNER LOOP is grabbing 1 char from that 1 string.


### Program.cpp

The Program class is declared within Program.h. This class contains an `Image image` member variable as well as functionality for the menus and basic display formatting. You will need to make some modifications to the functions in order to get all the functionality working.

#### `Program::Menu_Main`

1. After the `Current image:` text is displayed, use a `cout` statement to display the `image`'s filename. Call its `GetFilename` function here.

2. After the numbered menu is displayed, call the `GetValidInput` function. The menu options are 0 to 2 so pass 0 and 2 into the function. Store the result in the `choice` variable.

3. Within the switch statement for case 1 call the `Menu_LoadImage` function.

4. Within the switch statement for case 2 call the `Menu_DrawImage` function.


#### `Program::Menu_LoadImage`

After the user enters a filename, use the `Load` function of the `image` variable, passing in the `filename` to load.


#### `Program::Menu_DrawImage`

Within this function call the `Draw` function of the `image` variable.


#### `Program::GetValidInput`

This function takes in a `min` valid value and a `max` valid value. The user will enter their `input`. After that, use a while loop: While the user's input is invalid, display an error, ask them to try again, and get their input again, storing in the `input` variable.

Valid input would be `min <= choice && choice <= max`, so invalid input is the opposite: `choice < min || choice > max`.



## Reference

### C++ basics

Declaring a variable:
`DATATYPE VARNAME;`

Assigning a value to a variable:
`VARNAME = VALUE;`

Getting user input into a non-string variable:
`cin >> VARNAME;`

Getting user input into a string variable:
`getline( cin, VARNAME );`

Flush the input buffer:
`cin.ignore();`

Output text to the screen:
`cout << "STRING LITERAL " << VARNAME << endl;`


### looping
While loop form:
```
while ( CONDITION )
{
}
```

For loop form:
```
for ( INIT; CONDITION; UPDATE )
{
}
```

Range-based for loop:
```
for ( TYPE VAR : LIST )
{
}
```

### branching
If statement form:
```
if ( CONDITIONA ) {}
else if ( CONDITIONB ) {}
else if ( CONDITIONC ) {}
else {}
```

Switch statement form:
```
switch ( VARIABLE )
{
    case VALUE1:
    break;

    case VALUE2:
    break;

    default:
}
```


### vector
Documentation: https://cplusplus.com/reference/vector/vector/

Declaring a vector of TYPEs:
`vector<TYPE> VECNAME;`

Pushing a new item into the vector:
`VECNAME.push_back( VALUE );`


### ifstream
Documentation: https://cplusplus.com/reference/fstream/ifstream/

Declaring an input file stream:
`ifstream INVAR;`

Opening a file:
`INVAR.open( VALUE );`

Checking if the file failed to open:
```
if ( INVAR.fail() )
{
}
```

Getting text input into a string variable:
`getline( INVAR, VARNAME );`


### functions
Function declaration:
`RETURNTYPE FUNCNAME( TYPE1 VAR1, TYPE2 VAR2 );`

Function definition:
```
RETURNTYPE FUNCNAME( TYPE1 VAR1, TYPE2 VAR2 )
{
}
```

Calling a function:
`FUNCNAME( VALUE );`


### classes
Declaring an object variable:
`CLASSNAME VARNAME;`

Calling an objects' member function:
`VARNAME.FUNCNAME( PARAM1, PARAM2 );`
or
`VARNAME.FUNCNAME();`
