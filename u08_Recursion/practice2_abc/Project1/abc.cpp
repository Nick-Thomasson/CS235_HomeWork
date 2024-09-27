#include <iostream>
using namespace std;

/**
 * Abc_Iterative
 * Builds a string that contains characters
 * from `start` to `end` by using a loop
 * and returns the result.
 * */
string Abc_Iterative( char start, char end )
{
  string built_string = "";
  // - STUDENT CODE ----------------------------------------------------------

  // -------------------------------------------------------------------------
  return built_string;
}

/**
 * Abc_Recursive
 * Builds a string that contains characters
 * from `start` to `end` by using recursion
 * and returns the result.
 * */
string Abc_Recursive( char start, char end )
{
  // - STUDENT CODE ----------------------------------------------------------

  return "X"; // TODO: Remove this line of code, it's a placeholder!
  // -------------------------------------------------------------------------
}

void Test_Abc();

int main()
{
  cout << "MANUAL TESTS:" << endl;
  cout << "Abc_Iterative( 'A', 'G' ): " << Abc_Iterative( 'A', 'G' ) << endl;
  cout << "Abc_Recursive( 'A', 'G' ): " << Abc_Recursive( 'A', 'G' ) << endl;
  cout << endl;
  cout << "Abc_Iterative( 'm', 'p' ): " << Abc_Iterative( 'm', 'p' ) << endl;
  cout << "Abc_Recursive( 'm', 'p' ): " << Abc_Recursive( 'm', 'p' ) << endl;
  cout << endl;
  
  cout << "AUTOMATED TESTS:" << endl;
  Test_Abc();


  return 0;
}

void Test_Abc()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  
  const int TOTAL_TESTS = 2;
  char    in1[TOTAL_TESTS] = { 'a', 'C' };
  char    in2[TOTAL_TESTS] = { 'f', 'G' };
  string  exo[TOTAL_TESTS] = { "abcdef", "CDEFG" };
  string  aco[TOTAL_TESTS];
  
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = Abc_Recursive( in1[i], in2[i] );
    
    if ( aco[i] == exo[i] )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << " TEST " << i+1 
        << ", Abc_Recursive(" << in1[i] << ", " << in2[i] << ", \"\") = ["
        << aco[i] << "]" << endl;
    }
    else
    {
      std::cout << RED << "[FAIL] ";
      std::cout << " TEST " << i+1 
        << ", Abc_Recursive(" << in1[i] << ", " << in2[i] << ", \"\") = ["
        << aco[i] << "], expected [" << exo[i] << "]" << endl;
    }
  }
  
  std::cout << CLR;
}
