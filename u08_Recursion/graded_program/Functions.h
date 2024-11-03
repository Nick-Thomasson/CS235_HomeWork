#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <memory>
#include <string>
using namespace std;

#include "FilesystemNode.h"

void DisplayContents( shared_ptr<FilesystemNode> current_node, int tab );
string FindFile( shared_ptr<FilesystemNode> current_node, string find_me );

#endif
