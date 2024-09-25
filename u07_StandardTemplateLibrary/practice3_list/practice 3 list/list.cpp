#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
  cout << "LIST PROGRAM" << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declare a list of strings..." << endl;
  list <string> myList;
  // -------------------------------------------------------------------------

  bool done = false;
  string input, position;
  while ( !done )
  {
      cout << "Enter a new course, or STOP to finish: ";
      getline( cin, input );
      if ( input == "STOP" )
      {
          break;
      }

      cout << "Insert at (F) FRONT or (B) BACK? ";
      getline( cin, position );
      if ( position == "F" )
      {
        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Pushing new item to front of list..." << endl;
        myList.push_front(input);
        // -------------------------------------------------------------------------
      }
      else if ( position == "B" )
      {
        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Pushing new item to back of list..." << endl;
        myList.push_back(input);
        // -------------------------------------------------------------------------
      }
  }

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterating over the list to display each element's  value..." << endl;
  while (!myList.empty())
  {
      std::cout << ' ' << myList.front();
      myList.pop_front();
  }
  // -------------------------------------------------------------------------

  cout << endl << "THE END" << endl;
  return 0;
}
