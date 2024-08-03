# Static member practice

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Total students: 0
Total students: 1
Total students: 2
Total students: 3
Total students: 4
Total students: 4
```


## Instructions
In the Student.h file add a class-level (static) variable to count how many students get instantiated. Declare a static `int` variable named `total_students`.

Within the Student.cpp file at the top of the file outside of all of the functions initialize the `Student::total_students` static variable. (See the reference section).

In the `Student` constructor add a line of code that increments the `total_students` by 1. This counts up each time a new student object is created.

Within the `GetTotalStudents` function return the `total_students` static variable.


## Reference
Class declaration (.h file) - declaring a class-level (static) member variable:
```
class CLASSNAME
{
    static TYPE VARNAME;
};
```

.cpp file - initialize class-level (static) member, which goes outside of functions.
```
CLASSNAME::VARNAME = VALUE;
```
