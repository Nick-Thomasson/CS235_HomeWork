# STL Practice 2: vector object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
VECTOR PROGRAM

Declare a vector of strings...
Enter a new course, or STOP to finish: CS 134

Pushing new item into the vector...
Enter a new course, or STOP to finish: CS 200

Pushing new item into the vector...
Enter a new course, or STOP to finish: CS 235

Pushing new item into the vector...
Enter a new course, or STOP to finish: STOP

Iterating over the vector to display each element's index and value...
0: CS 134
1: CS 200
2: CS 235

THE END
```

## Instructions

For this program we are using the STL vector which is basically a dynamic array.

1. At the beginning of the program declare a vector of strings named `course_list`.

2. Within the while loop after the if statement the user has entered a course name in the `input` variable. Push this item into the `course_list` using the vector's `push_back` functionality.

3. Near the end of the program use a for loop to iterate over all the elements of the vector. Display each element's index and value.


## Reference
vector documentation: https://cplusplus.com/reference/vector/vector/

Declare a vector object:
```
vector<TYPE> VECNAME;
```

Add an item to the vector:
```
VECNAME.push_back( VALUE );
```

Get the size of a vector:
```
VECNAME.size()
```

