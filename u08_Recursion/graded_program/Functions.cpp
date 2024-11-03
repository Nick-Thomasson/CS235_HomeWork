#include "Functions.h"
#include <iostream>
#include <memory>
#include <string>
using namespace std;

/**
@param    current_node      Pointer to the current file/folder node we're looking at
@param    tab               How many spaces forward we should indent
*/
void DisplayContents( shared_ptr<FilesystemNode> current_node, int tab )
{
  // Every item: Display the name of the current file/folder we're on
  cout << string( tab, ' ' ) << current_node->name << endl;

  // If this is a folder, it may contain files and folders.
  if ( current_node->node_type == NodeType::FOLDER )
  {
    // Iterate through all the children.
    for ( auto& child : current_node->contents )
    {
      // Recurse: Do the same thing for each child file/folder.
      DisplayContents( child, tab+1 );
    }
  }
}




/*
### `string FindFile(shared_ptr<FilesystemNode> current_node, string find_me)`
INPUT PARAMETERS :
@param    `current_node`    Pointer to the current file / folder node we're looking at
@param    `find_me`         Partial name of file / folder we're looking for

RETURN:
@return                     Returns the path to the file / folder we're searching for, uses recursion.


1. If the current node's name has a partial match with the `find_me` parameter, then
- RETURN this current node's name as the result.
- PARTIAL STRING MATCH : `if (current_node->name.find(find_me) != string::npos)`
This is true if the name contains `find_me` anywhere within.

2. Afterwards, use a loop to iterate over all of the current node's contents. Within the loop:
- RECURSE to the FindFile function, passing in this CHILD node and the `find_me` data.STORE the result in a string variable.
- IF the result is NOT an empty string "", then we've found the file: Return `current_node->name + result`.

3. After the for loop, this means nothing was found in this recursive branch.In this case, just return an empty string "".

/**
@param    current_node      Pointer to the current file/folder node we're looking at
@param    find_me           Partial name of file/folder we're looking for
@return                     Returns the path to the file/folder we're searching for, uses recursion.
*/
string FindFile( shared_ptr<FilesystemNode> current_node, string find_me )
{
    if (current_node->name.find(find_me) != string::npos) {
        return current_node->name;
    }
    for (auto& child : current_node->contents) {
        string result = FindFile(child, find_me);
        if (!result.empty()) {
            return current_node->name + result;
        }
    }
    return "";
}


