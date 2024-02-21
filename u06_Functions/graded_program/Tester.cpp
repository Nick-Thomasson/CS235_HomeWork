#include <iostream>
#include <string>
using namespace std;

#include "Functions.h"

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U06-P1-TEST; STUDENT: " << YOURNAME << endl;

  cout << BOLD;
  cout << endl;
  cout << "MANUAL TEST, check functionality:" << endl;
  cout << "* DisplayMenu() - main menu shown in loop" << endl;
  cout << "* FormatUSD( p ) - make sure dollar amounts are formatted" << endl;
  cout << "* GetTaxPercent() - Make sure on checkout the tax % shows up" << endl;
  cout << "* GetPricePlusTax( p, t ) - Make sure After Tax price is correct" << endl;
  cout << "* GetChoice( min, max ) - Make sure it disallows numbers less than min / greater than max" << endl;
  cout << "* GetNewPrice() - Make sure function is called to get float values" << endl;
  cout << string( 80, '-' ) << endl << endl;
  cout << CLR;

  const int TOTAL_TESTS = 2;
  string  in1[TOTAL_TESTS]; // inputs 1
  float   exo[TOTAL_TESTS]; // expected output
  float   aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = " 2.25, 4.00, 5.30";
  exo[0] = 12.66;

  // Setup test 2
  in1[1] = "1.10, 3.00";
  exo[1] = 4.49;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    cout << BOLD << endl;
    cout << "Enter prices:    " << in1[i] << endl;
    cout << "Expected output: " << exo[i] << endl;

    cout << CLR;
    aco[i] = StudentCode();

    if ( aco[i] >= exo[i] - 0.1 && aco[i] <= exo[i] + 0.1 )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode() = " << aco[i] << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode()" << endl;
      cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << endl;
    }
  }
  cout << CLR;

  float result = StudentCode();

  cout << CLR;
}
