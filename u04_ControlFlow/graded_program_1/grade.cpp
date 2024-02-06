// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

char StudentCode( float points_possible, float my_score )
{
  char letter_grade = 'F';
  
  // TODO: Create a float for `grade_percent`. Calculate the percent with `my_score` divided by `points_possible` times 100.


  // TODO: Use if/else if/else statements to determine value for `letter_grade` based on the `grade_percent`;
  // 89.5 and above = A, 79.5 and above = B, 69.5 and above = C, 59.5 and above = D, below that is F.


  // TODO: Display grade information, including `my_score`, `points_possible`, `grade_percent`, and `letter_grade`.


  // TODO: Return the `letter_grade` as the result.
  return letter_grade;
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
      float points_possible, my_score;
      cout << "Enter points possible: ";
      cin >> points_possible;
      cout << "Enter your score: ";
      cin >> my_score;
      
      char letter_grade = StudentCode( points_possible, my_score );
      cout << "RESULT: " << letter_grade << endl;
    }
    break;
  }
  
  /*
  if ( argCount == 2 && string( args[1] ) == "test" )
  {
    // Run tests
    Tester();
  }
  else if ( argCount == 3 )
  {
    // Run program
    char letter_grade = StudentCode( stof( args[1] ), stof( args[2] ) );
    cout << "RESULT: " << letter_grade << endl;
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " points_possible my_score" << endl;
    return 1;
  }
  * */

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U04-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 5;
  float in1[TOTAL_TESTS]; // inputs 1
  float in2[TOTAL_TESTS]; // inputs 2
  char  exo[TOTAL_TESTS]; // expected output
  char  aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 89;
  in2[0] = 90;
  exo[0] = 'A';

  // Setup test 2
  in1[1] = 80;
  in2[1] = 64;
  exo[1] = 'B';

  // Setup test 3
  in1[2] = 70;
  in2[2] = 49;
  exo[2] = 'C';

  // Setup test 4
  in1[3] = 60;
  in2[3] = 36;
  exo[3] = 'D';

  // Setup test 5
  in1[4] = 59;
  in2[4] = 12;
  exo[4] = 'F';

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
