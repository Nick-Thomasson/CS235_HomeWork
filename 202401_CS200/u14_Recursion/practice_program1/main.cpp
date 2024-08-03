#include <iostream>     // Use input and output streams
using namespace std;    // Use the STandarD library

#include "functions.h"

int main()
{
    // PROGRAM STARTS HERE

    bool done = false;
    while ( !done )
    {
        cout << endl;
        cout << "******************************" << endl;
        cout << "* CS 250 Lab 4     Main Menu *" << endl;
        cout << "******************************" << endl;
    cout << "\a";
        cout << "1. Run tests" << endl;
        cout << "2. Run program" << endl;
        cout << "3. Quit" << endl;

        int choice;
        cout << endl << "SELECTION: ";
        cin >> choice;

        if ( choice == 1 )
        {
            RunTests();
        }
        else if ( choice == 2 )
        {
            Program();
        }
        else if ( choice == 3 )
        {
            done = true;
        }
    }

    // Don't automatically quit (Visual Studio)
    cout << endl << "Press enter to continue" << endl;
    cin.ignore();
    cin.get();

    // PROGRAM ENDS HERE
    return 0;
}
