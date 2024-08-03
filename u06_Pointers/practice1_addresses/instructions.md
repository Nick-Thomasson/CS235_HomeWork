# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Run which program? (1-5): 1

EXPLORING ADDRESSES

Original Variables!
num1's address is 0x7ffc44cc66b4 and its value is 10
num2's address is 0x7ffc44cc66b8 and its value is 15
num3's address is 0x7ffc44cc66bc and its value is -5

Pointer!
ptr is pointing to address 0

ptr is pointing to address 0x7ffc44cc66b4
The value at that address is 10
Enter a new value for it: 1

ptr is pointing to address 0x7ffc44cc66b8
The value at that address is 15
Enter a new value for it: 2

ptr is pointing to address 0x7ffc44cc66bc
The value at that address is -5
Enter a new value for it: 3


Changed Variables!
num1's address is 0x7ffc44cc66b4 and its value is 1
num2's address is 0x7ffc44cc66b8 and its value is 2
num3's address is 0x7ffc44cc66bc and its value is 3

THE END
```

## Instructions

Locate the `// TODO: Follow instructions here` comment in the source file. Do the following:

1. Create an integer pointer (e.g. `ptr`), initialize it to nullptr.
2. Display the address that the pointer is pointing to.
3. Point the pointer to the address of num1.
4. Display "ptr is pointing to address", then the address of where it is pointing to.
5. Display "The value at that address is", and then dereference the pointer to display the pointed-to value.
6. Ask the user to enter a new integer value for this variable. Overwrite the data via the pointer by using dereferencing.
7. Repeat steps 3 - 6 for num2 and num3 variables.


## Reference
Declaring a pointer:
```
DATATYPE* PTRVAR = nullptr;
```

Get address of variable:
```
&VARIABLE
```

Assigning address:
```
PTRVAR = &OTHERVARIABLE;
```

Displays pointed-to address:
```
cout << PTRVAR;
```

Displays pointed-to value:
```
cout << *PTRVAR;
```
