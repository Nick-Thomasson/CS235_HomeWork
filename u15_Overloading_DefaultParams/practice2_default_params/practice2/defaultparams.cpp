#include <iostream>
#include <iomanip>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------

void DisplayProduct(string name, float price = 1 , int quantity = 1) {
    cout << setw(40) << name << setw(20) << price << setw(20) << quantity << endl;

}



// -------------------------------------------------------------------------

int main()
{
    cout << left << setprecision( 2 ) << fixed;
    cout << setw( 40 ) << "NAME" << setw( 20 ) << "PRICE" << setw( 20 ) << "IN STOCK" << endl;
    cout << string( 80, '-' ) << endl;

    DisplayProduct( "Playstation 1 game" );
    DisplayProduct( "Playstation 2 game", 39.99 );
    DisplayProduct( "Playstation 3 game", 49.99 );
    DisplayProduct( "Playstation 4 game", 59.99, 10 );
    DisplayProduct( "Playstation 5 game", 79.99, 30 );

    return 0;
}
