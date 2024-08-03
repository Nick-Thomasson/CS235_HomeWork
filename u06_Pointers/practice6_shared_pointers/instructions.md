# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
SHARED POINTERS
1. Lemon	 2. Lime

Person 1 enter your vote: 1
Person 2 enter your vote: 2
Person 3 enter your vote: 2

RESULTS:
OPTION 1: Lemon, USE COUNT: 2
OPTION 2: Lime, USE COUNT: 3

THE END
```


## Instructions

At the bottom of the program we're going to output the values being pointed to by `option1` and `option2` and display how many times each shared pointer is being referenced.

To display the value that `option1` is pointing to, just dereference the pointer:
`cout << *option1*`

To display the amount of references pointing to this pointer, use the `use_count()` function:
`cout << option1.use_count()`

Do the same for option 2.


## Reference
Declaring a shared pointer:
```
shared_ptr<TYPE> PTRNAME;
```

Multiple shared pointers can point to the same memory address (with `unique_ptr`, only one is allowed to point to an address). The `shared_ptr` type will automatically deallocate that space once it has detected that all `shared_ptr`s pointing to that address have been destroyed.

Set a shared pointer to another shared pointer's address:
```
SHAREDPTR = OTHERPTR;
```

Dereference the shared pointer:
```
*SHAREDPTR
```

Check how many shared pointers are using this memory address:
```
SHAREDPTR.use_count()
```

