#ifndef _ARRAY_H
#define _ARRAY_H

#include <string>
using namespace std;

class Array
{
public:
    Array();
    Array( int arraySize );
    ~Array();

    void AllocateSpace( int arraySize );
    void DeallocateSpace();

    void ResizeArray();
    void AddItem( string value );
    void Display();

private:
    int m_arraySize = 3;
    int m_itemCount = 0;
    string * m_ptr = nullptr;

    friend void Test_Array_Constructor();
    friend void Test_Array_AllocateSpace();
    friend void Test_Array_DeallocateSpace();
    friend void Test_Array_ResizeArray();
    friend void Test_Array_AddItem();
};

#endif
