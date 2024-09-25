# STL Practice 6: queue object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
QUEUE PROGRAM

Declaring a queue of strings...
--------------------------------------------------
QUEUE IS EMPTY
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on queue: C

Pushing the new item into the queue...
--------------------------------------------------
FRONT ITEM IN QUEUE: C
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on queue: A

Pushing the new item into the queue...
--------------------------------------------------
FRONT ITEM IN QUEUE: C
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 1
Enter new text to push on queue: T

Pushing the new item into the queue...
--------------------------------------------------
FRONT ITEM IN QUEUE: C
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 2

Popping the front item out of the queue...
--------------------------------------------------
FRONT ITEM IN QUEUE: A
--------------------------------------------------
0. Quit
1. PUSH item
2. POP item
>> 0

--------------------------------------------------

Iterate over queue until it's empty... show the front item then pop it...
FRONT OF QUEUE: A
FRONT OF QUEUE: T

THE END
```

## Instructions

For this program we will use the STL queue. A queue structure is a "first-in, first-out" structure, where the first item will be at the front of the queue and items that enter the queue after it must wait for the front-most item to get finished before they can be accessed.

1. Near the start of the program declare a queue of strings named `my_queue`.

2. Within the while loop, check if the queue is empty. If it is, display "QUEUE IS EMPTY". Otherwise, display the FRONT item of the queue. Use the `front` function to do this.

3. During case 1 of the switch statement the user wants to add `text` to the queue. Use the queue's `push` function to do this.

4. During case 2 of the switch statement the user wants to pop the front-most item out of the queue. Use the queue's `pop` function to do this.

5. After the while loop is over we will display each item of the queue, popping each item after we've seen it. While the queue is not empty, do the following:
   5a. Display the item at the front of the queue.
   5b. Pop the item at the front of the queue.


## Reference
queue documentation: https://cplusplus.com/reference/queue/queue/

Declare a queue:
```
queue<TYPE> QUEUENAME;
```

Push an item to the back of the queue:
```
QUEUENAME.push( VALUE );
```

Access the item at the front of the queue:
```
QUEUENAME.front()
```

Pop an from the front of the queue:
```
QUEUENAME.pop();
```

Get the total amount of items stored in the queue:
```
QUEUENAME.size()
```

Check if a queue is empty:
```
QUEUENAME.empty()
```
