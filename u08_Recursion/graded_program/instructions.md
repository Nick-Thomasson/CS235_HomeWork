# ASSIGNMENT

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
Running the program:
```
/
 home/
  school/
   english/
    essay1.txt
    essay2.txt
   compsci/
    homeworkA.cpp
    homeworkB.cpp
  projects/
   my_game/
    game.cpp

Enter name of FILE or FOLDER to find, or QUIT to stop: homeworkA.cpp
Path: /home/school/compsci/homeworkA.cpp

Enter name of FILE or FOLDER to find, or QUIT to stop: notthere.txt
Path:

Enter name of FILE or FOLDER to find, or QUIT to stop: QUIT
```

Running the tests:
```
[PASS]   FindFile( ptr_root, "FOL" ) = "ROOTFOLDER/"
[PASS]   FindFile( ptr_root, "CHILDFOLD" ) = "ROOTFOLDER/CHILDFOLDER/"
[PASS]   FindFile( ptr_root, "CHILDFIL" ) = "ROOTFOLDER/CHILDFILE.TXT"
[PASS]   FindFile( ptr_root, "FILEB" ) = "ROOTFOLDER/FOLDER2/FILEB.TXT"
[PASS]   FindFile( ptr_root, "ZZZZ" ) = ""
``**

## Instructions

You'll be working in **Functions.cpp** for this assignment, but you will be working with the `FilesystemNode` class. This item represents either a FILE or a FOLDER on a hard drive.

`FilesystemNode` contains the following member variables:
- `string name`, the name of the folder or file.
- `node_type`, which will either be `NodeType::FOLDER` or `NodeType::FILE`.
- `vector<shared_ptr<FilesystemNode>> contents;`, if this node is a FOLDER then it may contain other files and folders - other nodes.


### `void DisplayContents( shared_ptr<FilesystemNode> current_node, int tab )`
This function is already implemented and you can use it for reference, though the implementation of FindFile won't be exactly the same. The way this function works is to display the `current_node` name then use a **loop** to iterate through all of its child nodes. It then **recurses** into each child node if that node is a folder.


### `string FindFile( shared_ptr<FilesystemNode> current_node, string find_me )`
INPUT PARAMETERS:
@param    `current_node`    Pointer to the current file/folder node we're looking at
@param    `find_me`         Partial name of file/folder we're looking for

RETURN:
@return                     Returns the path to the file/folder we're searching for, uses recursion.


1. If the current node's name has a partial match with the `find_me` parameter, then
    - RETURN this current node's name as the result.
    - PARTIAL STRING MATCH: `if ( current_node->name.find( find_me ) != string::npos )`
    This is true if the name contains `find_me` anywhere within.

2. Afterwards, use a loop to iterate over all of the current node's contents. Within the loop:
    - RECURSE to the FindFile function, passing in this CHILD node and the `find_me` data. STORE the result in a string variable.
    - IF the result is NOT an empty string "", then we've found the file: Return `current_node->name + result`.

3. After the for loop, this means nothing was found in this recursive branch. In this case, just return an empty string "".


