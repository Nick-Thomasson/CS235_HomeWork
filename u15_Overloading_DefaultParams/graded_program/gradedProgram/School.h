#ifndef _CUSTOMERS
#define _CUSTOMERS

#include <string>
#include <vector>
using namespace std;

struct Student
{
  string name;
  float gpa;
};

struct Teacher
{
  string name;
  float salary;
};

struct Course
{
  string code;
  vector<Student*> ptrStudents;
  Teacher* ptrTeacher;
};

#endif
