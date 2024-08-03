# Recursion practice 1: Count up

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
CountUp_Iterative( 2, 5 ): 2 3 4 5
CountUp_Recursive( 2, 5 ): 2 3 4 5

CountUp_Iterative( 10, 20 ): 10 11 12 13 14 15 16 17 18 19 20
CountUp_Recursive( 10, 20 ): 10 11 12 13 14 15 16 17 18 19 20
```


## Instructions

For this program you will implement two functions, one counts up using a loop (`CountUp_Iterative`) and the other one counts up using recursion (`CountUp_Recursive`).

Both functions take in a `start` value and an `end` value and are meant to display the numbers between `start` and `end`, inclusive.

### Iterative version
A for loop is probably the easiest here.


### Recursive version
Follow this line of logic to generalize and implement the recursive version of the function:

- "What is CountUp( 2, 5 )?"
- "It's 2, then CountUp( 3, 5 )."
- "What's CountUp( 3, 5 )?"
- "It's 3, then CountUp( 4, 5 )."
- "What's CountUp( 4, 5 )?"
- "It's 4, then CountUp( 5, 5 )."
- "What's CountUp( 5, 5 )?"
- "It's 5, then CountUp( 6, 5 )."
- "What's CountUp( 6, 5 )?"
- "Nothing, we've hit the terminating case."



## Reference
A recursive function must have at least one terminating case and recursive case.
