// PROGRAM: Practice using the STL array
#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
  // TODO: Declare an array object of strings, size 5. Name it my_classes.
	array<string, 5> my_classes;


  cout << "Getting input:" << endl;

  // TODO: Use a for loop from i = 0 to my_classes.size().
  // Within the loop, ask the user to enter class # i, get their input and store it in the array at my_classes[i].
  for (int i = 0; i < my_classes.size(); i++) {
	  cout << "Please enter the class# " << i << endl;
	  getline(cin, my_classes[i]);
  }


  cout << endl << "Resulting array:" << endl;

  // TODO: Use a for loop from i = 0 to my_classes.size().
  // Within the loop, display the index (i) and element (my_classes[i]).
  for (int i = 0; i < my_classes.size(); i++) {
	  cout << "The index is: " << i << endl;
	  cout << "And the element is: " << my_classes[i] << endl;
  }


  return 0;
}
