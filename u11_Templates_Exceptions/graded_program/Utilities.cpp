#include "Utilities.h"


//! TODO: Remove these here (templated definition goes in .h file)
void DisplayAll( vector<Order> objects )
{
    for ( size_t i = 0; i < objects.size(); i++ )
    {
        cout << i << ". ";
        objects[i].Display();
    }
}

void DisplayAll( vector<PaymentMethod> objects )
{
    for ( size_t i = 0; i < objects.size(); i++ )
    {
        cout << i << ". ";
        objects[i].Display();
    }
}

void DisplayAll( vector<Product> objects )
{
    for ( size_t i = 0; i < objects.size(); i++ )
    {
        cout << i << ". ";
        objects[i].Display();
    }
}



// - Helper functions -------------------------------------------------------//
int DisplayMenu( vector<string> options, bool zeroToReturn /*= true*/ )
{
    if ( zeroToReturn )
    {
        cout << "0. BACK" << endl;
    }
    for ( size_t i = 0; i < options.size(); i++ )
    {
        if ( zeroToReturn ) { cout << i+1; }
        else                { cout << i;   }

        cout << ". " << options[i] << endl;
    }

    int choice;
    if ( zeroToReturn )
    {
        choice = GetValidInput( 0, options.size() );
    }
    else
    {
        choice = GetValidInput( 0, options.size()-1 );
    }

    return choice;
}

//! Gets input from the user, makes sure it is between min-max and returns the result
int GetValidInput( int min, int max )
{
  int input;
  cout << "(" << min << "-" << max <<"): ";
  cin >> input;
  while ( input < min || input > max )
  {
    cout << "INVALID SELECTION! Try again." << endl;
    cout << ">> ";
    cin >> input;
  }
  return input;
}

//! Draws a bunch of newlines to clear the screen
void ClearScreen()
{
  cout << string( 80, '\n' ); // clear screen
}

//! Formatted header to display to the screen
void DisplayHeader( string title )
{
  cout << string( 80, '-' ) << endl
       << title << endl
       << string( 80, '-' ) << endl;
}

//! Workaround to get a "Press ENTER to continue" function working
void PressEnterToContinue()
{
  cout << endl;
  cout << endl << "Press a ENTER to continue" << endl;
  string a;
  getline( cin, a );
  getline( cin, a );
}



