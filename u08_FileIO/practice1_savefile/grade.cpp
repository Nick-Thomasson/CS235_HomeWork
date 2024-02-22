// PROGRAM: Practice saving text files

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <fstream>    // Library that contains `ifstream` and `ofstream`
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

int main()
{
  float test1total = 50, test2total = 25, test3total = 40;
  float test1score, test2score, test3score;
  float ratio1, ratio2, ratio3;

  cout << "= GRADE CRUNCHER =" << endl;

  cout << "How much did you score on test 1 (out of " << test1total << "?): ";
  cin >> test1score;
  cout << "How much did you score on test 2 (out of " << test2total << "?): ";
  cin >> test2score;
  cout << "How much did you score on test 3 (out of " << test3total << "?): ";
  cin >> test3score;

  ratio1 = test1score / test1total * 100;
  ratio2 = test2score / test2total * 100;
  ratio3 = test3score / test3total * 100;

  // TODO: Create a variable, type is ofstream, name is `output`.


  // TODO: Use `output`'s open function to open "score.txt".


  // TODO: Set formatting for output: output << fixed << setprecision( 2 );


  // TODO: Output the following for all three items:
  // testXscore out of testXtotal ( ratioX%)


  cout << "Info saved to score.txt" << endl;

  return 0;
}
