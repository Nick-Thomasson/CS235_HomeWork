#ifndef _PERSON
#define _PERSON

#include <string>
using namespace std;

// --------------------------------------------------------
// -- Person class declaration ----------------------------
class Person
{
protected:
    string name;

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
    float gpa;

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
    float pay;

public:
    void SetPay(float new_pay);
    float GetPay() const;
    void Display();
};

#endif