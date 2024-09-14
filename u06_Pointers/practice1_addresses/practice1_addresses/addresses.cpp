#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << endl << "EXPLORING ADDRESSES" << endl;
    
    int num1 = 10, num2 = 15, num3 = -5;
    cout << left;

    cout << endl << "Original Variables!" << endl;
    cout << setw( 20 ) << "VARIABLE"  << setw( 20 ) << "ADDRESS"  << setw( 20 ) << "VALUE" << endl;
    cout << string( 80, '-' ) << endl;
    cout << setw( 20 ) << "num1"      << setw( 20 ) << &num1      << setw( 20 ) << num1 << endl;
    cout << setw( 20 ) << "num2"      << setw( 20 ) << &num2      << setw( 20 ) << num2 << endl;
    cout << setw( 20 ) << "num3"      << setw( 20 ) << &num3      << setw( 20 ) << num3 << endl;

    cout << endl << "Pointer!" << endl;

    // - STUDENT CODE ----------------------------------------------------------
    // TODO: Follow instructions here

    bool running = true;
    int choice;

    cout << "Enter number to edit: " << endl;
    cin >> choice;

    if (choice == 1) {
        int* ptr = nullptr;
        cout << "You chose num1" << endl;
        cout << "This pointer is pointing to addres - " << ptr << endl;
        ptr = &num1;
        cout << "ptr is pointing to address - " << ptr << endl;
        cout << "The value at that address is - " << *ptr << endl;
        cout << "Please enter a new integer value for this integer: " << endl;
        cin >> *ptr;
        cout << "The updated value is now: " << *ptr << endl;
    }

    if (choice == 2) {
        int* ptr = nullptr;
        cout << "You chose num2" << endl;
        cout << "This pointer is pointing to addres - " << ptr << endl;
        ptr = &num2;
        cout << "ptr is pointing to address - " << ptr << endl;
        cout << "The value at that address is - " << *ptr << endl;
        cout << "Please enter a new integer value for this integer: " << endl;
        cin >> *ptr;
        cout << "The updated value is now: " << *ptr << endl;
    }


    if (choice == 3) {
        int* ptr = nullptr;
        cout << "You chose num3" << endl;
        cout << "This pointer is pointing to addres - " << ptr << endl;
        ptr = &num3;
        cout << "ptr is pointing to address - " << ptr << endl;
        cout << "The value at that address is - " << *ptr << endl;
        cout << "Please enter a new integer value for this integer: " << endl;
        cin >> *ptr;
        cout << "The updated value is now: " << *ptr << endl;
    }



    // -------------------------------------------------------------------------

    cout << endl << "Changed Variables!" << endl;
    cout << setw( 20 ) << "VARIABLE"  << setw( 20 ) << "ADDRESS"  << setw( 20 ) << "VALUE" << endl;
    cout << string( 80, '-' ) << endl;
    cout << setw( 20 ) << "num1"      << setw( 20 ) << &num1      << setw( 20 ) << num1 << endl;
    cout << setw( 20 ) << "num2"      << setw( 20 ) << &num2      << setw( 20 ) << num2 << endl;
    cout << setw( 20 ) << "num3"      << setw( 20 ) << &num3      << setw( 20 ) << num3 << endl;

    cout << endl << "THE END" << endl;
    return 0;
}
