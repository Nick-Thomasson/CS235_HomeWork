#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Display( const vector<string>& vec )
{
  cout << "[";
  for ( size_t i = 0; i < vec.size(); i++ )
    {
      if ( i != 0 ) { cout << ", "; }
      cout << i << "=" << vec[i];
    }
  cout << "]";
  cout << endl;
}

int main()
{
  vector<string> data = { "bread", "cheese", "lettuce", "tomato", "mayo", "bread" };

  cout << endl << "Vector:" << endl;
  Display( data );

  string findme, replacewith;
  cout << endl << "Search for which term? ";
  cin >> findme;

    [=] // Capture clause
    () // Parameters
    -> void // Return type
    {
      // - STUDENT CODE ----------------------------------------------------------
      // TODO: Implement linear search
        for (int i = 0; i < data.size(); i++){
            if (data[i] == findme){
                
            }
        }

      // -------------------------------------------------------------------------
    }
    (); // Function call with arguments

  return 0;
}
