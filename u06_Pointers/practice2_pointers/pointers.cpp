#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Product
{
    string name;
    float price;
};

int main()
{
    cout << endl << "POINTERS AND OBJECTS" << endl;

    Product products[3];
    products[0].name = "Pencil";
    products[0].price = 1.59;

    products[1].name = "Markers";
    products[1].price = 2.39;

    products[2].name = "Eraser";
    products[2].price = 0.59;

    Product* ptrProduct = nullptr;

    cout << endl << "PRODUCTS:" << endl;
    for ( int i = 0; i < 3; i++ )
    {
        cout << left
            << setw( 5 ) << i
            << setw( 20 ) << products[i].name
            << setw( 10 ) << products[i].price << endl;
    }

    int index;



    // - STUDENT CODE ----------------------------------------------------------

    // -------------------------------------------------------------------------



    cout << endl << "UPDATED PRODUCTS:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << left
            << setw(5) << i
            << setw(20) << products[i].name
            << setw(10) << products[i].price << endl;
    }

    cout << endl << "THE END" << endl;
    return 0;
}

