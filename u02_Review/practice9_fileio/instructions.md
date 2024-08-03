# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
 *Example program output (RUN 1):*
 ------------------------------------------
 Loading game... Couldn't find savegame, creating new character.

 YOUR CHARACTER: Name: Default Knight,  Level: 1
 LEVEL UP!!

 Saving game...
 ------------------------------------------

 *Example program output (RUN 2):*
 ------------------------------------------
 Loading game... Success!

 YOUR CHARACTER: Name: Default Knight, Level: 2
 LEVEL UP!!

 Saving game...
 ------------------------------------------


 *Example data file:*
 ------------------------------------------
 Default Knight
 2
 ------------------------------------------




# Instructions
This program will show how we both *save* /and/ *load* a data file in order to keep track of information between different runs of the program. For this program it will load in a player's character data, make an update, and save the new data. Each time you run the program the player character's level will go up by 1.

Do the following:
1. Create an `ifstream` object named `input`.
2. Open the `savegame.txt` file in the `input` file.
3. If reading the file failed (`if ( input.fail() )`), then do the following:
   3a. Display a message "couldn't find savegame, creating a new character."
   3b. Set `name` to "Default Knight"
   3c. Set `level` to 1
4. Else if fail did not occur, do the following:
   4a. Use getline to read from `input` to the `name` variable. (getline ONLY works with strings!)
   4b. Use `>>` to read from `input` to the `level` variable.
5. After the if/else statement use the ifstream's `close` function (https://cplusplus.com/reference/fstream/ifstream/close/) to close the data file.
6. Next, the character's information is displayed and their level goes up by 1 (this is already written).
7. After the "Saving game..." text, create an output file stream (`ofstream`) named `output`.
8. Open the "savegame.txt" file in the `output` file.
9. Output `name` to the `output` file, and an `endl`.
10. Output `level` to the `output` file, and an `endl`.


When you run the program the first time a new player file will be created. You will be able to see the "savegame.txt" file on your computer. You can also edit the name and level by opening this file in a text editor like notepad.

Each subsequent run of the program will add 1 to the level, showing an increase in level each time.


# Reference
Checking to see if opening a file into an input file failed (e.g., no file):
```
if ( input.fail() )
{
  cout << "FILE NOT FOUND" << endl;
}
```

Closing an input file stream:
`INFILEVAR.close();`
