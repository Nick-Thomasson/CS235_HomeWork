#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

int main()
{
  cout << "MAP PROGRAM" << endl;
  cout << fixed << setprecision( 2 );
  
  map<int, string> employees;
  
  employees[ 1024 ] = "Detective Frank";
  employees[ 5231 ] = "Birdman";
  employees[ 4612 ] = "Carrrrlll";
  
  for ( auto& item : employees )
  {
    cout << "ID: " << item.first << ", Employee: " << item.second << endl;
  }
  
  cout << "THE END" << endl;
  return 0;
}
