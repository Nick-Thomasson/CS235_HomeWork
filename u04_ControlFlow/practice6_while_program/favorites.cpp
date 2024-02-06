// PROGRAM: Practice creating a program loop with while

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  bool running = true;
  int choice;

  while ( running ) // Keep program running until `running` is false.
    {
      // Display MENU
      cout << "-- MAIN MENU --" << endl;
      cout << "1. Display my favorite book" << endl;
      cout << "2. Display my favorite movie" << endl;
      cout << "3. Display my favorite game" << endl;
      cout << "4. Exit program" << endl << endl;

      // GET USER SELECTION
      cout << "SELECTION: ";
      cin >> choice;
      cout << "You chose " << choice << endl;

      // PERFORM OPERATION
      // TODO: Use a switch statement or an if statement here.
      // Option 1: Display your favorite book.
      // Option 2: Display your favorite movie.
      // Option 3: Display your favorite game.
      // Option 4: Set `running` to false, which will cause the program to quit.
      // Any other inputs: Display "unknown command!"



      cout << endl;
    }

  cout << endl << "GOODBYE" << endl;
  // Return 0 means quit program with no errors, in this context.
  return 0;
}
