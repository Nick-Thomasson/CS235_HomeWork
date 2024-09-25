#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
  cout << "STACK PROGRAM" << endl;


  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declaring a stack of strings..." << endl;
  stack <string> myStack;
  // -------------------------------------------------------------------------

  bool done = false;
  while ( !done )
  {
    cout << string( 50, '-' ) << endl;

    // - STUDENT CODE ----------------------------------------------------------
    // TODO: If the stack is empty display "Stack is empty", otherwise display the top-most item.
    if (myStack.empty()) {
        cout << "Stack is empty!!" << endl;
    }
    else {
        cout << "The top stack is currently " << myStack.top();
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
        cout << "Enter new text to push on stack: ";
        getline(cin, text);

        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Pushing the new item onto the stack..." << endl;
        cout << "The word " << text << " has just been added to the stack!" << endl;
        myStack.push(text);
        
        // -------------------------------------------------------------------------
      }
      break;

      case 2:
        // - STUDENT CODE ----------------------------------------------------------
        cout << endl << "Popping the top item off the stack..." << endl;
        cout << "The word " << myStack.top() << " has just been popped off the stack!" << endl;
        myStack.pop();
       
        // -------------------------------------------------------------------------
      break;
    }
  }

  cout << endl << string( 50, '-' ) << endl;


  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterate over stack until it's empty... show the top item then pop it..." << endl;
  while (!myStack.empty()) {
      cout << "TOP OF STACK: " << myStack.top() << endl;
      myStack.pop();
  }
  // -------------------------------------------------------------------------

  cout << endl << "THE END" << endl;
  return 0;
}
