#ifndef _FUNCTIONS_HPP      // protect against duplicate code error
#define _FUNCTIONS_HPP      // protect against duplicate code error

#include <string>
using namespace std;

// FUNCTION DECLARATIONS (Do not modify)

/***********************************************/
/** Function Set 3 ****************************/

bool IsConsonant( char letter );
int CountConsonants_Iter( string text );
int CountConsonants_Rec( string text, unsigned int pos = 0 );

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

void Test_Set3();

const int headerWidth = 70;
const int pfWidth = 10;

#endif                      // protect against duplicate code error
