#ifndef _FILESYSTEM_NODE
#define _FILESYSTEM_NODE

#include <string>
#include <vector>
#include <memory>
using namespace std;

enum class NodeType {
  FOLDER,
  FILE
};

struct FilesystemNode
{
  FilesystemNode() { }
  FilesystemNode( string new_name, NodeType new_node_type )
  {
    name = new_name;
    node_type = new_node_type;
  }

  //! Name of this file/folder
  string name;
  //! Is this a folder or file?
  NodeType node_type;
  //! If this is a folder it may contain files and folders
  vector<shared_ptr<FilesystemNode>> contents;
};

#endif
