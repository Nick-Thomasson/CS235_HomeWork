// PROGRAM: Practice pointing to memory addresses

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string studentA = "Luna", studentB = "Kabe", studentC = "Korra";
  cout << "studentA address: " << &studentA << ", value: " << studentA << endl;
  cout << "studentB address: " << &studentB << ", value: " << studentB << endl;
  cout << "studentC address: " << &studentC << ", value: " << studentC << endl;
  cout << endl;

  string* ptrStudent = nullptr;
  cout << "ptrStudent is now pointing to: " << ptrStudent << endl;

  ptrStudent = &studentA;
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;

  // TODO: Assign ptrStudent to `studentB`'s address.
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;

  // TODO: Assign ptrStudent to `studentC`'s address.
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;

  return 0;
}
