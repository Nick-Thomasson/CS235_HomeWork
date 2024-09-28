#include <iostream>
using namespace std;

/**
 * Factorial_Iterative
 * @param   n       The value to calculate n! of
 * Uses a loop to calculate the propduct of n * (n-1) * ... * 2 * 1
 * */
int Factorial_Iterative( int n )
{
  int product = 1;
  
  for (int i = 1; i <= n; i++) {
      product = product * i;
  }

  return product;
}

/**
 * Factorial_Recursive
 * @param   n       The value to calculate n! of
 * Uses recursion to calculate the propduct of n * (n-1) * ... * 2 * 1
 * */
int Factorial_Recursive( int n )
{
  // - STUDENT CODE ----------------------------------------------------------

  return 0; // TODO: Remove this line of code, it's a placeholder!
  // -------------------------------------------------------------------------
}

void Test_Abc();

int main()
{
  cout << "MANUAL TESTS:" << endl;
  cout << "Factorial_Iterative( 0 ): " << Factorial_Iterative( 0 ) << endl;
  cout << "Factorial_Recursive( 0 ): " << Factorial_Recursive( 0 ) << endl;
  cout << endl;
  cout << "Factorial_Iterative( 1 ): " << Factorial_Iterative( 1 ) << endl;
  cout << "Factorial_Recursive( 1 ): " << Factorial_Recursive( 1 ) << endl;
  cout << endl;
  cout << "Factorial_Iterative( 3 ): " << Factorial_Iterative( 3 ) << endl;
  cout << "Factorial_Recursive( 3 ): " << Factorial_Recursive( 3 ) << endl;
  cout << endl;
  cout << "Factorial_Iterative( 5 ): " << Factorial_Iterative( 5 ) << endl;
  cout << "Factorial_Recursive( 5 ): " << Factorial_Recursive( 5 ) << endl;
  cout << endl;
  
  cout << "AUTOMATED TESTS:" << endl;
  Test_Abc();


  return 0;
}

void Test_Abc()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  
  const int TOTAL_TESTS = 4;
  int  in1[TOTAL_TESTS] = { 0, 1, 3, 5 };
  int  exo[TOTAL_TESTS] = { 1, 1, 6, 120 };
  int  aco[TOTAL_TESTS];
  
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = Factorial_Recursive( in1[i] );
    
    if ( aco[i] == exo[i] )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << " TEST " << i+1 
        << ", Factorial_Recursive(" << in1[i] << ") = ["
        << aco[i] << "]" << endl;
    }
    else
    {
      std::cout << RED << "[FAIL] ";
      std::cout << " TEST " << i+1 
        << ", Factorial_Recursive(" << in1[i] << ") = ["
        << aco[i] << "], expected [" << exo[i] << "]" << endl;
    }
  }
  
  std::cout << CLR;
}
