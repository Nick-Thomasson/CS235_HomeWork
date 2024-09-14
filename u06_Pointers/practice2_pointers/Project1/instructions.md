# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
POINTERS AND OBJECTS

PRODUCTS:
0    Pencil              1.59
1    Markers             2.39
2    Eraser              0.59

Enter index of item to modify: 0
Enter new price: $3.29
Enter new name: Notebook

UPDATED PRODUCTS:
0    Notebook            3.29
1    Markers             2.39
2    Eraser              0.59

THE END
```

## Instructions

1. Ask user to enter the INDEX of an item to modify. Store their response in the `index` variable.
2. Assign ``ptrProduct` to the address of the element from the `products` array, at the `index` given.
3. Ask the user to enter a new price for the item. Have them overwrite the price via the `ptrProduct` pointer.
4. Ask the user to enter a new name for the item. Have them overwrite the name via the `ptrProduct` pointer.



## Reference
Accessing an element of an array at some variable index:
```
ARRAY[INDEX]
```

Getting an array element's address:
```
&ARRAY[INDEX]
```

Assigning a pointer to a variable address:
```
POINTER = &VARIABLE;
```

Accessing an object's memmber variable via a pointer:
```
POINTER->MEMBERVAR
```
