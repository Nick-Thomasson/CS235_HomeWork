#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main()
{
  cout << "QUEUE PROGRAM" << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declaring a queue of strings..." << endl;
  queue <string> myQueue;
  // -------------------------------------------------------------------------

  bool done = false;
  while ( !done )
  {
    cout << string( 50, '-' ) << endl;
    // - STUDENT CODE ----------------------------------------------------------
    // TODO: If the queue is empty display "Queue is empty", otherwise display the front-most item.
    if (myQueue.empty()) {
        cout << "Looks like the queue is empty!" << endl;
    }
    else {
        cout << "The front-most item is currently: " << myQueue.front();
    }
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
        cin.ignore();
        getline(cin, text);


        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Pushing " << text << " into the queue..." << endl;
        myQueue.push(text);
        // -------------------------------------------------------------------------
      }
      break;

      case 2:
        // TODO: Pop the front of the queue

        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Popping the front item out of the queue..." << endl;
        myQueue.pop();
        // -------------------------------------------------------------------------
      break;
    }
  }

  cout << endl << string( 50, '-' ) << endl;

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterate over queue until it's empty... show the front item then pop it..." << endl;
  while (!myQueue.empty()) {
      cout << myQueue.front() << endl;
      myQueue.pop();
  }
  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
  return 0;
}
