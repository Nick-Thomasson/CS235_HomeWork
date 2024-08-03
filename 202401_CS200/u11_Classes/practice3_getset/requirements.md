# Practice 3: Class Get/Set functions (Player program)

## Introduction

Within the "Player.h" file, a class is declared: `Player`.
Pet contains the following **member variables**:

- `string name`
- `int level`

These member variables are **private**, meaning that you cannot access
these variables from within `main()` or outside of the class itself.

The class also has the following **member functions** (aka methods):

- `void SetName( string new_name );`
- `void SetLevel( int new_level );`
- `string GetName() const;`
- `int GetLevel() const;`
- `void LevelUp();`
- `void Display() const;`

This class contains **Getter** (or *Accessor*) and **Setter** (or *Mutator*) functions.

**Set** functions take in a parameter that stores a new value and overwrites the value of the corresponding private member variable.

**Get** functions access the private member variables and return a *copy* of its value. Get functions are marked as `const` because when we're *reading data*, we generally don't want to allow that data to change.

-------------------------------------------------------------------------------

## Updating main()

Within `main()` we have a `Player player;` variable declared.

We have some code that is attempting to read a *savegame.txt* file to load in the player data. There will be information stored in the local `name` variable and local `level` variables.

After `input.close()`, you will need to set the `player`'s name by calling the `SetName` function and passing in the `name` variable as an argument.

Then we need to set the `player`'s level by calling the `SetLevel` function and passing in the `level` variable as an argument.

After the "YOUR CHARACTER" output, call the `player`'s `Display` function. It doesn't take any arguments.

After the "LEVEL UP!!" output, call the `player`'s `LevelUp` function. It doesn't take any arguments.

After `output.open("savegame.txt");`, write an `output` statement that writes out the `player`'s name and level, using the `GetName` and `GetLevel` functions.

-------------------------------------------------------------------------------

## Example output

```
g++ *.h *.cpp && ./a.out
Loading game...
Couldn't find savegame, creating new character.
YOUR CHARACTER
Name:  Default Knight
Level: 1

LEVEL UP!!

Saving game...
```