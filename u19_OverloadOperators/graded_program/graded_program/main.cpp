//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

#include "Tests.h"
#include "Program.h"

enum class ProgramAction { TEST, PROGRAM };
int main( int argCount, char* args[] )
{
  std::string program_name = "";
  ProgramAction action = ProgramAction::TEST;

  // RUN THE PROGRAM OR RUN THE TESTS?
  if ( argCount > 1 && std::string( args[1] ) == "test" )
  {
    action = ProgramAction::TEST;
  }
  else if ( argCount > 1 && std::string( args[1] ) == "run" )
  {
//    action = ProgramAction::PROGRAM;
  }
  else
  {
//    // User menu
//    std::cout << std::string( 80, '-' ) << std::endl
//              << program_name << std::endl << std::endl
//              << "1. Run AUTOMATED TESTS" << std::endl
//              << "2. Run PROGRAM" << std::endl << std::endl
//              << ">> ";
//    int choice;
//    std::cin >> choice;
//
//    switch( choice )
//    {
//    case 1: action = ProgramAction::TEST; break;
//    case 2: action = ProgramAction::PROGRAM; break;
//    }
  }

  // Execute action
  if ( action == ProgramAction::TEST )
  {
    Tester tester;
    tester.Run();
  }
  else
  {
//    Program();
  }

  return 0;
}



