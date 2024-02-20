
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

#include "Room.h"

// - STUDENT CODE -----------------------------------------------------------//
const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

Room StudentCode( float width, float length )
{
  Room my_room;

  // TODO: Finish setting up my_room

  return my_room;
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - PROGRAM STARTER --------------------------------------------------------//
void Tester();
int main( int argCount, char* args[] )
{
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
      float width, length;
      cout << "Enter room's width: ";
      cin >> width;
      cout << "Enter room's length: ";
      cin >> length;
      
      Room result = StudentCode( width, length );
      cout << "RESULT:" << endl;
      cout << "* width:     " << result.width << endl;
      cout << "* length:    " << result.length << endl;
      cout << "* area:      " << result.area << endl;
      cout << "* perimeter: " << result.perimeter << endl;
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
    Room result = StudentCode( stof( args[1] ), stof( args[2] ) );
    cout << "RESULT:" << endl;
    cout << "* width:     " << result.width << endl;
    cout << "* length:    " << result.length << endl;
    cout << "* area:      " << result.area << endl;
    cout << "* perimeter: " << result.perimeter << endl;
  }
  else
  {
    cout << "argCount is " << argCount << "; NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Run tests:      " << args[0] << " test" << endl;
    cout << "Run as program: " << args[0] << " width length" << endl;
    return 1;
  }
  */

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m"; const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";
  cout << "2024-01-U05-P1-TEST; STUDENT: " << YOURNAME << endl;

  // (Automated test):

  const int TOTAL_TESTS = 2;
  float    in1[TOTAL_TESTS]; // inputs 1
  float    in2[TOTAL_TESTS]; // inputs 2
  Room     exo[TOTAL_TESTS]; // expected output
  Room     aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 5;
  in2[0] = 7;
  exo[0].width = 5;
  exo[0].length = 7;
  exo[0].area = 35;
  exo[0].perimeter = 24;

  // Setup test 2
  in1[1] = 3;
  in2[1] = 11;
  exo[1].width = 3;
  exo[1].length = 11;
  exo[1].area = 33;
  exo[1].perimeter = 28;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = StudentCode( in1[i], in2[i] );

    if (
        aco[i].width     == exo[i].width &&
        aco[i].length    == exo[i].length &&
        aco[i].area      == exo[i].area &&
        aco[i].perimeter == exo[i].perimeter
         )
    {
      // PASS
      cout << GRN << "[PASS] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ") = [";

      cout << "width=" << aco[i].width << ", ";
      cout << "length=" << aco[i].length << ", ";
      cout << "area=" << aco[i].area << ", ";
      cout << "perimeter=" << aco[i].perimeter;
      cout << "]" << endl;
    }
    else
    {
      // FAIL
      cout << RED << "[FAIL] ";
      cout << " TEST " << i+1 << ", StudentCode(" << in1[i] << ", " << in2[i] << ")" << endl;
      cout << "   EXPECTED OUTPUT: [";
      cout << "width=" << exo[i].width << ", ";
      cout << "length=" << exo[i].length << ", ";
      cout << "area=" << exo[i].area << ", ";
      cout << "perimeter=" << exo[i].perimeter;
      cout << "]" << endl;
      cout << "   ACTUAL OUTPUT:   [" ;
      cout << "width=" << aco[i].width << ", ";
      cout << "length=" << aco[i].length << ", ";
      cout << "area=" << aco[i].area << ", ";
      cout << "perimeter=" << aco[i].perimeter;
      cout << "]" << endl;
    }
  }
  cout << CLR;
}
