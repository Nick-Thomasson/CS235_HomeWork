#include "Program.h"

#include "Functions.h"

#include <iostream>
using namespace std;

//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - PROGRAM STARTER --------------------------------------------------------//
void Program()
{
  cin.ignore();
  auto ptr_root = SetupFilesystem();

  DisplayContents( ptr_root, 0 );

  while ( true )
  {
    string find_name;
    cout << endl << "Enter name of FILE or FOLDER to find, or QUIT to stop: ";
    getline( cin, find_name );

    if ( find_name == "QUIT" )
    {
      return;
    }

    string path = FindFile( ptr_root, find_name );
    cout << "Path: " << path << endl;
  }
}

// - DATA SETUP --------------------------------------------------------//
shared_ptr<FilesystemNode> SetupFilesystem()
{
  auto ptr_root     = shared_ptr<FilesystemNode>( new FilesystemNode( "/", NodeType::FOLDER ) );
  auto ptr_home     = shared_ptr<FilesystemNode>( new FilesystemNode( "home/", NodeType::FOLDER ) );
  auto ptr_school   = shared_ptr<FilesystemNode>( new FilesystemNode( "school/", NodeType::FOLDER ) );
  auto ptr_english  = shared_ptr<FilesystemNode>( new FilesystemNode( "english/", NodeType::FOLDER ) );
  auto ptr_compsci  = shared_ptr<FilesystemNode>( new FilesystemNode( "compsci/", NodeType::FOLDER ) );
  auto ptr_projects = shared_ptr<FilesystemNode>( new FilesystemNode( "projects/", NodeType::FOLDER ) );
  auto ptr_game     = shared_ptr<FilesystemNode>( new FilesystemNode( "my_game/", NodeType::FOLDER ) );

  auto ptr_file1 = shared_ptr<FilesystemNode>( new FilesystemNode( "essay1.txt", NodeType::FILE ) );
  auto ptr_file2 = shared_ptr<FilesystemNode>( new FilesystemNode( "essay2.txt", NodeType::FILE ) );
  auto ptr_file3 = shared_ptr<FilesystemNode>( new FilesystemNode( "game.cpp", NodeType::FILE ) );
  auto ptr_file4 = shared_ptr<FilesystemNode>( new FilesystemNode( "homeworkA.cpp", NodeType::FILE ) );
  auto ptr_file5 = shared_ptr<FilesystemNode>( new FilesystemNode( "homeworkB.cpp", NodeType::FILE ) );

  ptr_root->contents.push_back( ptr_home );
  ptr_home->contents.push_back( ptr_school );
  ptr_home->contents.push_back( ptr_projects );
  ptr_school->contents.push_back( ptr_english );
  ptr_school->contents.push_back( ptr_compsci );
  ptr_english->contents.push_back( ptr_file1 );
  ptr_english->contents.push_back( ptr_file2 );
  ptr_compsci->contents.push_back( ptr_file4 );
  ptr_compsci->contents.push_back( ptr_file5 );
  ptr_projects->contents.push_back( ptr_game );
  ptr_game->contents.push_back( ptr_file3 );

  return ptr_root;
}
