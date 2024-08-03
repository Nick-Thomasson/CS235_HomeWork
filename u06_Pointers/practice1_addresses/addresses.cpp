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
