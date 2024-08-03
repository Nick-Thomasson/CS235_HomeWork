# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
  I'm thinking of a secret number between 1 and 10.

  What is your guess?
  Enter a number between 1 and 10: -5

  ** INVALID CHOICE! Try again: 200

  ** INVALID CHOICE! Try again: 3

  My number was 5!
  How did you do?

  GOODBYE


# Instructions
Implement the GetInput function.
1. DECLARE a variable to store the user's input.
2. DISPLAY a message asking them to enter a number.
3. GET the user's choice and store it in your variable.
4. WHILE the user's choice is less than `min_value` OR user's choice is greater than `max_value` then do the following:
  4a. Display a message "The input is invalid. Try again:".
  4b. GET the user's choice and store it in your same input variable.
5. AFTER THE WHILE LOOP, we now have valid input. At this point RETURN the user's input.


# Reference
AND operator: &&
OR operator:  ||
NOT operator: !
