// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

string StudentCode( string filename, int line_number )
{
  // TODO: Create ifstream object named `input`, try to open the `filename`.


  // TODO: Check for an input fail. Display error message and return "" on failure.


  // TODO: Load in lines from the `input` file until you hit the
  // "n-th" line (given by `line_number`). Return the line loaded in here.


  // TODO: Return "" if nothing was returned during the file read.
  return "";
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
  else if ( argCount == 3 )
  {
    // Run program
    string line = StudentCode( string( args[1] ), stoi( args[2] ) );
    cout << "RESULT: " << line << endl;
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " filename line_number" << endl;
    return 1;
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U08-P2-TEST; STUDENT: " << YOURNAME << endl;

  ofstream out;

  out.open( "test1.txt" );
  out << "the quick brown fox" << endl << "jumps over the lazy dog" << endl;
  out.close();

  out.open( "test2.txt" );
  out << "we can dance if we want to" << endl << "we can leave your friends behind" << endl << "cuz your friends don't dance" << endl << "and if they don't dance" << endl << "well then they're no friends of mine." << endl;
  out.close();

  // (Automated test):

  const int TOTAL_TESTS = 2;
  string in1[TOTAL_TESTS]; // inputs 1
  int    in2[TOTAL_TESTS]; // inputs 2
  string exo[TOTAL_TESTS]; // expected output
  string aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = "test1.txt";
  in2[0] = 1;
  exo[0] = "jumps over the lazy dog";

  // Setup test 2
  in1[1] = "test2.txt";
  in2[1] = 2;
  exo[1] = "cuz your friends don't dance";

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    cout << CLR;
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
