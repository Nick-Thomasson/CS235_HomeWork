// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !! YOU DON'T NEED TO MODIFY THIS FILE !!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef _PERSON
#define _PERSON

#include <string>
using namespace std;

// --------------------------------------------------------
// -- Person class declaration ----------------------------
class Person
{
protected:
  string name{"unset"};

public:
  void SetName(string new_name);
  string GetName() const;
  void Display();
};


// --------------------------------------------------------
// -- Student class declaration ---------------------------
class Student : public Person
{
private:
  float gpa{0};

public:
  void SetGpa(float new_gpa);
  float GetGpa() const;
  void Display();
};


// --------------------------------------------------------
// -- Teacher class declaration ---------------------------
class Teacher : public Person
{
private:
  float pay{0};

public:
  void SetPay(float new_pay);
  float GetPay() const;
  void Display();
};

#endif
