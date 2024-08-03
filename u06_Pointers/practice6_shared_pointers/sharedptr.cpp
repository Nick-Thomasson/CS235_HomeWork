#include <memory>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << endl << "SHARED POINTERS" << endl;

    shared_ptr<string> option1 = shared_ptr<string>( new string( "Lemon" ) );
    shared_ptr<string> option2 = shared_ptr<string>( new string( "Lime" ) );

    shared_ptr<string> vote1;
    shared_ptr<string> vote2;
    shared_ptr<string> vote3;

    int choice;

    cout << "1. " << *option1 << "\t 2. " << *option2 << endl << endl;

    cout << "Person 1 enter your vote: ";
    cin >> choice;
    switch ( choice )
    {
        case 1: vote1 = option1; break;
        case 2: vote1 = option2; break;
    }

    cout << "Person 2 enter your vote: ";
    cin >> choice;
    switch ( choice )
    {
        case 1: vote2 = option1; break;
        case 2: vote2 = option2; break;
    }

    cout << "Person 3 enter your vote: ";
    cin >> choice;
    switch ( choice )
    {
        case 1: vote3 = option1; break;
        case 2: vote3 = option2; break;
    }

    cout << endl << "RESULTS:" << endl;
    // - STUDENT CODE ----------------------------------------------------------
    cout << "OPTION 1: ";

    cout << "OPTION 2: ";

    // -------------------------------------------------------------------------


    cout << endl << "THE END" << endl;
    return 0;
}

