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
    Program();
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
  const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

  std::cout << "Display functions will need to be tested manually." << std::endl;

  std::string test_name;

  { test_name = "Call Register on Course and Student, check results 1";
    Course input1{ "AAA" };
    Student input2{ "BBB", 3 };

    Register( input1, &input2 );

    if ( input1.ptrStudents.size() != 1 )
    {
      std::cout << RED << "[FAIL] " << test_name << std::endl;
      std::cout << "EXPECTED students.size(): 1" << std::endl;
      std::cout << "ACTUAL   students.size(): " << input1.ptrStudents.size() << std::endl;
    }
    else if ( input1.ptrStudents[0]->name != input2.name )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED students[0]->name: " << input2.name << std::endl;
        std::cout << "ACTUAL   students[0]->name: " << input1.ptrStudents[0]->name << std::endl;
      }
    else if ( input1.ptrStudents[0]->gpa != input2.gpa )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED students[0]->gpa: " << input2.gpa << std::endl;
        std::cout << "ACTUAL   students[0]->gpa: " << input1.ptrStudents[0]->gpa << std::endl;
      }
    else
      {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
      }
  } std::cout << CLR;


  { test_name = "Call Register on Course and Student, check results 2";
    Course input1{ "ZZZ" };
    Student input2{ "CCC", 2 };

    Register( input1, &input2 );

    if ( input1.ptrStudents.size() != 1 )
    {
      std::cout << RED << "[FAIL] " << test_name << std::endl;
      std::cout << "EXPECTED students.size(): 1" << std::endl;
      std::cout << "ACTUAL   students.size(): " << input1.ptrStudents.size() << std::endl;
    }
    else if ( input1.ptrStudents[0]->name != input2.name )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED students[0]->name: " << input2.name << std::endl;
        std::cout << "ACTUAL   students[0]->name: " << input1.ptrStudents[0]->name << std::endl;
      }
    else if ( input1.ptrStudents[0]->gpa != input2.gpa )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED students[0]->gpa: " << input2.gpa << std::endl;
        std::cout << "ACTUAL   students[0]->gpa: " << input1.ptrStudents[0]->gpa << std::endl;
      }
    else
      {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
      }
  } std::cout << CLR;

  { test_name = "Call Register on Course and Teacher, check results 1";
    Course input1{ "AAA" };
    Teacher input2{ "BBB", 3 };

    Register( input1, &input2 );

    if ( input1.ptrTeacher->name != input2.name )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED teacher->name: " << input2.name << std::endl;
        std::cout << "ACTUAL   teacher->name: " << input1.ptrTeacher->name << std::endl;
      }
    else if ( input1.ptrTeacher->salary != input2.salary )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED teacher->salary: " << input2.salary << std::endl;
        std::cout << "ACTUAL   teacher->salary: " << input1.ptrTeacher->salary << std::endl;
      }
    else
      {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
      }
  } std::cout << CLR;


  { test_name = "Call Register on Course and Teacher, check results 2";
    Course input1{ "ZZZ" };
    Teacher input2{ "CCC", 2 };

    Register( input1, &input2 );

    if ( input1.ptrTeacher->name != input2.name )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED teacher->name: " << input2.name << std::endl;
        std::cout << "ACTUAL   teacher->name: " << input1.ptrTeacher->name << std::endl;
      }
    else if ( input1.ptrTeacher->salary != input2.salary )
      {
        std::cout << RED << "[FAIL] " << test_name << std::endl;
        std::cout << "EXPECTED teacher->salary: " << input2.salary << std::endl;
        std::cout << "ACTUAL   teacher->salary: " << input1.ptrTeacher->salary << std::endl;
      }
    else
      {
        std::cout << GRN << "[PASS] " << test_name << std::endl;
      }
  } std::cout << CLR;


}
