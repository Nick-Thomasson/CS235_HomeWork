# Recursion practice 4: Factorial

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
MANUAL TESTS:
Factorial_Iterative( 0 ): 1
Factorial_Recursive( 0 ): 1

Factorial_Iterative( 1 ): 1
Factorial_Recursive( 1 ): 1

Factorial_Iterative( 3 ): 6
Factorial_Recursive( 3 ): 6

Factorial_Iterative( 5 ): 120
Factorial_Recursive( 5 ): 120

AUTOMATED TESTS:
[PASS]  TEST 1, Factorial_Recursive(0) = [1]
[PASS]  TEST 2, Factorial_Recursive(1) = [1]
[PASS]  TEST 3, Factorial_Recursive(3) = [6]
[PASS]  TEST 4, Factorial_Recursive(5) = [120]
```


## Instructions

For these functions we calculate n!, where n! = n * (n-1) * (n-2) * ... * 2 * 1.

Note that you can have either one or two terminating cases:
- 1! = 1
- 0! = 1

Technically you can use just the "0! = 1" as a terminating case but that gives you an extra function call when running the recursive version.


### Iterative version
Use a for loop to iterate over the range of numbers (n to 1) and multiply them onto the `product`.


### Recursive version
Follow this line of logic to generalize and implement the recursive version of the function:

- "What is Fac(3) ?"
- "It is 3 * Fac(2)"
- "What is Fac(2) ?"
- "It is 2 * Fac(1)"
- "What is Fac(1) ?"
- "(Terminating case) It is 1."


