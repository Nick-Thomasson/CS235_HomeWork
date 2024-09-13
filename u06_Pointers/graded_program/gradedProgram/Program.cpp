#include "Program.h"
#include "Array.h"
#include <iostream>
using namespace std;

void Program()
{
    Array array;
    int choice;
    int arraySize;
    string item;
    bool running = true;

    while (running) {
       
        cout << "0..... Exit Program..." << endl;
        cout << "1..... Create array..." << endl;
        cout << "2..... Allocate space... " << endl;
        cout << "3..... Add items..." << endl;
        cout << "4..... Resize array..." << endl;
        cout << "5..... Display array..." << endl;

      
        cout << "Enter a number: " << endl;
        cin >> choice;

        // Handle the user’s choice
        switch (choice)
        {
        case 0:
            cout << "You chose 0..... Quitting Program....." << endl;
            running = false; 
            break;

        case 1:
            cout << "You chose 1..... Create array..." << endl;
            cout << "Please enter the array size: " << endl;
            cin >> arraySize;
            array = Array(arraySize);
            cout << "You've created an array of size: " << arraySize << endl;
            break;

        case 2:
            cout << "You chose 2..... Allocate space..." << endl;
            array.AllocateSpace(arraySize);
            cout << "Space allocated for " << arraySize << endl;
           
            break;

        case 3:
            cout << "You chose 3..... Add items..." << endl;
            cout << "Please add the item (string): ";
            cin >> item;
            array.AddItem(item);
            cout << "You've added " << item << endl;

            break;

        case 4:
            cout << "You chose 4..... Resize array..." << endl;
            array.ResizeArray(); 
            cout << "The array has been updated to " << arraySize * 2 << endl;
            break;

        case 5:
            cout << "You chose 5..... Display array..." << endl;
            array.Display(); 
            break;

        default:
            cout << "Enter a valid number please! (0 - 5)" << endl;
            break;
        }
    }
}
