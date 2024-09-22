# assignment practice 3: list object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
LIST PROGRAM

Declare a list of strings...
Enter a new course, or STOP to finish: CS 134
Insert at (F) FRONT or (B) BACK? F

Pushing new item to front of list...
Enter a new course, or STOP to finish: CS 200
Insert at (F) FRONT or (B) BACK? F

Pushing new item to front of list...
Enter a new course, or STOP to finish: CS 235
Insert at (F) FRONT or (B) BACK? B

Pushing new item to back of list...
Enter a new course, or STOP to finish: STOP

Iterating over the list to display each element's  value...
CS 200
CS 134
CS 235

THE END
```

## Instructions

For this program we will be using the STL list object.

1. Near the start of the program declare a list of strings named `course_list`.

2. After the user enters a `position` if they selected "F" then use the list's `push_front` function to add the `input` to the front of the `course_list`.

3. Otherwise, if the user selected "B" then use the list's `push_back` function to add the `input` to the back of the `course_list`.

4. Before the program ends, iterate through all the elements of the list, displaying each value.


## Reference
list documentation: https://cplusplus.com/reference/list/

Declare a list:
```
list<TYPE> LISTNAME;
```

Add a new item to the front of the list:
```
LISTNAME.push_front( VALUE );
```

Add a new item to the back of the list:
```
LISTNAME.push_back( VALUE );
```

Get the size of a list:
```
LISTNAME.size()
```

Iterate over all the items in a list:
```
for ( TYPE item : LISTNAME )
{
    // item is the current element
}
```
