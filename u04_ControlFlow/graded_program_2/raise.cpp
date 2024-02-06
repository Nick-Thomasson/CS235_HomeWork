
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

int StudentCode( float starting_salary, float raise_per_year, int years )
{
  float updated_salary = starting_salary;

  cout << "Starting salary: $" << starting_salary << endl;

  int current_year = 1;
  
  // TODO: Use a loop, you need to create a counter variable that goes from 1 to `years`.
  // Within the loop, calculate the updated salary with
  // `updated_salary = updated_salary + ( updated_salary * raise_per_year/100 );`
  // Use `cout` to display the year (counter) and the `updated_salary` each iteration.
  // Make sure to add 1 to current_year each iteration through the loop.
  

  // TODO: Return the `updated_salary` as the result.
  return updated_salary;
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - PROGRAM STARTER --------------------------------------------------------//
void Tester();
int main( int argCount, char* args[] )
{
  cout << fixed << setprecision( 2 );
  std::cout << "1. Run AUTOMATED TESTS" << std::endl;
  std::cout << "2. Run PROGRAM" << std::endl;
  int choice;
  std::cout << ">> ";
  std::cin >> choice;

  switch( choice )
  {
    case 1:
    Tester();
    break;

    case 2:{
      float starting_salary, raise_per_year;
      int years;
      cout << "Enter starting salary: ";
      cin >> starting_salary;
      cout << "Raise per year: %";
      cin >> raise_per_year;
      cout << "Enter how many years to project: ";
      cin >> years;
      
      float updated_salary = StudentCode( starting_salary, raise_per_year, years );
      cout << "RESULT: $" << updated_salary << endl;
    }
    break;
  }
  /*
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
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " starting_salary raise_per_year years" << endl;
    cout << "NOTE: raise_per_year should be a decimal, not a percent!" << endl;
    return 1;
  }
  * */

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U04-P2-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 2;
  float  in1[TOTAL_TESTS]; // inputs 1
  float  in2[TOTAL_TESTS]; // inputs 2
  int    in3[TOTAL_TESTS]; // inputs 3
  float  exo[TOTAL_TESTS]; // expected output
  float  aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 60000;
  in2[0] = 0.05;
  in3[0] = 5;
  exo[0] = 76576.89;

  // Setup test 2
  in1[1] = 100000;
  in2[1] = 0.1;
  in3[1] = 3;
  exo[1] = 133100;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    cout << CLR;
    aco[i] = StudentCode( in1[i], in2[i], in3[i] );

    // Range-based check because of floats, woo.
    if ( aco[i] >= exo[i] - 1 && aco[i] <= exo[i] + 1 )
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
