# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
*Run 1:*
    Enter the battery charge: %95
    Image: [****]

*Run 2:*
    Enter the battery charge: %65
    Image: [**__]

etc.


# Instructions
After the user inputs a value for the `charge` variable, use if/else if/else statements to decide which battery image to draw.
- 90% and above: [****]  
- 75% and above: [***-]  
- 50% and above: [**--]
- 25% and above: [*---]
- below 25%:     [----]


# Reference
An if/else if/else statement takes the form:
```
// A. Occurs always
cout << "Example output A" << endl;

if ( CONDITION1 )
{
    // B1. This code is executed when CONDITION1 is true
    cout << "Example output B-1" << endl;
}
else if ( CONDITION2 )
{
    // B2. This code is executed when CONDITION1 is false and CONDITION2 is true.
    cout << "Example output B-2" << endl;
}
else if ( CONDITION3 )
{
    // B3. This code is executed when CONDITION1 and CONDITION2 is false and CONDITION3 is true.
    cout << "Example output B-3" << endl;
}
else
{
    // B4. This code is executed when all CONDITIONs above are false.
    cout << "Example output B-4" << endl;
}

// C. Occurs always
cout << "Example output C" << endl;
```
