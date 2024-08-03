#ifndef _STUDENT
#define _STUDENT

#include <string>
using namespace std;

class Student
{
 public:
  // Member functions
  Student( string name );

  // Class functions
  static int GetTotalStudents();

 private:
  // Member variables
  string name;

  // - STUDENT CODE ----------------------------------------------------------
  // TODO: Add class variable
  static int total_students;
  // -------------------------------------------------------------------------
};

#endif
