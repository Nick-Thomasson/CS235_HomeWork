#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<string> data = { "cheese", "lettuce", "tomato", "mayo", "bread" };

  string findme;
  cout << "Search for which term? ";
  cin >> findme;

  int match =
    [] // Capture clause
    ( vector<string> input, string findme ) // Parameters
    -> int // Return type
    {
      // - STUDENT CODE ----------------------------------------------------------
      // TODO: Implement linear search

      // -------------------------------------------------------------------------
      return -1;
    }
    ( data, findme ); // Function call with arguments

  cout << "Result: " << match << endl;

  return 0;
}
