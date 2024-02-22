#ifndef _FUNCTIONS
#define _FUNCTIONS

#include <string>
using namespace std;

const string YOURNAME = "Your Name, Spring 2024"; // TODO: Update this to your name!

unsigned int GetStringLength( string text );
char GetLetter( string text, unsigned int position );
int GetSubstringPosition( string haystack, string needle );
string CombineStrings( string str1, string str2 );
int CompareStrings( string str1, string str2 );
string StringRelations( string str1, string str2 );
string InsertString( string original, string insert_me, int position );
string EraseFromString( string original, int position, int length );
string ReplaceInString( string original, string insert_me, int position, int length );
void Tester();

#endif
