// PROGRAM: Practice saving and loading data files

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

int main()
{
  string name;
  int level;

  cout << "Loading game..." << endl;

  // TODO: Create ifstream object named `input`. Try to open "savegame.txt".


  // TODO: If `input.fail()` is true, then display message that savegame not found - starting with default.
  // Set `name` to "Default Knight" (or whatever you want)
  // Set `level` to 1

  // TODO: Else, if `input.fail()` was false (no fail),
  // Use `getline` to load from `input` to `name`, then
  // use `input >>` to load from `input` to `level`


  // TODO: Close `input` once done loading game


  cout << "YOUR CHARACTER" << endl;
  cout << "Name:  " << name << endl;
  cout << "Level: " << level << endl;

  cout << endl;
  cout << "LEVEL UP!!" << endl;
  level++;

  cout << endl << "Saving game..." << endl;

  // TODO: Create ofstream object named `output`. Open "savegame.txt".


  // TODO: Output `name` and `level` to the `output` file, each on their own lines.


  return 0;
}
