# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
LAB: LINKED NODES
1. Allocating memory for the nodes...
- constructor (A)
- constructor (B)
- constructor (C)

2. data values:
- firstNode->data: A
- secondNode->data: B
- thirdNode->data: C

3. Link nodes: firstNode -> secondNode -> thirdNode...

4. Nodes, in order: A, B, C

5. Iterating through nodes...
- prtCurrent is currently at: A
- prtCurrent is currently at: B
- prtCurrent is currently at: C

6. Free the memory...
- destructor (A)
- destructor (B)
- destructor (C)

THE END
```


## Instructions

For this program we have a Node struct which contains some `data` as well as a pointer to `ptrNext`, the next Node in the list of Nodes. We are going to link them together to create a simple list structure.

1. Allocating memory for the nodes. Since the Node class has a constructor that takes in a value, set `firstNode` to "A", `secondNode` to "B", and `thirdNode` to "C".

2. Display each Node pointer's `data` member variable to the screen.

3. Since the Node class contains a `Node* ptrNext`, we can tell our program which comes next in the list:
   - Set `firstNode`'s `ptrNext` to `secondNode`.
   - Set `secondNode`'s `ptrNext` to `thirdNode`.

4. Display each Node's data, going through the `firstNode`:
   - Display `firstNode`'s data.
   - Display `firstNode->ptrNext`'s data.
   - Display `firstNode->ptrNext->ptrNext`'s data.'

5. To "walk" through the entire list of linked nodes we need a pointer to keep our progress, we will use `ptrCurrent` here:
   - Initialize `ptrCurrent` to `firstNode`, this will copy `firstNode`'s address into `ptrCurrent`.
   - Create a while loop: While `ptrCurrent` is not `nullptr`. Within the loop:
     - Display `ptrCurrent`'s `data`.
     - Set `ptrCurrent` to `ptrCurrent->ptrNext` to move to the next item.

6. Free the memory - if we're not using smart pointers we have to manually deallocate the memory once we're done. Use the `delete` command to free the space of `firstNode`, `secondNode`, and `thirdNode`.


## Reference
Declare a pointer and initialize it to `nullptr`:
```
TYPE * PTRNAME{nullptr};
```

Allocate space for a variable via a pointer:
```
PTRNAME = new TYPE;
```

Deallocating space for a variable via a pointer:
```
delete PTRNAME;
```


Allocate space for an object via a pointer, call a parameterized constructor:
```
PTRNAME = new TYPE( VALUE );
```

Access an object's member variables via a pointer:
```
PTR->MEMBER
```
