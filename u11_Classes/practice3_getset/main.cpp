// PROGRAM: Practice with classes
// This is based off the Unit 8 Practice 5 program

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>  // Library that contains `cout` commands
#include <string>    // Library that contains `string` types
#include <fstream>   // Library that contains `ifstream` and `ofstream`
using namespace std; // Using the C++ STanDard libraries

#include "Player.h"

int main()
{
  string name;
  int level;

  Player player;

  cout << "Loading game..." << endl;

  // Try to load the savegame file, or create a default character if none found
  ifstream input;
  input.open("savegame.txt");
  if (input.fail())
  {
    cout << "Couldn't find savegame, creating new character." << endl;
    name = "Default Knight";
    level = 1;
  }
  else
  {
    getline(input, name);
    input >> level;
  }
  input.close();


  // TODO: Set the `player`'s name and level.
  // Use the Set functions here.
  player.SetName(name);
  player.SetLevel(level);


  cout << "YOUR CHARACTER" << endl;
  // TODO: Call the player's Display function here.
  player.Display();

  cout << endl;
  cout << "LEVEL UP!!" << endl;
  // TODO: Call the player's LevelUp function here.
  player.LevelUp();

  cout << endl << "Saving game..." << endl;

  // Save the game data back out to the text file
  // TODO: Output the `player`'s name and level to the `output` file, each on their own lines.
  // Use the Get functions here.

  ofstream output;
  output.open("savegame.txt");
  output << player.GetName() << endl;
  output << player.GetLevel() << endl;

  output.close();

  return 0;
}
