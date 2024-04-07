// PROGRAM: Practice using classes
// This is based off the Unit 5 Practice 1 program

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

#include "Pet.h"

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  // ------- GET USER INPUT -------
  Pet my_pet;
  my_pet.SetName( "Luna" );
  my_pet.SetAge( 5 );
  my_pet.SetAnimal( "Cat" );
  my_pet.SetBreed( "Gremlin" );

  bool running = true;
  while ( running )
  {
    my_pet.Display();
    cout << endl << "-- MAIN MENU --" << endl;
    cout << "1. Update name" << endl;
    cout << "2. Update age" << endl;
    cout << "3. Update animal" << endl;
    cout << "4. Update breed" << endl;
    cout << "---" << endl;
    cout << "0. Exit" << endl;
    cout << endl;

    int choice;
    cout << ">> ";
    cin >> choice;

    if ( choice == 1 ) // Update name
    {
      // TODO: Have user enter new name, update `my_pet`'s name via the appropriate function.

    }
    else if ( choice == 2 ) // Update age
    {
      // TODO: Have user enter new age, update `my_pet`'s age via the appropriate function.

    }
    else if ( choice == 3 ) // Update animal
    {
      // TODO: Have user enter new animal type, update `my_pet`'s animal type via the appropriate function.

    }
    else if ( choice == 4 ) // Update breed
    {
      // TODO: Have user enter new breed, update `my_pet`'s breed via the appropriate function.

    }
    else if ( choice == 0 )
    {
      running = false;
    }

    cout << endl << endl;
  }


 // Return 0 means quit program with no errors, in this context.
 return 0;
}
