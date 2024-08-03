// PROGRAM: Practice loading text files, one item at a time

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

int main()
{
  string read;

  // TODO: Create a variable, type is ifstream, name is `input`.
  ifstream input;


  // TODO: Use `input`'s open function to open "lyricsA.txt".
  input.open("lyricsA.txt");


  // TODO: Use >> to read 1 item from `input` to `read` variable.
  input >> read;

  // TODO: Use `cout` to display the contents of the `read` variable.
  cout << read << endl;;

  // TODO: Do this twice more.

  input >> read;
  cout << read << endl;

  input >> read;
  cout << read << endl;



  return 0;
}
