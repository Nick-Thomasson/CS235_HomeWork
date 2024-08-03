# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
  Enter a low number: 5
  Enter a high number: 25

  Enter step: 4

  LOW TO HIGH
  5 9 13 17 21 25

  HIGH TO LOW
  25 21 17 13 9 5

  GOODBYE


# Instructions
Under the "LOW TO HIGH" label, create a while loop that counts from low to high:
- INIT is setting `counter` to the value from `low_number`.
- CONDITION is `counter` is less than or equal to the `high_number`.
- UPDATE is incrementing the `counter` by the `step` amount.

Under the "HIGH TO LOW" label, create a while loop that counts from high to low:
- INIT is setting `counter` to the value from `high_number`.
- CONDITION is `counter` is greater than or equal to the `low_number`.
- UPDATE is decrementing the `counter` by the `step` amount.


# Reference
For loop form:
```
for ( INIT; CONDITION; UPDATE )
{

}
```

Increment by some amount:
VARIABLE += VALUE;

Decrement by some amount:
VARIABLE -= VALUE;
