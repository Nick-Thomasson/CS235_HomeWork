// PROGRAM: Practice using the C style array
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // TODO: Create a const size_t named ARRAY_SIZE, store a value of 5.
	const size_t ARRAY_SIZE = 5;

  // TODO: Create a traditional array of strings called my_classes, size should be ARRAY_SIZE.
	string my_classes[ARRAY_SIZE];

  cout << "Getting input:" << endl;

  // TODO: Use a for loop to iterate from i = 0 to ARRAY_SIZE, incrementing i (i++) each time. Within the loop:
  //  * Display "Enter class #" and then the value of i
  //  * Use the getline function to get data for my_classes[i].
  for (int i = 0; i < ARRAY_SIZE; i++) {
	  cout << "Enter class #" << i << ": ";
	  getline(cin, my_classes[i]);
  }



  cout << endl << "Resulting array:" << endl;

  // TODO: Use a for loop to go over the same range (i = 0 to ARRAY_SIZE). Within the loop:
  //  * Use cout to display the current index (i) and the class at this position (my_classes[i]).
  for (int i = 0; i < ARRAY_SIZE; i++) {
	  cout << "The current index is: " << i << endl;
	  cout << "The class at this position is: " << my_classes[i] << endl;
  }

  return 0;
}
