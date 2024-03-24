// PROGRAM: Practice saving and loading data files

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <fstream>    // Library that contains `ifstream` and `ofstream`
using namespace std;  // Using the C++ STanDard libraries

int main()
{
	string line;

	// TODO: Create ifstream named `input`, try to open "fable.txt".
	ifstream input;
	input.open("fable.txt");


	// TODO: While `getline( input, line )` succeeds, then
	// use `cout` to display the line that was just read.
	while (getline(input, line)) {

		cout << "Read: " << line << endl;
	}

	return 0;
}
