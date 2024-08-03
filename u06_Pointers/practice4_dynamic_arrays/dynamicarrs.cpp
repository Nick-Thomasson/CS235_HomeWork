#include <iostream>
#include <string>
using namespace std;



int main()
{
  cout << endl << "DYNAMICALLY ALLOCATING MEMORY FOR ARRAYS" << endl;

  int arraySize = 3;
  int itemCount = 0;
  string * arr{nullptr};

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Allocate space for a new array using the `arr` pointer and the `arraySize`..." << endl;

  // -------------------------------------------------------------------------


  bool done = false;
  while ( !done )
    {
      // Display array information
      cout << "arraySize: " << arraySize << ", itemCount: " << itemCount << endl;

      cout << "Enter a new item to add, or QUIT to quit: ";
      string text;
      getline( cin, text );
      cout << endl;

      if ( text == "QUIT" )
        {
          done = true;
        }
      else
        {
          // - STUDENT CODE ----------------------------------------------------------
          cout << "Adding " << text << " to arr at position " << itemCount << " and incrementing `itemCount`..." << endl;

          // -------------------------------------------------------------------------
        }

      // Check if full, resize if so
      if ( itemCount == arraySize )
        {
          cout << "Resize array..." << endl;
          int newSize = arraySize + 3;
          string * newArray{nullptr};

          // - STUDENT CODE ----------------------------------------------------------
          cout << "- Use `newArray` to create a new dynamic array with the `newSize`." << endl;


          cout << "- Use a for loop to copy data from the old array to the new array." << endl;


          cout << "- Free space at the old array's address." << endl;


          cout << "- Update our `arr` pointer to the new memory address." << endl;


          cout << "- Update the `arraySize` to the `newSize`." << endl;

          // -------------------------------------------------------------------------
        }
    }

  cout << "Display all array elements..." << endl;
  for ( int i = 0; i < itemCount; i++ )
    {
      cout << "- INDEX: " << i << ", VALUE: " << arr[i] << endl;
    }

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Free our dynamic array's memory before the program ends" << endl;

  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
}
