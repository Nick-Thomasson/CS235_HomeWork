# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
    MY CLASSES v3

    Enter class #0: CS 134
    Enter another? (Y/N): y

    Enter class #1: CS 210
    Enter another? (Y/N): y

    Enter class #2: ASL 120
    Enter another? (Y/N): n


    Resulting array:
    0 = CS 134
    1 = CS 210
    2 = ASL 120


# Instructions
1. Near the top of `main()`, declare a vector of strings named `my_classes`.

2. Within the do/while loop, after the getline statement, push the `new_class` variable into the `my_classes` vector.

3. After the "Resulting array:" text, create a for loop that iterates over all the elements of the `my_classes` vector. Within the for loop, display the index and element.


# Reference
Declaring a vector:
`vector<TYPE> VECTORNAME;`

Accessing a vector's size:
`VECTORNAME.size()`

Pushing a new item into the vector:
`VECTORNAME.push_back( DATA );`
