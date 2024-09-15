#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << endl << "DYNAMICALLY ALLOCATING MEMORY FOR ARRAYS" << endl;

    int arraySize = 3;
    int itemCount = 0;
    string* arr{ nullptr };

    // - STUDENT CODE ----------------------------------------------------------
    cout << endl << "Allocate space for a new array using the `arr` pointer and the `arraySize`..." << endl;
    arr = new string[arraySize];
    // -------------------------------------------------------------------------


    bool done = false;
    while (!done)
    {
        // Display array information
        cout << "arraySize: " << arraySize << ", itemCount: " << itemCount << endl;

        cout << "Enter a new item to add, or QUIT to quit: ";
        string text;
        getline(cin, text);
        cout << endl;

        if (text == "QUIT")
        {
            done = true;
        }
        else
        {
            // - STUDENT CODE ----------------------------------------------------------
            cout << "Adding " << text << " to arr at position " << itemCount << " and incrementing `itemCount`..." << endl;
            arr[itemCount] = text;
            itemCount++;
            // -------------------------------------------------------------------------
        }

        // Check if full, resize if so
        if (itemCount == arraySize)
        {
            cout << "Resize array..." << endl;
            int newSize = arraySize + 3;
            string* newArray{ nullptr };

            // - STUDENT CODE ----------------------------------------------------------
            cout << "- Use `newArray` to create a new dynamic array with the `newSize`." << endl;
            newArray = new string[newSize];

            cout << "- Use a for loop to copy data from the old array to the new array." << endl;
            for (int i = 0; i < arraySize; i++) {
                newArray[i] = arr[i];
            }

            cout << "- Free space at the old array's address." << endl;
            delete[] arr;

            cout << "- Update our `arr` pointer to the new memory address." << endl;
            arr = newArray;

            cout << "- Update the `arraySize` to the `newSize`." << endl;
            arraySize = newSize;
            // -------------------------------------------------------------------------
        }
    }

    cout << "Display all array elements..." << endl;
    for (int i = 0; i < itemCount; i++)
    {
        cout << "- INDEX: " << i << ", VALUE: " << arr[i] << endl;
    }

    // - STUDENT CODE ----------------------------------------------------------
    cout << endl << "Free our dynamic array's memory before the program ends" << endl;
    delete[] arr;
    // -------------------------------------------------------------------------


    cout << endl << "THE END" << endl;
}
