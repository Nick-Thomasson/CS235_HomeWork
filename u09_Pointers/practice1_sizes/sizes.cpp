// PROGRAM: Practice with getting variable sizes

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // TODO: Use the sizeof(...) function on int, float, double, bool, char, and string
  // Use cout statements to display each type's size.
  cout << "integer size:  " << sizeof( int ) << endl;
  cout << endl;
  cout << "integer size:  " << sizeof(float) << endl;
  cout << endl;
  cout << "integer size:  " << sizeof(double) << endl;
  cout << endl;
  cout << "integer size:  " << sizeof(bool) << endl;
  cout << endl;
  cout << "integer size:  " << sizeof(char) << endl;
  cout << endl;
  cout << "integer size:  " << sizeof(string) << endl;
  cout << endl;

  return 0;
}
