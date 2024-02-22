// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <vector>     // Library that contains `vector`
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

float StudentCode( vector<char> course_grades )
{
  float total = 0;

  // TODO: Use a for loop to iterate over all the grades in the `course_grades` vector.
  // For each one, check if that item is an 'A', 'B', 'C', 'D', or 'F'.
  // For 'A', add 4.0 to the `total`.     For 'B', add 3.0 to the `total`.
  // For 'C', add 2.0 to the `total`.     For 'D', add 1.0 to the `total`.
  // Otherwise (for 'F'), add 0.0 or don't add anything to the `total`.


  // Returns the average
  return total / course_grades.size();
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
          vector<char> grades;
          bool getting_input = true;
          while ( getting_input )
            {
              cout << "Enter a grade (A, B, C, D, or F): ";
              char grade;
              cin >> grade;
              grades.push_back( grade );

              cout << endl << "Enter another? (Y/N): ";
              char choice;
              cin >> choice;
              choice = tolower( choice );
              if ( choice == 'n' ) { getting_input = false; }
            }

          float result = StudentCode( grades );
          cout << "RESULT: " << result << endl;
        }
  }
  else
  {
    // Run program
    vector<char> grades;
    for ( int i = 1; i < argCount; i++ )
    {
      grades.push_back( args[i][0] );
    }
    float result = StudentCode( grades );
    cout << "RESULT: " << result << endl;
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U10-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 2;
  string in1[TOTAL_TESTS]; // inputs 1
  float  exo[TOTAL_TESTS]; // expected output
  float  aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = "AABC";
  exo[0] = 3.25;

  // Setup test 2
  in1[1] = "ABCCCDF";
  exo[1] = 2.0;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    vector<char> grades;
    for ( size_t grade = 0; grade < in1[i].size(); grade++ )
    {
      grades.push_back( in1[i][grade] );
    }

    aco[i] = StudentCode( grades );

    if ( aco[i] >= exo[i] - 0.1 && aco[i] <= exo[i] + 0.1 )
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
