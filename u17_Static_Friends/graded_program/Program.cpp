#include "Program.h"

#include "RestaurantManager.h"

void Program::Run()
{
    Menu_Main();
}

void Program::Menu_Main()
{
    bool running = true;
    while ( running )
    {
        cout << string( 80, '-' ) << endl;
        RestaurantManager::Display();

        cout << endl;
        cout << "0. Exit" << endl;
        cout << "1. Create order" << endl;
        cout << "2. Prep next order" << endl;
        cout << "3. Return meal" << endl;
        cout << endl;
        cout << "Choice: ";
        int choice;
        cin >> choice;
        cout << endl;

        switch( choice )
        {
            case 0: running = false; break;
            case 1: Menu_CreateOrder(); break;
            case 2: Menu_PrepNextOrder(); break;
            case 3: Menu_ReturnMeal(); break;
        }
    }
}

void Program::Menu_CreateOrder()
{
    cout << "CREATE ORDER" << endl;
    cout << "1. breakfast combo" << endl;
    cout << "2. soup of the day" << endl;
    cout << "3. lunch combo" << endl;
    cout << endl << "Choice: ";
    int choice;
    cin >> choice;

    switch( choice )
    {
        case 1:
        RestaurantManager::CreateOrder( "breakfast combo" );
        break;

        case 2:
        RestaurantManager::CreateOrder( "soup of the day" );
        break;

        case 3:
        RestaurantManager::CreateOrder( "lunch combo" );
        break;

        default:
        cout << "Unknown option." << endl;
    }

    PressEnterToContinue();
}

void Program::Menu_PrepNextOrder()
{
    RestaurantManager::PrepNextOrder();
}

void Program::Menu_ReturnMeal()
{
    Meal returned_meal;

    try
    {
        returned_meal = RestaurantManager::ReturnMeal();
        cout << "Meal returned:" << endl;
        returned_meal.Display();
    }
    catch( const runtime_error& ex )
    {
        cout << "Exception: " << ex.what() << endl;
    }

    PressEnterToContinue();
}





//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY BELOW THIS POINT !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//! Draws a bunch of newlines to clear the screen
void Program::ClearScreen() const
{
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
