# Recursion practice 2: abc

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
MANUAL TESTS:
Abc_Iterative( 'A', 'G' ): ABCDEFG
Abc_Recursive( 'A', 'G' ): ABCDEFG

Abc_Iterative( 'm', 'p' ): mnop
Abc_Recursive( 'm', 'p' ): mnop

AUTOMATED TESTS:
[PASS]  TEST 1, Abc_Recursive(a, f, "") = [abcdef]
[PASS]  TEST 2, Abc_Recursive(C, G, "") = [CDEFG]
```


## Instructions

For these functions they take in a `start` letter and an `end` letter. The functions are supposed to return a string that contains all the letters between the start and end letter, inclusive.

### Iterative version
Use a for loop with a `char i` counter, you can use `i++` to move to the next letter. Add on to the `built_string` and make sure it's returned at the end of the function.


### Recursive version
Follow this line of logic to generalize and implement the recursive version of the function:

- "What is Abc( 'A', 'D' )?"
- "It's A + Abc( 'B', 'D' )."
- "What is Abc( 'B', 'D' )?"
- "It's B + Abc( 'C', 'D' )."
- "What is Abc( 'C', 'D' )?"
- "It's C + Abc( 'D', 'D' )."
- "What is Abc( 'D', 'D' )?"
- "It's D + Abc( 'E', 'D' )."
- "What is Abc( 'E', 'D' )?"
- "Hit a terminating case - return an empty character ''."
