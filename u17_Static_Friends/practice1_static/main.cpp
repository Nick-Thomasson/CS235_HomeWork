#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Student.h"

int main()
{
    cout << "Total students: " << Student::GetTotalStudents() << endl;

    vector<Student> student_list;
    student_list.push_back( Student( "A" ) );
    cout << "Total students: " << student_list[0].GetTotalStudents() << endl;

    student_list.push_back( Student( "B" ) );
    cout << "Total students: " << student_list[1].GetTotalStudents() << endl;

    student_list.push_back( Student( "C" ) );
    cout << "Total students: " << student_list[2].GetTotalStudents() << endl;

    student_list.push_back( Student( "D2" ) );
    cout << "Total students: " << student_list[3].GetTotalStudents() << endl;

    cout << "Total students: " << Student::GetTotalStudents() << endl;


    return 0;
}
