//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>
#include <memory>

#include "Functions.h"
#include "Program.h"
#include "FilesystemNode.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
  std::string program_name = "";
  ProgramAction action = ProgramAction::PROGRAM;

  // RUN THE PROGRAM OR RUN THE TESTS?
  if ( argCount > 1 && std::string( args[1] ) == "test" )
  {
    action = ProgramAction::TEST;
  }
  else if ( argCount > 1 && std::string( args[1] ) == "run" )
  {
    action = ProgramAction::PROGRAM;
  }
  else
  {
    // User menu
    std::cout << std::string( 80, '-' ) << std::endl
              << program_name << std::endl << std::endl
              << "1. Run AUTOMATED TESTS" << std::endl
              << "2. Run PROGRAM" << std::endl << std::endl
              << ">> ";
    int choice;
    std::cin >> choice;

    switch( choice )
    {
    case 1: action = ProgramAction::TEST; break;
    case 2: action = ProgramAction::PROGRAM; break;
    }
  }

  // Execute action
  if ( action == ProgramAction::TEST )
  {
    Tester();
  }
  else
  {
    Program();
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  std::cout << std::endl << std::string( 80, '-' ) << std::endl;

  std::string test_name;
  std::string input;
  std::string expect_out;
  std::string actual_out;
  int test_count = 1;

  // Test 1
  {
    auto ptr_root     = std::shared_ptr<FilesystemNode>( new FilesystemNode( "ROOTFOLDER/", NodeType::FOLDER ) );
    test_name  = "Check that match is found for FIRST call to function";
    input = "FOL";
    expect_out = "ROOTFOLDER/";
    actual_out = FindFile( ptr_root, input );

    if ( actual_out == expect_out )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << "  FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
    }
    else
    {
      std::cout << RED << "[FAIL] " << test_name << " test " << test_count << ": " << std::endl;
      std::cout << "  EXPECTED FindFile( ptr_root, \"" << input << "\" ) = \"" << expect_out << "\"" << std::endl;
      std::cout << "  ACTUAL   FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
      std::cout << std::endl;
      // HINT:
      std::cout << "  Are you doing a partial string match?" << std::endl;
      std::cout << "  if ( current_node->name.find( find_me ) != string::npos )" << std::endl;
      std::cout << "    return current_node->name;" << std::endl;
    }
  }
  cout << CLR;
  test_count++;

  // Test 2
  {
    auto ptr_root     = std::shared_ptr<FilesystemNode>( new FilesystemNode( "ROOTFOLDER/", NodeType::FOLDER ) );
    auto ptr_child1   = shared_ptr<FilesystemNode>( new FilesystemNode( "CHILDFOLDER/", NodeType::FOLDER ) );
    auto ptr_child2   = shared_ptr<FilesystemNode>( new FilesystemNode( "CHILDFILE.TXT", NodeType::FILE ) );
    ptr_root->contents.push_back( ptr_child1 );
    ptr_root->contents.push_back( ptr_child2 );

    test_name  = "Check that recursion to child FOLDER finds match";
    input = "CHILDFOLD";
    expect_out = "ROOTFOLDER/CHILDFOLDER/";
    actual_out = FindFile( ptr_root, input );

    if ( actual_out == expect_out )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << "  FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
    }
    else
    {
      std::cout << RED << "[FAIL] " << test_name << " test " << test_count << ": " << std::endl;
      std::cout << "  EXPECTED FindFile( ptr_root, \"" << input << "\" ) = \"" << expect_out << "\"" << std::endl;
      std::cout << "  ACTUAL   FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
      std::cout << std::endl;
      // HINT:
      std::cout << "  FILESYSTEM for this test:" << std::endl;
      DisplayContents( ptr_root, 3 );
    }
  }
  cout << CLR;
  test_count++;

  // Test 3
  {
    auto ptr_root     = std::shared_ptr<FilesystemNode>( new FilesystemNode( "ROOTFOLDER/", NodeType::FOLDER ) );
    auto ptr_child1   = shared_ptr<FilesystemNode>( new FilesystemNode( "CHILDFOLDER/", NodeType::FOLDER ) );
    auto ptr_child2   = shared_ptr<FilesystemNode>( new FilesystemNode( "CHILDFILE.TXT", NodeType::FILE ) );
    ptr_root->contents.push_back( ptr_child1 );
    ptr_root->contents.push_back( ptr_child2 );

    test_name  = "Check that recursion to child FILE finds match";
    input = "CHILDFIL";
    expect_out = "ROOTFOLDER/CHILDFILE.TXT";
    actual_out = FindFile( ptr_root, input );

    if ( actual_out == expect_out )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << "  FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
    }
    else
    {
      std::cout << RED << "[FAIL] " << test_name << " test " << test_count << ": " << std::endl;
      std::cout << "  EXPECTED FindFile( ptr_root, \"" << input << "\" ) = \"" << expect_out << "\"" << std::endl;
      std::cout << "  ACTUAL   FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
      std::cout << std::endl;
      // HINT:
      std::cout << "  FILESYSTEM for this test:" << std::endl;
      DisplayContents( ptr_root, 3 );
    }
  }
  cout << CLR;
  test_count++;

  // Test 3
  {
    auto ptr_root      = std::shared_ptr<FilesystemNode>( new FilesystemNode( "ROOTFOLDER/", NodeType::FOLDER ) );
    auto ptr_folder1   = shared_ptr<FilesystemNode>( new FilesystemNode( "FOLDER1/", NodeType::FOLDER ) );
    auto ptr_folder2   = shared_ptr<FilesystemNode>( new FilesystemNode( "FOLDER2/", NodeType::FOLDER ) );

    auto ptr_file1     = shared_ptr<FilesystemNode>( new FilesystemNode( "FILEA.TXT", NodeType::FILE ) );
    auto ptr_file2     = shared_ptr<FilesystemNode>( new FilesystemNode( "FILEB.TXT", NodeType::FILE ) );

    ptr_root->contents.push_back( ptr_folder1 );
    ptr_root->contents.push_back( ptr_folder2 );
    ptr_folder1->contents.push_back( ptr_file1 );
    ptr_folder2->contents.push_back( ptr_file2 );

    test_name  = "Check for multiple levels of recursion";
    input = "FILEB";
    expect_out = "ROOTFOLDER/FOLDER2/FILEB.TXT";
    actual_out = FindFile( ptr_root, input );

    if ( actual_out == expect_out )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << "  FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
    }
    else
    {
      std::cout << RED << "[FAIL] " << test_name << " test " << test_count << ": " << std::endl;
      std::cout << "  EXPECTED FindFile( ptr_root, \"" << input << "\" ) = \"" << expect_out << "\"" << std::endl;
      std::cout << "  ACTUAL   FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
      std::cout << std::endl;
      // HINT:
      std::cout << "  FILESYSTEM for this test:" << std::endl;
      DisplayContents( ptr_root, 3 );
    }
  }
  cout << CLR;
  test_count++;

  // Test 4
  {
    auto ptr_root      = std::shared_ptr<FilesystemNode>( new FilesystemNode( "ROOTFOLDER/", NodeType::FOLDER ) );
    auto ptr_folder1   = shared_ptr<FilesystemNode>( new FilesystemNode( "FOLDER1/", NodeType::FOLDER ) );
    auto ptr_folder2   = shared_ptr<FilesystemNode>( new FilesystemNode( "FOLDER2/", NodeType::FOLDER ) );

    auto ptr_file1     = shared_ptr<FilesystemNode>( new FilesystemNode( "FILEA.TXT", NodeType::FILE ) );
    auto ptr_file2     = shared_ptr<FilesystemNode>( new FilesystemNode( "FILEB.TXT", NodeType::FILE ) );

    ptr_root->contents.push_back( ptr_folder1 );
    ptr_root->contents.push_back( ptr_folder2 );
    ptr_folder1->contents.push_back( ptr_file1 );
    ptr_folder2->contents.push_back( ptr_file2 );

    test_name  = "Check that \"\" is returned if item not found.";
    input = "ZZZZ";
    expect_out = "";
    actual_out = FindFile( ptr_root, input );

    if ( actual_out == expect_out )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << "  FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
    }
    else
    {
      std::cout << RED << "[FAIL] " << test_name << " test " << test_count << ": " << std::endl;
      std::cout << "  EXPECTED FindFile( ptr_root, \"" << input << "\" ) = \"" << expect_out << "\"" << std::endl;
      std::cout << "  ACTUAL   FindFile( ptr_root, \"" << input << "\" ) = \"" << actual_out << "\"" << std::endl;
      std::cout << std::endl;
      // HINT:
      std::cout << "  FILESYSTEM for this test:" << std::endl;
      DisplayContents( ptr_root, 3 );
    }
  }
  cout << CLR;
  test_count++;
}




