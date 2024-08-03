#ifndef _FUNCTIONS_HPP      // protect against duplicate code error
#define _FUNCTIONS_HPP      // protect against duplicate code error

#include <string>
using namespace std;

// FUNCTION DECLARATIONS (Do not modify)

/***********************************************/
/** Function Set 2 ****************************/

int Factorial_Iter( int n );
int Factorial_Rec( int n );

/***********************************************/
/** Program and Test runners ******************/

void Program();
void RunTests();

/***********************************************/
/** Utilities *********************************/

string B2S( bool val );
void ClearScreen();
void Pause();

/***********************************************/
/** Test functions ****************************/

void Test_Set2();

const int headerWidth = 70;
const int pfWidth = 10;

#endif                      // protect against duplicate code error
