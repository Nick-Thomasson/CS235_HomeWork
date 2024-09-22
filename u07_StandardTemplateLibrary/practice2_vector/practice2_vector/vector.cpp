#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  cout << "VECTOR PROGRAM" << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declare a vector of strings..." << endl;
  vector <string> myVector;
  // -------------------------------------------------------------------------

  bool done = false;
  string input;
  while ( !done )
  {
      cout << "Enter a new course, or STOP to finish: ";
      getline( cin, input );
      if ( input == "STOP" )
      {
          break;
      }

      // - STUDENT CODE ----------------------------------------------------------
      cout << endl << "Pushing new item into the vector... Press a key to continue" << endl;
          myVector.push_back(input);
      // -------------------------------------------------------------------------
  }


  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterating over the vector to display each element's index and value..." << endl;
  for (size_t i = 0; i < myVector.size(); i++) {
      cout << myVector[i] << endl;
  }
  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
  return 0;
}
