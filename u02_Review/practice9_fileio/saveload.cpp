// Use `g++ *.cpp` to build this program
// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

int main()
{
  string name;
  int level;

  cout << "Loading game... ";

  // - LOADING ---------------------------
  // TODO: Declare an input file stream `input` and open "savegame.txt".
  ifstream input;
  input.open( "savegame.txt" );

  // TODO: If finding the file failed, then do the following:
  //    Display "can't find savegame, creating new character".
  //    Set `name` to some default title.
  //    Set `level` to 1.
  // ELSE, do the following:
  //    Display  "success!"
  //    Use getline to read from the `input` file into the `name`.
  //    Use >> to read from the `input `file into the `level`.
  if ( input.fail() )
  {
    cout << "Couldn't find savegame, creating new character." << endl;
    name = "Default Knight";
    level = 1;
  }
  else
  {
    cout << "Success!" << endl;
    getline( input, name );
    input >> level;
  }

  // TODO: Close the input file manually
  input.close();



  // - LEVEL UP ---------------------------
  cout << "YOUR CHARACTER: ";
  cout << "Name:  " << name << "\t";
  cout << "Level: " << level << endl;
  cout << "LEVEL UP!!" << endl;
  level++;
  cout << endl << "Saving game..." << endl;



  // - SAVE GAME ---------------------------
  // TODO: Create an output file stream `output` and open "savegame.txt".
  ofstream output;
  output.open( "savegame.txt" );

  // TODO: Output `name` and `level` to the output file, each on their own line.
  output << name << endl << level << endl;



  return 0;
}
