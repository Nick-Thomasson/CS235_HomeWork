#include "Person.h"

#include <iostream>
using namespace std;


// --------------------------------------------------------
// -- Person class functions ------------------------------

void Person::SetName(string new_name)
{
    name = new_name;
}

string Person::GetName() const
{
    return name;
}

void Person::Display()
{
    cout << "Person" << endl;
    cout << "* Name: " << GetName() << endl;
    cout << endl;
}


// --------------------------------------------------------
// -- Student class functions -----------------------------

void Student::SetGpa(float new_gpa)
{
    // TODO: Assign the `gpa` member variable to the value passed in as the `new_gpa` parameter

}

float Student::GetGpa() const
{
    // TODO: Return the `gpa` member variable


    return 0; // REMOVE THIS!
}

void Student::Display()
{
    // TODO: Display that this is a Student.
    // TODO: Also display the studnet's name and GPA

}



// --------------------------------------------------------
// -- Teacher class functions -----------------------------

void Teacher::SetPay(float new_pay)
{
    pay = new_pay;
}

float Teacher::GetPay() const
{
    return pay;
}

void Teacher::Display()
{
    cout << "Teacher" << endl;
    cout << "* Name: " << GetName() << endl;
    cout << "* Pay:  " << GetPay() << endl;
    cout << endl;
}
