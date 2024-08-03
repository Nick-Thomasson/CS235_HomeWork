#ifndef _EMPLOYEE
#define _EMPLOYEE

#include <string>
using namespace std;

class Employee
{
  private:
  int employee_id;
  string name;
  float hourly_wage;

  public:
  Employee( int new_id, string new_name, float new_wage );
  int GetId() const;
  string GetName() const;
  float GetWage() const;
};

#endif