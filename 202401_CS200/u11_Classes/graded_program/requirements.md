# Graded: Employee program

## Introduction

Within the "Employee.h" file, a class is declared: `Employee`.
Pet contains the following **member variables**:

- `int employee_id`
- `string name`
- `float hourly_wage`

These member variables are **private**, meaning that you cannot access
these variables from within `main()` or outside of the class itself.

The class also has the following **member functions** (aka methods):

- `Employee( int new_id, string new_name, float new_wage );`
- `int GetId() const;`
- `string GetName() const;`
- `float GetWage() const;`

These functions have been *declared* but have not yet been *defined*, you will need to do this within the **Employee.cpp** file, as well as updating the `StudentCode` function in the **main.cpp** file.

-------------------------------------------------------------------------------

## Updating Employee.cpp

You will need to define each of the Employee functions.

### Employee::Employee(int new_id, string new_name, float new_wage)

This function takes in the following **parameters** as input: `new_id`, `new_name`, `new_wage`.

The Employee class has the private member varaibles: `employee_id`, `name`, and `hourly_wage`.

Assign the *private member variables* values from the corresponding *parameters*.

### int Employee::GetId() const

This function should return the value from the `employee_id` member variable.

### string Employee::GetName() const

This function should return the value from the `name` member variable.

### float Employee::GetWage() const

This function should return the value from the `hourly_wage` member variable.


## Updating main.cpp StudentCode function

Within `int StudentCode( vector<Employee> employee_list, int lookup_id )`, the following *input parameters* have been passed in:

- `vector<Employee> employee_list`, an array-vector of Employee variables.
- `int lookup_id`, an integer id the user wishes to look up.

Create a **for loop** to iterate over all the elements of the vector.

- Initialization: Create a counter int variable `i` or `index` and initialize it to 0.
- Condition: While `index` is less than `employee_list.size()` the for loop will continue.
- Update action: Increment `index` by 1 each time.

Within the **for loop** we can access *one element variable* from the `employee_list` vector by accessing it with the index and the subscript operator: `employee_list[i]` (or `index`).

Inside the for loop, if the Employee variable at `[i]`'s ID matches the `lookup_id` passed in, then `return` this current `i` index. Remember that you can't access the Employee `employee_id` directly, you have to use the `GetId` function.

**After the for loop is over**, return `-1`. This means that we searched the entire vector but no match was found so we are returning "-1" to symbolize "not here".

-------------------------------------------------------------------------------

## Example output

Running the automated tests:

```
g++ *.h *.cpp && ./a.out 
1. Run AUTOMATED TESTS
2. Run PROGRAMS
>> 1
2024-01-U11-P1-TEST; STUDENT: Your Name, Spring 2024
[PASS]  TEST 1, StudentCode([[11/100.000000/AAA],[22/200.000000/BBB],[33/300.000000/CCC],[44/400.000000/DDD]], 44) = 3
[PASS]  TEST 2, StudentCode([[100/11.000000/aardvark],[200/12.000000/bear]], 200) = 1
[PASS]  TEST 3, StudentCode([[100/11.000000/aardvark],[200/12.000000/bear]], 444) = -1
```

Running the program:

```
g++ *.h *.cpp && ./a.out 
1. Run AUTOMATED TESTS
2. Run PROGRAMS
>> 2
Employee table:

INDEX     ID        NAME                          WAGE      
--------------------------------------------------------------------------------
0         123       Ochoa                         16.65     
1         234       Bakalar                       16.65     
2         353       Grubb                         16.65     

Enter an ID to retrieve: 123
RESULT: Index = 0
```