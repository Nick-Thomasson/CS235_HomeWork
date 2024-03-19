// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

unsigned int GetStringLength( string text )
{
	return text.size();

}

char GetLetter( string text, unsigned int position )
{
	return text[position];
}

int GetSubstringPosition( string haystack, string needle )
{

	return haystack.find(needle);

}

string CombineStrings( string str1, string str2 )
{
	return str1 + str2;
}

int CompareStrings( string str1, string str2 )
{

  return str1.compare(str2);
}

string StringRelations( string str1, string str2 )
{
  if (str1 < str2) {
        return " < ";
    } else if (str1 > str2) {
        return " > ";
    } else {
        return " == ";
    }
}

string InsertString( string original, string insert_me, int position )
{
  return original.insert(position, insert_me);
}

string EraseFromString( string original, int position, int length )
{
  return original.erase(position, length);
}

string ReplaceInString( string original, string insert_me, int position, int length )
{
  return original.replace(position, length, insert_me);
}
