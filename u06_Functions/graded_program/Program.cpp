
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

#include "Functions.h"

// - PROGRAM STARTER --------------------------------------------------------//
void Tester();
int main( int argCount, char* args[] )
{
  cout << fixed << setprecision( 2 );
  if ( argCount == 2 && string( args[1] ) == "test" )
    {
      // Run tests
      Tester();
    }
  else if ( argCount == 2 )
    {
      // Run program
      float result = StudentCode();
      cout << "RESULT: " << result << endl;
    }
  else
    {
        std::cout << "1. Run AUTOMATED TESTS" << std::endl;
        std::cout << "2. Run PROGRAMS" << std::endl;
        int choice;
        std::cout << ">> ";
        std::cin >> choice;

        switch( choice )
        {
            case 1:
            Tester();
            break;

            case 2:
            {
                float result = StudentCode();
                cout << "RESULT: " << result << endl;
            }
            break;
        }
    }

  return 0;
}
