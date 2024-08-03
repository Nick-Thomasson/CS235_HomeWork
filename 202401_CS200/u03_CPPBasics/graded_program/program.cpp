
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Nick Thomasson, Spring 2024"; // TODO: Update this to your name!

int StudentCode( int guest_count, int pizza_slices )
{
  // The variable `guest_count` has an UNKNOWN NUMBER in it.
  // The variable `pizza_slices` has an UNKNOWN NUMBER in it.

  // TODO: Create an integer variable `slices_per_person`.
	int slices_per_person;
	int eachGuest;

  // TODO: Calculate how many slices of pizza each guest gets (slices divided by guests).
	eachGuest = pizza_slices / guest_count;
  // Assign the result to the `slices_per_person` variable.
	slices_per_person = eachGuest;

  // TODO: Use `cout` to display "Total guests:", and then the value from the `guest_count` variable.
	cout << "Total guests: " << guest_count << endl;
	

  // TODO: Use `cout` to display "Total slices of pizza:", and then the value from the `pizza_slices` variable.
	cout << "Total slices of pizza: " << pizza_slices << endl;

  // TODO: Use `cout` to display a message of how many slices of pizza each guest gets
	cout << "Each person gets: " << slices_per_person << " each." << endl;

  // TODO: Use the `return` keyword to return the amount of slices (e.g., `return slices_per_person;`).
  return slices_per_person;
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - PROGRAM STARTER --------------------------------------------------------//
void Tester();
int main( int argCount, char* args[] )
{
  if ( argCount == 2 && string( args[1] ) == "test" )
  {
    // Run tests
    Tester();
  }
  else if ( argCount == 3 )
  {
    // Run program
    int slices_per_person = StudentCode( stoi( args[1] ), stoi( args[2] ) );
    cout << "RESULT: " << slices_per_person << endl;
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " guest_count pizza_slices" << endl;
    return 1;
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U03-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 2;
  int    in1[TOTAL_TESTS]; // inputs 1
  int    in2[TOTAL_TESTS]; // inputs 2
  int    exo[TOTAL_TESTS]; // expected output
  int    aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 50;
  in2[0] = 100;
  exo[0] = 2;

  // Setup test 2
  in1[1] = 10;
  in2[1] = 75;
  exo[1] = 7;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = StudentCode( in1[i], in2[i] );

    if ( aco[i] == exo[i] )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ") = " << aco[i] << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ")" << endl;
      cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << endl;
    }
  }
  cout << CLR;
}
