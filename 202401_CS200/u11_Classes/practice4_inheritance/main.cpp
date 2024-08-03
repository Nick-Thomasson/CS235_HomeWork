// PROGRAM: Practice using inheritance

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

#include "Person.h"

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  Person buddy;
  buddy.SetName( "Rachel" );
  
  Teacher teacher;
  teacher.SetName( "Rebekah" );
  teacher.SetPay( 85000 );
  
  // TODO: Create a Student variable. Set its name and gpa
  Student student;
  student.SetName("Nick Thomasson");
  student.SetGpa(4.0);
  
  buddy.Display();
  teacher.Display();
  // TODO: Call the student's Display function.
  student.Display();
  
  // Return 0 means quit program with no errors, in this context.
  return 0;
}
