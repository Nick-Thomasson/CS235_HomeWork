# Operator overloading practice 1: Assignment operator

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
rai_grades:
[0 = 4, 1 = 3.5, 2 = 3.8]

anuj_grades:
[0 = 4, 1 = 3.5, 2 = 3.8]
```


## Instructions
Within the Grade class implement the `operator=` function. We will have to tell the program what it means to assign one `Grade` object to another - in this case, we are just going to copy the `other.grades` over to the `this->grades`.

Make sure that you return the dereferenced `this` pointer at the end.

Under main(), uncomment out the line of code:
`anuj_grades = rai_grades;`
which is now valid code now that we've overloaded the = operator for the Grade object.


## Reference
Overloading the assignment operator:
This will be a member function of the class.

```
class THING
{
public:
    THING& operator=( const THING& other )
    {
        // Copy things as you prefer
        return *this;
    }
};
```
