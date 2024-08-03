# Polymorphism practice 1

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
--------------------------------------------------------------------------------
ROUND 1
Gorblin (11/11), AC: 14
Dalfin (9/9), AC: 15

### Gorblin's turn! ###
Gorblin attacks with a Crossbow!
Hit! Dalfin takes 7 points of damage!

### Dalfin's turn! ###
1. Attack with Rapier 	 2. Attack with Short Bow
CHOICE: 1
Dalfin attacks with a Rapier!
Hit! Gorblin takes 5 points of damage!
```


## Instructions
In the CharacterFamily.h there is a base `ICharacter` that contains common functionality for any game character. I've already created the `NonPlayerCharacter` inheriting from `ICharacter`.

In this file, implement a `PlayerCharacter` class. You'll also need the two constructors, a virtual destructor, the virtual DecideAction function, and the two virtual Action functions.


Within CharacterFamily.cpp, for the NPC functions, I used a random roll for the NPC to decide which action to take. I've also implemented the two different attack actions.

You will implement the PlayerCharacter versions:

### `PlayerCharacter::PlayerCharacter()`
You can leave the function body here empty.


### `PlayerCharacter::PlayerCharacter( string new_name, int new_armor, int new_hp )`
The function body here can be empty, but you should call the `ICharacter` parent class' constructor:
```
PlayerCharacter::PlayerCharacter( string new_name, int new_armor, int new_hp )
    : ICharacter( new_name, new_armor, new_hp )
{
}
```


### `PlayerCharacter::~PlayerCharacter()`
You can leave the function body here empty.


### `void PlayerCharacter::DecideAction( int& attack_roll, int& damage_roll )`
In this function display a simple numbered menu, such as:

```
1. Attack with Rapier       2. Attack with Short Bow
```

Ask the user to enter a choice and store it in an integer variable. Based on the player's selection call Action1 or Action2.


### `void PlayerCharacter::Action1( int& attack_roll, int& damage_roll )`
Display a message that the player attacks with the weapon (e.g., Rapier).

You'll also set values for the `attack_roll` and `damage_roll`. You can use the `RollDie` function. Example:

- Attack roll: `RollDie( 20 ) + 3`
- Damage roll: `RollDie( 8 ) + 3`


### `void PlayerCharacter::Action2( int& attack_roll, int& damage_roll )`
Display a message that the player attack with the weapon (e.g., Short Bow). Same thing as above.

- Attack roll: `RollDie( 20 ) + 4`
- Damage roll: `RollDie( 6 ) + 3`


### main()
Within the main function I've already created two NonPlayerCharacters:

```
    players.push_back( new NonPlayerCharacter( "Gorblin", 14, 11 ) );
    players.push_back( new NonPlayerCharacter( "Zeepboop", 13, 14 ) );
```

Go ahead and create a `PlayerCharacter` and push it into the `players` vector.

I have the two NPCs targeting different indices:

```
    players[0]->SetOpponentIndex( 1 );
    players[1]->SetOpponentIndex( players.size()-1 );
```

Your player will be at `players[2]`, use the same function to set the Player's opponent to either 0 or 1.


After that the rest of the game should work since we're utilizing polymorphism to treat all characters like an `ICharacter*` pointer.
