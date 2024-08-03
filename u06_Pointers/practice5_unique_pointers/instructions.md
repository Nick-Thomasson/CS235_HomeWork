# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
UNIQUE POINTERS

Allocate space for a new array using the `arr` pointer and the `arraySize`...
arraySize: 3, itemCount: 0
Enter a new item to add, or QUIT to quit: cat

Adding cat to arr at position 0 and incrementing `itemCount`...
arraySize: 3, itemCount: 1
Enter a new item to add, or QUIT to quit: bat

Adding bat to arr at position 1 and incrementing `itemCount`...
arraySize: 3, itemCount: 2
Enter a new item to add, or QUIT to quit: rat

Adding rat to arr at position 2 and incrementing `itemCount`...
Resize array...
- Use `newArray` to create a new dynamic array with the `newSize`.
- Use a for loop to copy data from the old array to the new array.
- Use `move` to change ownership of the new array address to our original `arr` pointer.
- Update the `arraySize` to the `newSize`.
arraySize: 6, itemCount: 3
Enter a new item to add, or QUIT to quit: cheese

Adding cheese to arr at position 3 and incrementing `itemCount`...
arraySize: 6, itemCount: 4
Enter a new item to add, or QUIT to quit: QUIT

Display all array elements...
- INDEX: 0, VALUE: cat
- INDEX: 1, VALUE: bat
- INDEX: 2, VALUE: rat
- INDEX: 3, VALUE: cheese

THE END
```


## Instructions

This program is similar to the dynamic array program except that we will be using the `unique_ptr` smart pointer, which handles memory management for us automatically.

1. After "Allocate space for a new array" allocate space using the `unique_ptr` style (see reference below).

2. Your "Adding ... to arr at position" code here will be the same as with the previous dynamic array.

3. The Resize will be similar to before, except you'll need to use the `unique_ptr` form to allocate space to the `newArray` pointer. Secondly, instead of updating `arr` to point to `newArray`'s address, we instead need to use the `move` function to change ownership of that address (see reference below).


## Reference
Declare a unique pointer:
```
unique_ptr<TYPE> PTRNAME;
```

Allocate space for an array via a pointer:
```
PTRNAME = unique_ptr<TYPE[]>( new TYPE[SIZE] );
```

Smart pointers don't need to have their memory manually deallocated

Move ownership of an address from one pointer to another:
```
RECEIVEPTR = move( SENDPOINTER );
```
