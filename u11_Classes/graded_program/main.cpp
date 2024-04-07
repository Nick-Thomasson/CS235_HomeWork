// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <iomanip>    // Library for formatting; `setprecision`
#include <string>     // Library that contains `string` types
#include <vector>     // Library that contains `vector`
using namespace std;  // Using the C++ STanDard libraries

#include "Employee.h"

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

int StudentCode( vector<Employee> employee_list, int lookup_id )
{
  // TODO: Iterate through all the employees in `employee_list`.
  // Check each one's ID, if it matches `lookup_id` then return the index it is at in the vector.
  // If the for loop ends and nothing has been returned, then return -1 for "not found".





  return -1;
}

//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - PROGRAM STARTER --------------------------------------------------------//

void DisplayTable( vector<Employee> employees )
{
  cout << left
    << setw( 10 ) << "INDEX"
    << setw( 10 ) << "ID"
    << setw( 30 ) << "NAME"
    << setw( 10 ) << "WAGE"
    << endl << string( 80, '-' ) << endl;
  for ( size_t i = 0; i < employees.size(); i++ )
  {
  cout
    << setw( 10 ) << i
    << setw( 10 ) << employees[i].GetId()
    << setw( 30 ) << employees[i].GetName()
    << setw( 10 ) << employees[i].GetWage()
    << endl;
  }
  cout << endl;
}

void Tester();
int main( int argCount, char* args[] )
{
  if ( argCount == 2 && string( args[1] ) == "test" )
  {
    // Run tests
    Tester();
  }
  else if ( argCount == 2 )
    {
      // Run program
      vector<Employee> employees = {
        Employee( 123, "Ochoa",   16.65 ),
        Employee( 234, "Bakalar", 16.65 ),
        Employee( 353, "Grubb",   16.65 ),
      };

      cout << "Employee table:" << endl << endl;
      DisplayTable( employees );

      int result = StudentCode( employees, stoi( args[1] ) );
      cout << "RESULT: Index = " << result << endl;
    }
  else if ( argCount == 1 )
    {
      std::cout << "1. Run AUTOMATED TESTS" << std::endl;
      std::cout << "2. Run PROGRAMS" << std::endl;
      int choice;
      std::cout << ">> ";
      std::cin >> choice;

      if ( choice == 1 )
        {
          Tester();
        }
      else
        {
          // Run program
          vector<Employee> employees = {
            Employee( 123, "Ochoa",   16.65 ),
            Employee( 234, "Bakalar", 16.65 ),
            Employee( 353, "Grubb",   16.65 ),
          };

          cout << "Employee table:" << endl << endl;
          DisplayTable( employees );

          int choice;
          cout << "Enter an ID to retrieve: ";
          cin >> choice;

          int result = StudentCode( employees, choice );
          cout << "RESULT: Index = " << result << endl;
        }
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " employee_id" << endl;
    return 1;
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
string EmployeeToString( Employee employee )
{
  return "[" + to_string( employee.GetId() ) + "/" + to_string( employee.GetWage() ) + "/" + employee.GetName() + "]";
}

string VectorToString( vector<Employee> employees )
{
  bool first = true;
  string blah = "[";
  for ( auto& ee : employees )
  {
    if ( !first ) { blah += ","; }
    blah += EmployeeToString( ee );
    first = false;
  }
  blah += "]";
  return blah;
}

void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U11-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 3;
  vector<Employee>  in1[TOTAL_TESTS]; // inputs 1
  int               in2[TOTAL_TESTS]; // inputs 2
  int               exo[TOTAL_TESTS]; // expected output
  int               aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = { Employee( 11, "AAA", 100 ), Employee( 22, "BBB", 200 ), Employee( 33, "CCC", 300 ), Employee( 44, "DDD", 400 )  };
  in2[0] = 44;
  exo[0] = 3;

  // Setup test 2
  in1[1] = { Employee( 100, "aardvark", 11 ), Employee( 200, "bear", 12 )  };
  in2[1] = 200;
  exo[1] = 1;

  // Setup test 2
  in1[2] = { Employee( 100, "aardvark", 11 ), Employee( 200, "bear", 12 )  };
  in2[2] = 444;
  exo[2] = -1;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = StudentCode( in1[i], in2[i] );

    if ( aco[i] == exo[i] )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode(" << VectorToString( in1[i] ) << ", " << in2[i] << ") = " << aco[i] << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode(" << VectorToString( in1[i] ) << ", " << in2[i] << ")" << endl;
      cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << endl;
    }
  }
  cout << CLR;
}
