# Operator overloading practice 4: Relational operators

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
rach_grades: [0 = 3.5, 1 = 3.8, 2 = 4]
rai_grades: [0 = 4, 1 = 3.5, 2 = 3.8]
anuj_grades: [0 = 2, 1 = 2.5, 2 = 4, 3 = 4]

rach_grades == rai_grades? 1
anuj_grades == rai_grades? 0
rach_grades != rai_grades? 0
anuj_grades != rai_grades? 1
anuj_grades < rai_grades?  0
anuj_grades <= rai_grades? 0
anuj_grades > rai_grades?  1
anuj_grades >= rai_grades? 1
```


## Instructions
For this program we're going to add relational operators to the Grade class. This will allow us to compare two Grade objects with the relational operators - `<`, `>`, `==`, and so on.

### `bool operator==( const Grade& left, const Grade& right )`
Create two float variables for sums. Iterate through `left.grade_list`, summing each of the grades, then iterate through `right.grade_list` and sum those grades in the other variable.

Then, you can `return ( sum1 == sum2 );` which will return true if the two lists of grades have the same value, or false otherwise.


### `bool operator!=( const Grade& left, const Grade& right )`
Here you can just return the opposite of the result from `==`, like:
`return (!(left == right));`


### `bool operator<( const Grade& left, const Grade& right )`
Sum the two grades like we did with `==` and then `return (sum1 < sum2)`.


### `bool operator>( const Grade& left, const Grade& right )`
Follow the same steps as with `<`.


### `bool operator<=( const Grade& left, const Grade& right )`
Here you can return the result of `left < right || left == right`.


### `bool operator>=( const Grade& left, const Grade& right )`
Here you can return the result of `left > right || left == right`.




## Reference
Overloading relational operators, this will be friend functions - not member functions.

Declarations:
```
friend bool operator==( const THING& left, const THING& right );
friend bool operator!=( const THING& left, const THING& right );
friend bool operator<( const THING& left, const THING& right );
friend bool operator>( const THING& left, const THING& right );
friend bool operator<=( const THING& left, const THING& right );
friend bool operator>=( const THING& left, const THING& right );
```

Definitions:
```
bool operator==( const THING& left, const THING& right )
{
}

bool operator!=( const THING& left, const THING& right )
{
}

bool operator<( const THING& left, const THING& right )
{
}

bool operator>( const THING& left, const THING& right )
{
}

bool operator<=( const THING& left, const THING& right )
{
}

bool operator>=( const THING& left, const THING& right )
{
}
```
