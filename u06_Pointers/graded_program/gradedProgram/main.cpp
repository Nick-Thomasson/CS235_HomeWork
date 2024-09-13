//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

#include "Array.h"
#include "Program.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
  std::string program_name = "DYNAMIC ARRAY";
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

void Test_Array_Constructor();
void Test_Array_AllocateSpace();
void Test_Array_DeallocateSpace();
void Test_Array_ResizeArray();
void Test_Array_AddItem();

void Tester()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
  const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

  Test_Array_Constructor();
  Test_Array_AllocateSpace();
  Test_Array_DeallocateSpace();
  Test_Array_AddItem();
  Test_Array_ResizeArray();
}


void Test_Array_Constructor()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  std::string testName;

  {
    std::cout << CLR;
    testName = "Test Constructor - Default constructor sets m_ptr to nullptr?";
    Array arr;
    if ( arr.m_ptr != nullptr )
    {
        std::cout << RED << "[FAIL] " << testName << std::endl;
    }
    else if ( arr.m_arraySize != 0 )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_arraySize is wrong!" << std::endl;
        std::cout << "m_arraySize......... " << arr.m_arraySize << " (expecting 0!)" << std::endl;
    }
    else if ( arr.m_itemCount != 0 )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount is wrong!" << std::endl;
        std::cout << "m_itemCount......... " << arr.m_itemCount << " (expecting 0!)" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }

  {
    testName = "Test Constructor - Parameterized constructor sets initializes size?";
    Array arr( 5 );
    int expected_arraySize = 5;
    int actual_arraySize = arr.m_arraySize;

    if ( arr.m_ptr == nullptr )
    {
        cout << RED << "[FAIL] " << testName << " - m_ptr is nullptr!" << endl;
        cout << "m_ptr......... " << arr.m_ptr << endl;
        cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << endl;
    }
    else if ( actual_arraySize != expected_arraySize )
    {
        cout << RED << "[FAIL] " << testName << " - m_arraySize is NOT " << expected_arraySize << "!" << endl;
        cout << "m_ptr......... " << arr.m_ptr << endl;
        cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << endl;
    }
    else
    {
        cout << GRN << "[PASS] " << testName << endl;
    }
    cout << CLR;
  }

  {
    testName = "Test Constructor - Parameterized constructor sets initializes size?";
    Array arr( 10 );
    int expected_arraySize = 10;
    int actual_arraySize = arr.m_arraySize;

    if ( arr.m_ptr == nullptr )
    {
        cout << RED << "[FAIL] " << testName << " - m_ptr is nullptr!" << endl;
        cout << "m_ptr......... " << arr.m_ptr << endl;
        cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << endl;
    }
    else if ( actual_arraySize != expected_arraySize )
    {
        cout << RED << "[FAIL] " << testName << " - m_arraySize is NOT " << expected_arraySize << "!" << endl;
        cout << "m_ptr......... " << arr.m_ptr << endl;
        cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << endl;
    }
    else
    {
        cout << GRN << "[PASS] " << testName << endl;
    }
    cout << CLR;
  }
}

void Test_Array_AllocateSpace()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  std::string testName;

  {
    testName = "Test AllocateSpace - Allocate space and set array size?";
    Array arr;
    arr.AllocateSpace( 5 );
    int expected_arraySize = 5;
    int actual_arraySize = arr.m_arraySize;
    int expected_itemCount = 0;
    int actual_itemCount = arr.m_itemCount;

    if ( arr.m_ptr == nullptr )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr is nullptr!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << std::endl;
        std::cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << std::endl;
    }
    else if ( actual_arraySize != expected_arraySize )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_arraySize is NOT " << expected_arraySize << "!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << std::endl;
        std::cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << std::endl;
    }
    else if ( actual_itemCount != expected_itemCount )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount is NOT " << expected_itemCount << "!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << std::endl;
        std::cout << "m_itemCount... " << actual_itemCount << " (expecting " << expected_itemCount << ")" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }

  {
    testName = "Test AllocateSpace - Allocate space and set array size?";
    Array arr;
    arr.AllocateSpace( 10 );
    int expected_arraySize = 10;
    int actual_arraySize = arr.m_arraySize;

    if ( arr.m_ptr == nullptr )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr is nullptr!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << std::endl;
        std::cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << std::endl;
    }
    else if ( actual_arraySize != expected_arraySize )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_arraySize is NOT " << expected_arraySize << "!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << std::endl;
        std::cout << "m_arraySize... " << actual_arraySize << " (expecting " << expected_arraySize << ")" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }
}

void Test_Array_DeallocateSpace()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  std::string testName;

  {
    testName = "Test DeallocateSpace - Sets ptr to nullptr?";
    Array arr;
    arr.m_ptr = new string[10];
    arr.DeallocateSpace();

    if ( arr.m_ptr != nullptr )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr is nullptr!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << " (expecting nullptr!)" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }
}

void Test_Array_ResizeArray()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  string testName;

  {
    testName = "Test Resize - Resize works?";
    std::string itemList[2] = { "A", "B" };
    Array arr;
    arr.m_ptr = new string[2];
    arr.m_ptr[0] = itemList[0];
    arr.m_ptr[1] = itemList[1];
    int originalArraySize = arr.m_arraySize = 2;
    int originalItemCount = arr.m_itemCount = 2;
    std::string* originalPtr = arr.m_ptr;
    arr.ResizeArray();

    bool allItemsCopied = true;
    for ( int i = 0; i < arr.m_itemCount; i++ )
    {
        if ( arr.m_ptr[i] != itemList[i] )
        {
            allItemsCopied = false;
        }
    }

    if ( arr.m_ptr == originalPtr )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr is still pointing to old location!" << std::endl;
        std::cout << "m_ptr......... " << arr.m_ptr << " (expecting new location!)" << std::endl;
    }
    else if ( arr.m_itemCount != originalItemCount )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount has changed!" << std::endl;
        std::cout << "m_itemCount......... " << arr.m_itemCount << " (it shouldn't change!)" << std::endl;
    }
    else if ( arr.m_arraySize == originalArraySize )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_arraySize is still the same!" << std::endl;
        std::cout << "m_arraySize......... " << arr.m_arraySize << " (should be a bigger size!)" << std::endl;
    }
    else if ( !allItemsCopied )
    {
        std::cout << RED << "[FAIL] " << testName << " - Not all items were copied over?" << std::endl;
        std::cout << "Expected contents of array: ";
        for ( int i = 0; i < arr.m_itemCount; i++ ) { std::cout << itemList[i] << "\t"; }
        std::cout << endl;
        cout << "Actual contents of array: ";
        for ( int i = 0; i < arr.m_itemCount; i++ ) { std::cout << arr.m_ptr[i] << "\t"; }
        std::cout << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }
}

void Test_Array_AddItem()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  std::string testName;

  {
    testName = "Test AddItem - New item added to array?";
    Array arr;
    arr.m_ptr = new std::string[2];
    arr.m_itemCount = 0;
    arr.m_arraySize = 2;
    arr.AddItem( "AAA" );

    if ( arr.m_itemCount != 1 )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount is wrong!" << std::endl;
        std::cout << "m_itemCount......... " << arr.m_itemCount << " (expecting 1!)" << std::endl;
    }
    else if ( arr.m_ptr[0] != "AAA" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[0] is wrong!" << std::endl;
        std::cout << "m_ptr[0]......... " << arr.m_ptr[0] << " (expecting \"AAA\"!)" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }

  {
    testName = "Test AddItem - Two items added to array?";
    Array arr;
    arr.m_ptr = new std::string[2];
    arr.m_itemCount = 0;
    arr.m_arraySize = 2;
    arr.AddItem( "AAA" );
    arr.AddItem( "BBB" );

    if ( arr.m_itemCount != 2 )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount is wrong!" << std::endl;
        std::cout << "m_itemCount......... " << arr.m_itemCount << " (expecting 2!)" << std::endl;
    }
    else if ( arr.m_ptr[0] != "AAA" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[0] is wrong!" << std::endl;
        std::cout << "m_ptr[0]......... " << arr.m_ptr[0] << " (expecting \"AAA\"!)" << std::endl;
    }
    else if ( arr.m_ptr[1] != "BBB" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[1] is wrong!" << std::endl;
        std::cout << "m_ptr[1]......... " << arr.m_ptr[1] << " (expecting \"BBB\"!)" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }

  {
    testName = "Test AddItem - Adding more items triggerse resize?";
    Array arr;
    arr.m_ptr = new std::string[2];
    arr.m_itemCount = 0;
    arr.m_arraySize = 2;
    arr.AddItem( "AAA" );
    arr.AddItem( "BBB" );
    arr.AddItem( "CCC" );

    if ( arr.m_itemCount != 3 )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_itemCount is wrong!" << std::endl;
        std::cout << "m_itemCount......... " << arr.m_itemCount << " (expecting 3!)" << std::endl;
    }
    else if ( arr.m_ptr[0] != "AAA" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[0] is wrong!" << std::endl;
        std::cout << "m_ptr[0]......... " << arr.m_ptr[0] << " (expecting \"AAA\"!)" << std::endl;
    }
    else if ( arr.m_ptr[1] != "BBB" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[1] is wrong!" << std::endl;
        std::cout << "m_ptr[1]......... " << arr.m_ptr[1] << " (expecting \"BBB\"!)" << std::endl;
    }
    else if ( arr.m_ptr[2] != "CCC" )
    {
        std::cout << RED << "[FAIL] " << testName << " - m_ptr[2] is wrong!" << std::endl;
        std::cout << "m_ptr[2]......... " << arr.m_ptr[2] << " (expecting \"CCC\"!)" << std::endl;
    }
    else
    {
        std::cout << GRN << "[PASS] " << testName << std::endl;
    }
    std::cout << CLR;
  }
}

