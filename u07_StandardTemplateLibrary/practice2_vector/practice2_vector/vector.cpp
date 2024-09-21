#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  cout << "VECTOR PROGRAM" << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declare a vector of strings..." << endl;
  //
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
      cout << endl << "Pushing new item into the vector..." << endl;
      
      // -------------------------------------------------------------------------
  }


  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterating over the vector to display each element's index and value..." << endl;

  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
  return 0;
}
