// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

string StudentCode( int vip )
{
  string student1 = "Hikaru";
  string student2 = "Umi";
  string student3 = "Fuu";

  string* ptrVip = nullptr;

  // TODO: Point `ptrVip` to one of the players' addresses based on
  // whether `vip` is 1, 2, or 3.

  // TODO: If `ptrVip` is still pointing to nullptr, return "UNKNOWN".
  // Otherwise, return `*ptrVip` to dereference the pointer and return
  // the name it is pointing to.
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
  else if ( argCount == 2 )
    {
      // Run program
      string result = StudentCode( stoi( args[1] ) );
      cout << "RESULT: " << result << endl;
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
          cout << "Enter ID of VIP student: ";
          int index;
          cin >> index;
          string result = StudentCode( index );
          cout << "RESULT: " << result << endl;
        }
    }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U09-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 4;
  int    in1[TOTAL_TESTS]; // inputs 1
  string exo[TOTAL_TESTS]; // expected output
  string aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 1;
  exo[0] = "Hikaru";

  // Setup test 2
  in1[1] = 2;
  exo[1] = "Umi";

  // Setup test 3
  in1[2] = 3;
  exo[2] = "Fuu";

  // Setup test 4
  in1[3] = 4;
  exo[3] = "UNKNOWN";

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    cout << CLR;
    aco[i] = StudentCode( in1[i] );

    if ( aco[i] == exo[i] )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ") = " << aco[i] << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ")" << endl;
      cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << endl;
    }
  }
  cout << CLR;
}
