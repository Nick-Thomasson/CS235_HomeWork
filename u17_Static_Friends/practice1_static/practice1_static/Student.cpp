#include "Student.h"


int Student::total_students = 0;

Student::Student(string name)
{
	this->name = name;
	Student::total_students++;
}

int Student::GetTotalStudents()
{
	return Student::total_students;
	return 0;
}
