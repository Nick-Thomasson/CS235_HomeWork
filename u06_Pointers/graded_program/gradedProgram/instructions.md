# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
Program output:
```
Create array...

Allocate space...

Add items...

Resize array...

Display array...
0: cat
1: bat
2: rat
3: mat
```

Tests passing:
```
[PASS] Test Constructor - Default constructor sets m_ptr to nullptr?
[PASS] Test Constructor - Parameterized constructor sets initializes size?
[PASS] Test Constructor - Parameterized constructor sets initializes size?
[PASS] Test AllocateSpace - Allocate space and set array size?
[PASS] Test AllocateSpace - Allocate space and set array size?
[PASS] Test DeallocateSpace - Sets ptr to nullptr?
[PASS] Test AddItem - New item added to array?
[PASS] Test AddItem - Two items added to array?
[PASS] Test AddItem - Adding more items triggerse resize?
[PASS] Test Resize - Resize works?
```


## Instructions

For the graded program you will be implementing functionality for the `Array` class, which will wrap a basic dynamic array. You will be working within the Array.cpp file, but also use Array.h for reference. The Array class has three member variables:

- `int m_arraySize`
- `int m_itemCount`
- `string * m_ptr`

Once you implement the functions the automated tests should all pass. You can also view a basic program using this Array in the Program.cpp file, though you don't need to edit anything there.

### Array::Array()
Default constructor: Initialize m_ptr to nullptr,
initialize m_arraySize and m_itemCount to 0.


### Array::Array( int arraySize )
Parametersized constructor: Initialize m_ptr to nullptr,
then call AllocateSpace with the `arraySize` passed in.


### Array::~Array()
Destructor: Call the DeallocateSpace function.


### void Array::AllocateSpace( int arraySize )
If `m_ptr` is not pointing to nullptr then return early; we can't use this pointer.
Allocate space via the `m_ptr` pointer, using the `arraySize` given.
Also initialize `m_itemCount` to 0 and `m_arraySize` to the `arraySize` passed in.


### void Array::DeallocateSpace()
If `m_ptr` is not pointing to nullptr, then free that memory
and reset `m_ptr` to nullptr.


### void Array::ResizeArray()
Allocate space for a new pointer using a size larger than `m_arraySize`.
Copy the data over from the old array to the new array.
Free the memory at the old `m_ptr` location.
Update `m_ptr` to point to the new memory address.
Update `m_arraySize` to the new size.


### void Array::AddItem( string value )
If the array is full then call the ResizeArray function.
Afterwards, add a new item to the `m_ptr` array at the `m_itemCount` position.
Increment `m_itemCount` afterwards.


### void Array::Display()
Display the index and element of each item in the `m_ptr` array.
