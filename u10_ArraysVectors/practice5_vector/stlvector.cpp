// PROGRAM: Practice using the STL vector
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string input;

  // TODO: Declare a vector of strings named my_classes.
  vector <string> my_classes;


  while ( true )
  {
    cout << "Enter class #" << my_classes.size() << ", or STOP to end: ";
    getline( cin, input );

    // TODO: If input is "STOP", then break out of the loop.
    // TODO: Otherwise, call the push_back function on the my_classes vector,
    //       passing in the input given
    if (input == "STOP") {
        break;
    }
    else {
        my_classes.push_back(input);
    }
  }

  cout << endl << "Resulting array:" << endl;
  // TODO: Iterate from i = 0 to my_classes.size(). Within the loop,
  // display each class' index (i) and value (my_classes[i]).
  for (int i = 0; i < my_classes.size(); i++) {
      cout << "The class index is: " << i << endl;
      cout << "The value stored here is: " << my_classes[i];
  }


  return 0;
}
