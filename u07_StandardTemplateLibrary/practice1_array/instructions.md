# STL Practice 1: Array object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
ARRAY PROGRAM

1. Declare an array of strings of size 4...

2. Hard coding data into the array...

Iterating over the array to display each element index and value...
0: CS 134
1: CS 200
2: CS 235
3: CS 250

THE END
```

## Instructions

For this program we're going to look at using the STL `array` object.

1. Declare an array of strings of size 4 named `course_list`.
2. Hard-code the items at index 0 through 3 with some course names (e.g., "CS 200").
3. Use a for loop to iterate over all the elements of the array, displaying each element's index and value.


## Reference
array documentation: https://cplusplus.com/reference/array/array/

Declare an array object:
```
array<TYPE, SIZE> ARRAYNAME;
```

Access an element of the array:
```
ARRAYNAME[INDEX]
```

Get an array's size:
```
ARRAYNAME.size()
```

Iterate over an array:
```
for ( size_t i = 0; i < ARRAY.size(); i++ )
{
    // i is the index, ARRAY[i] is the value
}
```
