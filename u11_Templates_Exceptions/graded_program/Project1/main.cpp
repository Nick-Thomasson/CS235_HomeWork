//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

#include "Program.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
  std::string program_name = "";
  ProgramAction action = ProgramAction::PROGRAM;

  // RUN THE PROGRAM OR RUN THE TESTS?
  if ( argCount > 1 && std::string( args[1] ) == "test" )
  {
    action = ProgramAction::TEST;
  }
  else if ( argCount > 1 && std::string( args[1] ) == "run" )
  {
    action = ProgramAction::PROGRAM;
  }
  else
  {
    // User menu
    std::cout << std::string( 80, '-' ) << std::endl
              << program_name << std::endl << std::endl
              << "1. Run AUTOMATED TESTS" << std::endl
              << "2. Run PROGRAM" << std::endl << std::endl
              << ">> ";
    int choice;
    std::cin >> choice;

    switch( choice )
    {
    case 1: action = ProgramAction::TEST; break;
    case 2: action = ProgramAction::PROGRAM; break;
    }
  }

  // Execute action
  if ( action == ProgramAction::TEST )
  {
    Tester();
  }
  else
  {
    Program program;
    program.Run();
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
  const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

  std::string test_name{""};

  { test_name = "Check Order::ChangeStatus processing->shipped";
    Order order( 100, { Product( "ABC", 1.00 ) }, OrderStatus::PROCESSING );
    bool exception_thrown = false;

    try
    {
        order.ChangeStatus( OrderStatus::SHIPPED );
    }
    catch( ... )
    {
        // This shouldn't happen here
        exception_thrown = true;
    }

    if ( exception_thrown )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: No exception thrown" << std::endl;
        std::cout << "* Actual:   Exception was thrown!" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
    }
  } std::cout << CLR;

  { test_name = "Check Order::ChangeStatus shipped->delivered";
    Order order( 100, { Product( "ABC", 1.00 ) }, OrderStatus::SHIPPED );
    bool exception_thrown = false;

    try
    {
        order.ChangeStatus( OrderStatus::DELIVERED );
    }
    catch( ... )
    {
        // This shouldn't happen here
        exception_thrown = true;
    }

    if ( exception_thrown )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: No exception thrown" << std::endl;
        std::cout << "* Actual:   Exception was thrown!" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
    }

  } std::cout << CLR;

  { test_name = "Check Order::ChangeStatus processing->delivered";
    Order order( 100, { Product( "ABC", 1.00 ) }, OrderStatus::PROCESSING );
    bool exception_thrown = false;
    bool correct_exception = false;

    try
    {
        order.ChangeStatus( OrderStatus::DELIVERED );
    }
    catch( const invalid_argument& ex )
    {
        exception_thrown = true;
        correct_exception = true;
    }
    catch( ... )
    {
        // This shouldn't happen here
        exception_thrown = true;
    }

    if ( exception_thrown && correct_exception )
    {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
    }
    else if ( exception_thrown && !correct_exception )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: invalid_argument exception thrown" << std::endl;
        std::cout << "* Actual:   A different exception was thrown!" << std::endl;
    }
    else if ( !exception_thrown )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: invalid_argument exception thrown" << std::endl;
        std::cout << "* Actual:   No exception thrown!" << std::endl;
    }

  } std::cout << CLR;


  { test_name = "Check PaymentMethod::Charge for valid date";
    PaymentMethod pm( 1111, 2, 2000 );
    bool exception_thrown = false;

    try
    {
        pm.Charge( 111, 2, 2000 );
    }
    catch( ... )
    {
        exception_thrown = true;
    }

    if ( exception_thrown )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: No exception thrown" << std::endl;
        std::cout << "* Actual:   Exception was thrown!" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
    }
  } std::cout << CLR;

  { test_name = "Check PaymentMethod::Charge for invalid date";
    PaymentMethod pm( 1111, 2, 2000 );
    bool exception_thrown = false;
    bool correct_exception = false;

    try
    {
        pm.Charge( 111, 2, 2002 );
    }
    catch( const runtime_error& ex )
    {
        exception_thrown = true;
        correct_exception = true;
    }
    catch( ... )
    {
        exception_thrown = true;
    }

    if ( exception_thrown && correct_exception )
    {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
    }
    else if ( exception_thrown && !correct_exception )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: runtime_error exception thrown" << std::endl;
        std::cout << "* Actual:   A different exception was thrown!" << std::endl;
    }
    else if ( !exception_thrown )
    {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "* Expected: runtime_error exception thrown" << std::endl;
        std::cout << "* Actual:   No exception thrown!" << std::endl;
    }

  } std::cout << CLR;

}
