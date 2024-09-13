#include "Array.h"
#include <iostream>
using namespace std;

/**
Default constructor: Initialize m_ptr to nullptr,
initialize m_arraySize and m_itemCount to 0.
*/
Array::Array()
{
	m_ptr = nullptr;
	m_arraySize = 0;
	m_itemCount = 0;
}

/**
Parametersized constructor: Initialize m_ptr to nullptr,
then call AllocateSpace with the `arraySize` passed in.
*/
Array::Array( int arraySize )
{
	m_ptr = nullptr;
	AllocateSpace(arraySize);
}

/**
Destructor: Call the DeallocateSpace function.
*/
Array::~Array()
{
	DeallocateSpace();
}

/**
If `m_ptr` is not pointing to nullptr then return early; we can't use this pointer.
Allocate space via the `m_ptr` pointer, using the `arraySize` given.
Also initialize `m_itemCount` to 0 and `m_arraySize` to the `arraySize` passed in.
*/
void Array::AllocateSpace( int arraySize )
{
	if (m_ptr != nullptr) {
		return;
	};
	m_ptr = new string[arraySize];
	m_itemCount = 0;
	m_arraySize = arraySize;
}

/**
If `m_ptr` is not pointing to nullptr, then free that memory
and reset `m_ptr` to nullptr.
*/
void Array::DeallocateSpace()
{
	if (m_ptr != nullptr) {
		delete[] m_ptr;
		m_ptr = nullptr;
	}
}

/**
Allocate space for a new pointer using a size larger than `m_arraySize`.
Copy the data over from the old array to the new array.
Free the memory at the old `m_ptr` location.
Update `m_ptr` to point to the new memory address.
Update `m_arraySize` to the new size.
*/
void Array::ResizeArray()
{
	int newSize = m_arraySize * 2;
	string* newPtr;
	newPtr = new string[newSize];

	for (int i = 0; i < m_itemCount; i++){
		newPtr[i] = m_ptr[i];
	}
	delete[] m_ptr;
	m_ptr = newPtr;
	m_arraySize = newSize;
	
}

/**
If the array is full then call the ResizeArray function.
Afterwards, add a new item to the `m_ptr` array at the `m_itemCount` position.
Increment `m_itemCount` afterwards.
*/
void Array::AddItem( string value )
{
}

/**
Display the index and element of each item in the `m_ptr` array.
*/
void Array::Display()
{
}


