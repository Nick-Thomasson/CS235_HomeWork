// This is based off the program raise.cpp from u04 Control Flow graded program 2

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

int StudentCode( float starting_salary, float raise_per_year, int years )
{
  // TODO: Create an ofstream object named `output`, open "results.txt".


  // TODO: Create float called `updated_salary`. Initialize it to the `starting_salary` amount.
  float updated_salary = 0;


  // TODO: Write "Starting salary:" and the `starting_salary` to the `output` file.


  // TODO: Use a loop, you need to create a counter variable that goes from 1 to `years`.
  // Within the loop, calculate the updated salary with
  // `updated_salary = updated_salary + ( updated_salary * raise_per_year );`
  // Use `output` to display the year (counter) and the `updated_salary` each iteration.


  // TODO: Return the `updated_salary` as the result.
  return updated_salary;
  //return -1; // erase this line of code!!
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
  else if ( argCount == 4 )
    {
      // Run program
      float updated_salary = StudentCode( stof( args[1] ), stof( args[2] ), stoi( args[3] ) );
      cout << "RESULT: " << updated_salary << endl;
      cout << "Check results.txt for additional information" << endl;
    }
  else
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
          float input1, input2;
          int input3;
          cout << "Enter starting salary: $";
          cin >> input1;
          cout << "Enter raise per year (as decimal): ";
          cin >> input2;
          cout << "Enter the amount of years to compute: ";
          cin >> input3;
          float updated_salary = StudentCode( input1, input2, input3 );
          cout << "RESULT: " << updated_salary << endl;
          cout << "Check results.txt for additional information" << endl;
        }
    }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U08-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 2;
  float  in1[TOTAL_TESTS]; // inputs 1
  float  in2[TOTAL_TESTS]; // inputs 2
  int    in3[TOTAL_TESTS]; // inputs 3
  string exo[TOTAL_TESTS]; // expected output
  string aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 60000;
  in2[0] = 0.05;
  in3[0] = 5;
  exo[0] = "Starting salary: $60000\nYear: 1, Salary: $63000\nYear: 2, Salary: $66150\nYear: 3, Salary: $69457.5\nYear: 4, Salary: $72930.4\nYear: 5, Salary: $76576.9\n";
  //exo[0] = 76576.89;

  // Setup test 2
  in1[1] = 100000;
  in2[1] = 0.1;
  in3[1] = 3;
  exo[1] = "Starting salary: $100000\nYear: 1, Salary: $110000\nYear: 2, Salary: $121000\nYear: 3, Salary: $133100\n";
  //exo[1] = 133100;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    cout << CLR;
    float result = StudentCode( in1[i], in2[i], in3[i] );
    result = result; // Unused variable warning -_-

    string buffer;
    aco[i] = "";
    ifstream input( "results.txt" );
    if ( input.fail() )
    {
      aco[i] = "FILE results.txt NOT FOUND!!";
    }
    else
    {
      while ( getline( input, buffer ) )
      {
        aco[i] += buffer + "\n";
      }
    }

    input.close();

    if ( aco[i] == exo[i] )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ", " << in3[i] << ") = " << aco[i] << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ", " << in3[i] << ")" << endl;
      cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << endl;
    }
  }
  cout << CLR;
}
