# Recursion practice 3: Count letter

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
MANUAL TESTS:
CountLetter_Iterative( "Hello dello!", 'e' ): 2
CountLetter_Recursive( "Hello dello!", 'e' ): 2

CountLetter_Iterative( "abcd", 'z' ): 0
CountLetter_Recursive( "abcd", 'z' ): 0

AUTOMATED TESTS:
[PASS]  TEST 1, CountLetter_Recursive("aabbcc", 'a', 0) = [2]
[PASS]  TEST 2, CountLetter_Recursive("onethree", 'e', 0) = [3]
[PASS]  TEST 3, CountLetter_Recursive("xyz", 'X', 0) = [0]
rachelwil@rachelwil-GF63-Thin-9SC:~/TEACHING/cs235-private/2024-08/u08_Recurs
```

## Instructions

For these functions they take in a `text` string and a `letter_to_count` character. The recursive function has an extra variable `i` to mark the current position (if we didn't have this, we'd have to chop up `text` each time, which is also a viable strategy.)

### Iterative version
You can iterate over all of the letters of a string like an array. Use `text.size()` to get its size and `text[i]` to access a single letter. If the current letter at `text[i]` matches the `letter_to_count`, then add 1 to your total counter.


### Recursive version
Follow this line of logic to generalize and implement the recursive version of the function:

- "What is CountLetter( "hello", 'l', 0 )?"
- "I don't see an 'l' at position 0, so it's 0 + CountLetter( "hello", 'e', 1 )."
- "What is CountLetter( "hello", 'l', 1 )?"
- "I don't see an 'l' at position 1, so it's 0 + CountLetter( "hello", 'e', 2 )."
- "What is CountLetter( "hello", 'l', 2 )?"
- "There is an 'l' at this position, so it's 1 + CountLetter( "hello", 'e', 3 )."
- "What is CountLetter( "hello", 'l', 3 )?"
- "There is an 'l' at this position, so it's 1 + CountLetter( "hello", 'e', 4 )."
- "What is CountLetter( "hello", 'l', 4 )?"
- "I don't see an 'l' at position 1, so it's 0 + CountLetter( "hello", 'e', 5 )."
- "What is CountLetter( "hello", 'l', 5 )?"
- "This is past the end of the size of the string, so return 0."


| letter | index |
|--------|-------|
| h      | 0     |
| e      | 1     |
| l      | 2     |
| l      | 3     |
| o      | 4     |


