# STL Practice 5: stack object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
STACK PROGRAM

Declaring a stack of strings...
--------------------------------------------------
STACK IS EMPTY
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on stack: C

Pushing the new item onto the stack...
--------------------------------------------------
TOP ITEM IN STACK: C
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on stack: A

Pushing the new item onto the stack...
--------------------------------------------------
TOP ITEM IN STACK: A
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on stack: T

Pushing the new item onto the stack...
--------------------------------------------------
TOP ITEM IN STACK: T
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 2

Popping the top item off the stack...
--------------------------------------------------
TOP ITEM IN STACK: A
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 0

--------------------------------------------------

Iterate over stack until it's empty... show the top item then pop it...
TOP OF STACK: A
TOP OF STACK: C

THE END
```

## Instructions

For this program we will use the STL stack. A stack structure is a "first-in, last-out" structure, where the first item ends up at the bottom of the stack and all newer items are stacked on top of it.

1. Near the start of the program declare a stack of strings named `my_stack`.

2. Within the while loop, check if the stack is empty. If it is, display "STACK IS EMPTY". Otherwise, display the TOP item of the stack. Use the `top` function to do this.

3. During case 1 of the switch statement the user wants to add `text` to the stack. Use the stack's `push` function to do this.

4. During case 2 of the switch statement the user wants to pop the top-most item off the stack. Use the stack's `pop` function to do this.

5. After the while loop is over we will display each item of the stack, popping each item after we've seen it. While the stack is not empty, do the following:
   5a. Display the item at the top of the stack.
   5b. Pop the item at the top of the stack.


## Reference
stack documentation: https://cplusplus.com/reference/stack/stack/

Declare a stack:
```
stack<TYPE> STACKNAME;
```

Push an item to the top of the stack:
```
STACKNAME.push( VALUE );
```

Access the item at the top of the stack:
```
STACKNAME.top()
```

Pop an off the top of the stack:
```
STACKNAME.pop();
```

Get the total amount of items stored in the stack:
```
STACKNAME.size()
```

Check if a stack is empty:
```
STACKNAME.empty()
```
