# Practice 4: Class inheritance

## Introduction

Within "Person.h" there are three classes declared:

- `Person`, the base (parent) class, which has:
    - `string name`, a protected member variable.
    - `void SetName(string new_name);`, a function to set the name
    - `string GetName() const;`, a function to get the name
    - `void Display();`, a function to display the Person's info

We also have `Student` and `Teacher`, who each inherit from the `Person` class. This means that any `protected` and `public` members of `Person` are also inherited by these child classes.

- `Student`, a child of `Person`, has:
    - `float gpa;`, the student's GPA
    - `void SetGpa(float new_gpa);`
    - `float GetGpa() const;`
    - `void Display();`

- `Teacher`, a child of `Person`, has:
    - `float pay;`, the teacher's pay.
    - `void SetPay(float new_pay);`
    - `float GetPay() const;`
    - `void Display();`

The `Person` class' functions are defined in **Person.cpp**, as is the **Teacher** class' functions, but you will need to implement the **Student** class' functions and also update `main()` to have a `Student` variable as well.

-------------------------------------------------------------------------------

## Updating Person.cpp

Update the following functions for the Student class. Refer to the Teacher class functions if you need additional help.

### void Student::SetGpa(float new_gpa)

Assign the private member variable `gpa` the value passed in as `new_gpa`.

### float Student::GetGpa() const

Return the value of the private member variable `gpa`.

### void Student::Display()

Use `cout` statements to display that this is a "Student" and
also display the student's **name** and **gpa**. Use the Get functions here.

## Updating main()

Within `main()`, a Person object and a Teacher object have already been declared. Follow along and do the following:

1. Create a Student object variable.
2. Set the student's name and GPA using the Setter functions.
3. Display the student's info by calling its Display function.

-------------------------------------------------------------------------------

## Example output

```
g++ *.h *.cpp && ./a.out
Person
* Name: Bekah

Student
* Name: Rose
* GPA:  3.5

Teacher
* Name: Rachel
* Pay:  85000

rachelwil@rachelwil-GF63-Thin-9SC:~/TEACHING/cs200-private/2024-01/u11_Classes/practice4_inheritance$ g++ *.h *.cpp && ./a.out
Person
* Name: Rachel

Student
* Name: Rose
* GPA:  3.5

Teacher
* Name: Rebekah
* Pay:  85000
```