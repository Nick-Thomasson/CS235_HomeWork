// PROGRAM: Practice using the STL vector
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  cout << "MY CLASSES v3" << endl << endl;

  string new_class;
  char again = 'Y';

  // 1. TODO: Declare a vector of strings named my_classes.
  vector<string> my_classes;

  do 
  {
    cout << "Enter class #" << my_classes.size() << ": ";
    getline( cin, new_class );

    // 2. TODO: Push the `new_class` variable into the `my_classes` vector.
    my_classes.push_back( new_class );

    cout << "Enter another? (Y/N): ";
    cin >> again;
    again = toupper( again );
    cin.ignore();
    cout << endl;
  } while ( again == 'Y' );


  cout << endl << "Resulting array:" << endl;
  // 3. TODO: Create a for loop that iterates over all the elements of `my_classes`.
  // Within the loop, display the index and the element.
  for ( size_t i = 0; i < my_classes.size(); i++ )
  {
    cout << i << " = " << my_classes[i] << endl;
  }

  return 0;
}
