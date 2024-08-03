#include "Student.h"

// - STUDENT CODE ----------------------------------------------------------
// TODO: Initialize static member
int Student::total_students = 0;
// -------------------------------------------------------------------------

// Member function
Student::Student( string name )
{
  this->name = name;
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: Increment the `total_students` counter.
  Student::total_students++;
  // -------------------------------------------------------------------------
}

// Class function
int Student::GetTotalStudents()
{
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: Return the `total_students` counter.
  return Student::total_students;
  // -------------------------------------------------------------------------
  return 0; // TODO: TEMPORARY! Remove this line!
}
