# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
DYNAMICALLY ALLOCATING MEMORY FOR ARRAYS

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
- Free space at the old array's address.
- Update our `arr` pointer to the new memory address.
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

Free our dynamic array's memory before the program ends

THE END
```


## Instructions

1. After the "Allocate space for a new array" message, use the `arr` pointer to allocate memory for a dynamic array of strings of size `arraySize`.`

2. Within the loop in the else statement ("Adding ... to arr at position"), copy the `text` value to the `arr` at position `itemCount`. Afterwards, increment `itemCount` by 1.

3. During the resize ("Resizing array...") follow the steps to resize:
   1. Create a new size that is bigger than the current size
   2. Allocate space for a new bigger dynamic array
   3. Copy everything from old small array to new big array
   4. Free memory at the old small array address
   5. Update our main array pointer to the address of the new big array
   6. Update the array size to be the new bigger size

4. Before the end of the program, free the memory stored via the `arr` pointer.


## Reference
Allocate space for an array via a pointer:
```
PTR = new TYPE[ SIZE ];
```

Deallocate a dynamic array's memory:
```
delete [] PTR;
```
