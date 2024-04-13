#include "Employee.h"

#include <string>
using namespace std;

Employee::Employee(int new_id, string new_name, float new_wage)
{
    employee_id = new_id;
    name = new_name;
    hourly_wage = new_wage;
}

int Employee::GetId() const
{

    return employee_id;

}

string Employee::GetName() const
{
    return name;

}

float Employee::GetWage() const
{

    return hourly_wage;
}
