#include "Program.h"
#include "Image.h"
#include "Colors.h"

#include <iostream>
using namespace std;

//! Program main menu
void Program::Menu_Main()
{
  bool menu_running = true;
  int choice;
  while ( menu_running )
  {
    ClearScreen();
    DisplayHeader( "MAIN MENU" );

    cout << "Current image: \"";

    // TODO: Call the `image` variable's GetFilename function.
    image.GetFilename();



    cout << "\"" << endl << endl;

    cout << "0. Exit" << endl << endl;
    cout << "1. Load image" << endl;
    cout << "2. Draw image" << endl;
    cout << endl;

    // TODO: Call the GetValidInput function, passing in 0 and 2, and storing the result in the `choice` variable.

    choice = GetValidInput(0, 2);


    switch( choice )
    {
    case 0:
      menu_running = false;
      break;

    case 1:
      // TODO: Call the Menu_LoadImage function.



      break;

    case 2:
      // TODO: Call the Menu_DrawImage function.



      break;
    }
  }
}

//! Menu - Asks user for name of file to load, attempts to load image
void Program::Menu_LoadImage()
{
  ClearScreen();
  DisplayHeader( "LOAD IMAGE" );

  string filename;
  cin.ignore();

  cout << "Enter filename to load: ";
  getline( cin, filename );



  // TODO: Call the `image` variable's Load function, passing in the `filename` variable.
  image.Load(filename);



  cout << endl;
  PressEnterToContinue();
}

//! Menu - Draws the currenty loaded image to the screen
void Program::Menu_DrawImage()
{
  ClearScreen();
  DisplayHeader( "DRAW IMAGE" );


  // TODO: Call the `image` variable's Draw function.

  image.Draw();


  PressEnterToContinue();
}

//! Gets input from the user, makes sure it is between min-max and returns the result
int Program::GetValidInput( int min, int max )
{
  int input;
  cout << "(" << min << "-" << max <<"): ";
  cin >> input;


  // TODO: While the input is invalid display an error and have them re-enter their selection.
  // Choice is invalid if it is less than min or greater than max.



  return input;
}




//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY BELOW THIS POINT !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//! Draws a bunch of newlines to clear the screen
void Program::ClearScreen() const
{
  cout << CLEAR;
  cout << string( 80, '\n' ); // clear screen
}

//! Formatted header to display to the screen
void Program::DisplayHeader( string title ) const
{
  cout << string( 80, '-' ) << endl
       << title << endl
       << string( 80, '-' ) << endl;
}

//! Workaround to get a "Press ENTER to continue" function working
void Program::PressEnterToContinue() const
{
  cout << endl;
  cout << endl << "Press a ENTER to continue" << endl;
  string a;
  getline( cin, a );
  getline( cin, a );
}
