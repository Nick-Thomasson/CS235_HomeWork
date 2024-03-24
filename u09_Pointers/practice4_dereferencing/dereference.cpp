// PROGRAM: Practice dereferencing pointers

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string studentA = "Luna", studentB = "Kabe", studentC = "Korra";

  cout << endl << "ORIGINAL TABLE" << endl;
  cout << "studentA address: " << &studentA << ", value: " << studentA << endl;
  cout << "studentB address: " << &studentB << ", value: " << studentB << endl;
  cout << "studentC address: " << &studentC << ", value: " << studentC << endl;
  cout << endl;

  string* ptrStudent = nullptr;
  cout << "ptrStudent is pointing to address: " << ptrStudent << endl << endl;


  ptrStudent = &studentA;
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;
  // TODO: `cout` the pointed-to student with `*ptrStudent`, the dereferenced pointer.
  cout << "CURRENT VALUE: ";
  cout << "Enter a new name: ";
  // TODO: Use a `getline` function, overwriting `*ptrStudent`, the dereferenced pointer.

  cout << endl;
  
  
  ptrStudent = &studentB;
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;
  // TODO: `cout` the pointed-to student with `*ptrStudent`, the dereferenced pointer.
  cout << "CURRENT VALUE: ";
  cout << "Enter a new name: ";
  // TODO: Use a `getline` function, overwriting `*ptrStudent`, the dereferenced pointer.

  cout << endl;
  

  ptrStudent = &studentC;
  cout << "ptrStudent is now pointing to address: " << ptrStudent << endl;
  // TODO: `cout` the pointed-to student with `*ptrStudent`, the dereferenced pointer.
  cout << "CURRENT VALUE: ";
  cout << "Enter a new name: ";
  // TODO: Use a `getline` function, overwriting `*ptrStudent`, the dereferenced pointer.

  
  

  cout << endl << endl << "UPDATED TABLE" << endl;
  cout << "studentA address: " << &studentA << ", value: " << studentA << endl;
  cout << "studentB address: " << &studentB << ", value: " << studentB << endl;
  cout << "studentC address: " << &studentC << ", value: " << studentC << endl;
  cout << endl;


  return 0;
}
