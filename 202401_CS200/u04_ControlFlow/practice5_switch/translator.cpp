// PROGRAM: Practice using switch statements

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
// TODO: Create two string variables, `english` and `translated`. Initialize `english` to "cat".
string english;
string translated;
english = "cat";

// TODO: Create a character variable named `language`. Ask the user to enter a language letter,
// and store their response in this variable.
char language;
cout << "Please enter language letter: (e, s, m, h, or ? for unsure) " << endl;
cin >> language;


// TODO: Use a switch statement to look at the `language` chosen.
// In case of 'e', set `translated` to "kato".
// In case of 's', set `translated` to "gato".
// In case of 'm', set `translated` to "mao".
// In case of 'h', set `translated` to "billee".
// For the default case, set `translated` to "?"
switch ( language )
{
case 'e':
translated = "kato";
break;

case 's':
translated = "gato";
break;

case 'm':
translated = "mao";
break;

case 'h':
translated = "billee";
break;

default:
translated = "?";
break;
}

// TODO: Display the `english` word and then `translated` word.`
cout << "The english version is: " << english << endl;
cout << "The translated version is: " << translated << endl;



// Return 0 means quit program with no errors, in this context.
return 0;
}
