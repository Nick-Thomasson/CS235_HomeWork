# Practice 1: Basic class (Pet program)

## Introduction

Within the "Pet.h" file, a class is declared: `Pet`.
Pet contains the following **member variables**:

- `string name`
- `int age`
- `string animal`
- `string breed`

These member variables are **private**, meaning that you cannot access
these variables from within `main()` or outside of the class itself.

The class also has the following **member functions** (aka methods):

- `void SetName( string new_age )`
- `void SetAge( int new_age )`
- `void SetAnimal( string new_animal )`
- `void SetBreed( string new_breed )`
- `void Display()`

These functions are used to interface with the `Pet` class,
instead of accessing the member variables directly.

We will be using the `Pet` class within `main()` for this practice.

-------------------------------------------------------------------------------

## Updating main()

Within `main()`, a `Pet` variable has been declared, and its data initialized:

```c++
Pet my_pet;
my_pet.SetName( "Luna" );
my_pet.SetAge( 5 );
my_pet.SetAnimal( "Cat" );
my_pet.SetBreed( "Gremlin" );
```

There's a main menu where the user can update each field.
You'll be working inside the if statements to write the **update**
code for options 1, 2, 3, and 4.

### if ( choice == 1 ) // Update name

Within this function, do the following:

1. Create a temporary string variable called `name`.
2. Ask the user to enter a new name.
3. Get the name with the `getline` function and store it in the `name` variable.
4. Call `my_pet`'s `SetName` function, passing in the `name` as the argument.

### else if ( choice == 2 ) // Update age

Within this function, do the following:

1. Create a temporary int variable called `age`.
2. Ask the user to enter a new age.
3. Get the user's input and store it in `age`.
4. Call `my_pet`'s `SetAge` function, passing in `age` as the argument.

### else if ( choice == 3 ) // Update animal

Within this function, do the following:

1. Create a temporary string variable called `animal`.
2. Ask the user to enter a new animal type.
3. Get the user's input and store it in `animal`.
4. Call `my_pet`'s `SetAnimal` function, passing in `animal` as the argument.

### else if ( choice == 4 ) // Update breed

Within this function, do the following:

1. Create a temporary string variable called `breed`.
2. Ask the user to enter a new breed.
3. Get the user's input and store it in `breed`.
4. Call `my_pet`'s `SetBreed` function, passing in `breed` as the argument.

-------------------------------------------------------------------------------

## Example output

```
g++ *.h *.cpp && ./a.out 
Luna (Age: 5), Cat/Gremlin

-- MAIN MENU --
1. Update name
2. Update age
3. Update animal
4. Update breed
---
0. Exit

>> 1
Enter new name: Kabe


Kabe (Age: 5), Cat/Gremlin

-- MAIN MENU --
1. Update name
2. Update age
3. Update animal
4. Update breed
---
0. Exit

>> 2
Enter new age: 10


Kabe (Age: 10), Cat/Gremlin

-- MAIN MENU --
1. Update name
2. Update age
3. Update animal
4. Update breed
---
0. Exit

>> 3
Enter new animal type: Dog


Kabe (Age: 10), Dog/Gremlin

-- MAIN MENU --
1. Update name
2. Update age
3. Update animal
4. Update breed
---
0. Exit

>> 4
Enter new breed: Actually A Cat


Kabe (Age: 10), Dog/Actually A Cat

-- MAIN MENU --
1. Update name
2. Update age
3. Update animal
4. Update breed
---
0. Exit
```
