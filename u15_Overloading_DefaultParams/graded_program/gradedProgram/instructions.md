# Graded assignment - Function overloading

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Creating students...
Creating teachers...
Creating courses...
Register teachers...
Register students...

Display...
Teacher: Lina Inverse ($60000)
Teacher: Gourry Gabriev ($70000)
Student: Ami (4)
Student: Rei (3.5)
Student: Usagi (2)
Student: Makoto (2.5)
Student: Minako (2.2)

Course: CS134
* Teacher:  Lina Inverse
* Students: Ami, Rei

Course: CS200
* Teacher:  Gourry Gabriev
* Students: Usagi, Makoto, Minako
```

## Instructions

For this program we have three structs: Student, Teacher, and Course declared within School.h.

In Program.cpp there are several functions to implement, and you will modify Program().

The `Course` struct has a `Teacher * ptrTeacher` member to store an address to the teacher for the course, and a `vector<Student*> ptrStudents` to store addresses of all the students of the course.


### `void Register( Course& course, Student* student )`
In this function the `course` has a `ptrStudents` vector. Use the `push_back` function on it to add the `student` to the course.


### `void Register( Course& course, Teacher* teacher )`
In this function set `course`'s `ptrTeacher` to the `teacher` pointer passed in.


### `void Display( const Student& student )`
In this function display the `student`'s member variables: name and gpa.


### `void Display( const Teacher& teacher )`
In this function display the `teacher`'s member variables: name and salary.

### `void Display( const Course& course )`
In this function display the `course`'s member variables:

- code
- teacher's name via the `ptrTeacher` pointer
- all of the students' names via those pointers


To access the teacher pointer use `course.ptrTeacher`. Remember that this is a pointer to a teacher object so to grab a member variable from it you need to use the `->` in place of the dot operator.

For the student list, iterate through all of the students. You can iterate over all of the student pointers with a for loop:

`for ( size_t i = 0; i < course.ptrStudents.size(); i++ )`

then you can access `course.ptrStudents[i]`, then the `->` in place of the dot operator to access a student's member variable.











## Reference

