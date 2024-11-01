#ifndef _STUDENT
#define _STUDENT

#include <string>
using namespace std;

class Student
{
public:
	Student(string name);
	static int GetTotalStudents();
private:
	string name;
	static int total_students;
};

#endif
