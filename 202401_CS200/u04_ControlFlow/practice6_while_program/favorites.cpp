#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries


// - PROGRAM CODE -----------------------------------------------------------//
int main() {
bool running = true;
int choice;

while (running) {

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

// Option 1: Display your favorite book.
switch (choice) {
case 1:
cout << "Favorite Book: Harry Potter and the Goblet of Fire" << endl;
break;
// Option 2: Display your favorite movie.
case 2:
cout << "Favorite Movie: The Iron Claw" << endl;
break;
// Option 3: Display your favorite game.
case 3:
cout << "Favorite Game: League of Legends" << endl;
break;
// Option 4: Set `running` to false, which will cause the program to quit.
case 4:
running = false;
cout << "Exiting program..." << endl;
break;
// Any other inputs: Display "unknown command!"
default:
cout << "Unknown command!" << endl;
break;
}
cout << endl;
}
cout << "GOODBYE" << endl;
return 0;
}
