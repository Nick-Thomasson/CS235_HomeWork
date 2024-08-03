// PROGRAM: Practice with accessing variable's memory address

#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool bool1, bool2, bool3, bool4, bool5;
  int int1, int2, int3, int4, int5;

  cout << "int1's address is: " << &int1 << endl;
  cout << endl;
  cout << "int2's address is: " << &int2 << endl;
  cout << endl;
  cout << "int3's address is: " << &int3 << endl;
  cout << endl;
  cout << "int4's address is: " << &int4 << endl;
  cout << endl;
  cout << "int5's address is: " << &int5 << endl;
  cout << endl;




  cout << "bool1's address is: " << &bool1 << endl;
  cout << endl;
  cout << "bool2's address is: " << &bool2 << endl;
  cout << endl;
  cout << "bool3's address is: " << &bool3 << endl;
  cout << endl;
  cout << "bool4's address is: " << &bool4 << endl;
  cout << endl;
  cout << "bool5's address is: " << &bool5 << endl;
  cout << endl;


  return 0;
}
