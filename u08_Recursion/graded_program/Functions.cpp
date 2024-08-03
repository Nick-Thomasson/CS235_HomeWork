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

/**
@param    current_node      Pointer to the current file/folder node we're looking at
@param    find_me           Partial name of file/folder we're looking for
@return                     Returns the path to the file/folder we're searching for, uses recursion.
*/
string FindFile( shared_ptr<FilesystemNode> current_node, string find_me )
{
  // - STUDENT CODE ----------------------------------------------------------

  // -------------------------------------------------------------------------
  return ""; // Return empty string if not found
}


