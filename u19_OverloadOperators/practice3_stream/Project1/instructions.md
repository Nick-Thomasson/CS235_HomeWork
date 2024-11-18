# Operator overloading practice 3: Stream operators

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Enter three grades (0.0 to 4.0), separated by spaces: 3.0 3.5 2.0

rai_grades: [0 = 3, 1 = 3.5, 2 = 2]
```


## Instructions
We can implement the stream operator functions that way we can tell our program how to work with `cin >>` and `cout <<` statements, as well as with any other std library streams like `ifstream` and `ofstream` for file input/output.

Implement the function definitions for `operator<<` and `operator>>` between the `class Grade` declaration and the `int main` parts.

### `ostream& operator<<( ostream& out, const Grade& grade )`
Here we can tell our program what it means to "output" our Grade object. In this case, iterate over all of the `grade.grade_list` items and write out each index `i` and value `grade.grade_list[i]`, but instead of using `cout`, work with the `out` parameter. At the end of the function return the `out` object.


### `istream& operator>>( istream& in, Grade& grade )`
For the input stream function create a float variable. Read into that variable with the `in >>` parameter. Afterwards, you can push this new item into the `grade.grade_list` vector. At the end, return the `in` object.


## Reference
Stream operator overloading.
This function is not a member function, it is a friend function.

Declarations:
```
friend ostream& operator<<( ostream& out, const TYPE& VAR );
friend istream& operator>>( istream& in, TYPE& VAR );
```

Definitions:
```
ostream& operator<<( ostream& out, const TYPE& VAR )
{
  // Use out << to output whatever data you want
  return out;
}

istream& operator>>( istream& in, TYPE& VAR )
{
  // Use in >> to read into whatever you need
  return in;
}
```
