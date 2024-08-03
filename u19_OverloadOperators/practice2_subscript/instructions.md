# Operator overloading practice 2: Subscript operator

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
rai_grades: [0 = 4, 1 = 3.5, 2 = 3.8]
```


## Instructions
For this one we're adding the subscript operator to the `Grade` class. It's again up to us to decide what the subscript operator means to the classes we create.

For this case, our `operator[]` function will have a `float` return type and take a `size_t index` as its parameter. Within the function, we're just going to return `grades[index]`.

Within main(), uncomment out the line where we use the subscript operator:
`cout << endl << "rai_grades[1]: " << rai_grades[1] << endl;`


## Reference
Overloading the subscript operator:
This will be a member function of the class.

```
class THING
{
public:
    TYPE1 operator[]( TYPE2 VAR )
    {
        // Return the thing you want to return
    }
};
```
