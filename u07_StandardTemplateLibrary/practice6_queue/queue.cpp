#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main()
{
  cout << "QUEUE PROGRAM" << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declaring a queue of strings..." << endl;
  
  // -------------------------------------------------------------------------

  bool done = false;
  while ( !done )
  {
    cout << string( 50, '-' ) << endl;
    // - STUDENT CODE ----------------------------------------------------------
    // TODO: If the queue is empty display "Queue is empty", otherwise display the front-most item.
    
    // -------------------------------------------------------------------------

    cout << string( 50, '-' ) << endl;
    cout << "0. Quit" << endl;
    cout << "1. PUSH item" << endl;
    cout << "2. POP item" << endl;
    cout << ">> ";

    int choice;
    cin >> choice;

    switch( choice )
    {
      case 0:
      done = true;
      break;

      case 1:
      {
        string text;
        cout << "Enter new text to push on queue: ";
        cin >> text;


        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Pushing the new item into the queue..." << endl;
        
        // -------------------------------------------------------------------------
      }
      break;

      case 2:
        // TODO: Pop the front of the queue

        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Popping the front item out of the queue..." << endl;
        
        // -------------------------------------------------------------------------
      break;
    }
  }

  cout << endl << string( 50, '-' ) << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterate over queue until it's empty... show the front item then pop it..." << endl;
  
  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
  return 0;
}
