#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;


int main()
{
  cout << "MAP PROGRAM" << endl;
  cout << fixed << setprecision( 2 );

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Declare a map with string keys and float values..." << endl;
  map<string, float>myMap;
  // -------------------------------------------------------------------------


  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Set up 3 product names and their prices in the map..." << endl;
  myMap["Hotdogs"] = 3.99;
  myMap["Milk"] = 3.47;
  myMap["Cereal"] = 2.99;

  // -------------------------------------------------------------------------

  // - STUDENT CODE ----------------------------------------------------------
  cout << endl << "Iterating over the map to display each element's key and value..." << endl;
  for (const auto& temp : myMap) {
	  cout << temp.first  << " - $" << temp.second << endl;
  }
  // -------------------------------------------------------------------------


  cout << endl << "Enter a food: ";
  string choice;
  cin >> choice;

  // - STUDENT CODE ----------------------------------------------------------
  cout << "The price of this item is... $";
  cout << myMap[choice];

  // -------------------------------------------------------------------------


  cout << endl << "THE END" << endl;
  return 0;
}
