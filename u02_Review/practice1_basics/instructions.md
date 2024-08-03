# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output
```
PET PROGRAM 

Enter your name: Rachel

Tell me about your pet...
Name: Luna
Age:  9
Animal: Cat
Breed: Feral

Rachel has a Feral Cat named Luna. Luna is 9!

THE END
```


# Instructions
- DISPLAY "Enter your name" to the screen.
- GET a LINE of input from cin, store it in `your_name`.
- DISPLAY "Tell me about your pet" to the screen.
- DISPLAY "Name:" to the screen.
- GET a LINE of input from cin, store it in `pet_name`.
- DISPLAY "Age:" to the screen.
- GET input from cin, store it in `pet_age`.
- CALL `cin.ignore();` to flush the input buffer.
- DISPLAY "Animal:" to the screen
- GET a LINE of input from cin, store it in `pet_animal`.
- DISPLAY "Breed:" to the screen
- GET a LINE of input from cin, store it in `pet_breed`.
- Finally, DISPLAY a message to the screen with text and variable values,
    such as "[NAME] has a [BREED] [ANIMAL] named [PETNAME]. [PETNAME] is [PETAGE]!"


# Reference
`cin >>` can be used on any variable type
getline can only be used on strings.

Get a line of text:
`getline( cin, VARIABLENAME );`

Flush the buffer:
`cin.ignore();`
