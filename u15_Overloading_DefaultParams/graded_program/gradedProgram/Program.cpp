#include "Program.h"
#include "School.h"

#include <iostream>
#include <iomanip>
using namespace std;

void Program()
{
	cout << fixed << setprecision(1);
	cout << "Creating students..." << endl;
	vector<Student> students;
	students.push_back({ "Ami", 4.0 });
	students.push_back({ "Rei", 3.5 });
	students.push_back({ "Usagi", 2.0 });
	students.push_back({ "Makoto", 2.5 });
	students.push_back({ "Minako", 2.2 });

	cout << "Creating teachers..." << endl;
	vector<Teacher> teachers;
	teachers.push_back({ "Lina Inverse" , 60000 });
	teachers.push_back({ "Gourry Gabriev", 70000 });

	cout << "Creating courses..." << endl;
	vector<Course> courses;
	courses.push_back({ "CS134" });
	courses.push_back({ "CS200" });

	cout << "Register teachers..." << endl;
	Register(courses[0], &teachers[0]);
	Register(courses[1], &teachers[1]);

	cout << "Register students..." << endl;
	Register(courses[0], &students[0]);
	Register(courses[0], &students[1]);
	Register(courses[1], &students[2]);
	Register(courses[1], &students[3]);
	Register(courses[1], &students[4]);

	cout << endl << "Display..." << endl;
	for (auto& teacher : teachers)
	{
		Display(teacher);
	}

	for (auto& student : students)
	{
		Display(student);
	}

	for (auto& course : courses)
	{
		Display(course);
	}
}


// - STUDENT CODE ----------------------------------------------------------
void Register(Course& course, Student* student)
{
	course.ptrStudents.push_back(student);
}

void Register(Course& course, Teacher* teacher)
{
	course.ptrTeacher = teacher;
}

void Display(const Student& student)
{
	cout << "Student's gpa is: " << student.gpa << endl;
	cout << "Student's name is: " << student.name << endl;
}

void Display(const Teacher& teacher)
{
	cout << "Teacher's name is: " << teacher.name << endl;
	cout << "Teacher's salary is: " << teacher.salary << endl;
}

void Display(const Course& course)
{
	for (int i = 0; i < course.ptrStudents.size(); i++) {
		cout << "The course code is: " << course.code << endl;
		cout << "The teacher's name is: " << course.ptrTeacher->name << endl;
		cout << "The student's names are: " << course.ptrStudents[i]->name << endl;
	}
}
// -------------------------------------------------------------------------

