#include "Program.h"
#include "School.h"

#include <iostream>
#include <iomanip>
using namespace std;

void Program()
{
  cout << fixed << setprecision( 1 );
  cout << "Creating students..." << endl;
  vector<Student> students;
  students.push_back( { "Ami", 4.0 } );
  students.push_back( { "Rei", 3.5 } );
  students.push_back( { "Usagi", 2.0 } );
  students.push_back( { "Makoto", 2.5 } );
  students.push_back( { "Minako", 2.2 } );

  cout << "Creating teachers..." << endl;
  vector<Teacher> teachers;
  teachers.push_back( { "Lina Inverse" , 60000 } );
  teachers.push_back( { "Gourry Gabriev", 70000 } );

  cout << "Creating courses..." << endl;
  vector<Course> courses;
  courses.push_back( { "CS134" } );
  courses.push_back( { "CS200" } );

  cout << "Register teachers..." << endl;
  Register( courses[0], &teachers[0] );
  Register( courses[1], &teachers[1] );

  // TODO: Uncomment this out once you've implemented the functions
//  cout << "Register students..." << endl;
//  Register( courses[0], &students[0] );
//  Register( courses[0], &students[1] );
//  Register( courses[1], &students[2] );
//  Register( courses[1], &students[3] );
//  Register( courses[1], &students[4] );
//
//  cout << endl << "Display..." << endl;
//  for ( auto& teacher : teachers )
//    {
//      Display( teacher );
//    }
//
//  for ( auto& student : students )
//    {
//      Display( student );
//    }
//
//  for ( auto& course : courses )
//    {
//      Display( course );
//    }
  // -------------------------------------------------------------------------
}


// - STUDENT CODE ----------------------------------------------------------
void Register( Course& course, Student* student )
{
}

void Register( Course& course, Teacher* teacher )
{
}

void Display( const Student& student )
{
}

void Display( const Teacher& teacher )
{
}

void Display( const Course& course )
{
}
// -------------------------------------------------------------------------

