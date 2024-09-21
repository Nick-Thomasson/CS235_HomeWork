//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

#include "GroceryStoreProgram.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
  std::string program_name = "GROCERY STORE SIMULATOR";
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
    GroceryStoreProgram program;
    program.Run();
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester_GroceryStoreProgram();
void Tester()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
  const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

  const int TOTAL_TESTS = 2;
  float  in1[TOTAL_TESTS]; // inputs 1
  float  in2[TOTAL_TESTS]; // inputs 2
  int    in3[TOTAL_TESTS]; // inputs 3
  float  exo[TOTAL_TESTS]; // expected output
  float  aco[TOTAL_TESTS]; // actual output

  // Setup test 1
  in1[0] = 60000;
  in2[0] = 5;
  in3[0] = 5;
  exo[0] = 76576.89;

  // Setup test 2
  in1[1] = 100000;
  in2[1] = 10;
  in3[1] = 3;
  exo[1] = 133100;

  // Run tests
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    std::cout << CLR;
    aco[i] = 1;// FUNCTION CALLCalculateRaise( in1[i], in2[i], in3[i] );

    // Range-based check because of floats, woo.
    if ( aco[i] >= exo[i] - 1 && aco[i] <= exo[i] + 1 )
    {
      // PASS
      std::cout << GRN << "[PASS] ";
      std::cout << " TEST " << i+1 << ", CalculateRaise(" << in1[i] << ", " << in2[i] << ", " << in3[i] << ") = " << aco[i] << std::endl;
    }
    else
    {
      // FAIL
      std::cout << RED << "[FAIL] ";
      std::cout << " TEST " << i+1 << ", CalculateRaise(" << in1[i] << ", " << in2[i] << ", " << in3[i] << ")" << std::endl;
      std::cout << "   EXPECTED OUTPUT: [" << exo[i] << "]" << std::endl;
      std::cout << "   ACTUAL OUTPUT:   [" << aco[i] << "]" << std::endl;
    }
  }
  std::cout << CLR;
}



//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY ANYTHING BELOW THIS POINT! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// - AUTOMATED TESTER -------------------------------------------------------//

void Tester_GroceryStoreProgram()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

  {
    cout << CLR;
    string testName = "Stock - Check that product & price are added";
    GroceryStoreProgram gsp;
    string input1 = "pizza";
    float input2 = 9.75;
    int expected_size = 1;
    gsp.Stock( input1, input2 );

    if ( gsp.product_prices.size() != expected_size )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.Stock( \"" << input1 << "\", " << input2 << " ) called." << endl;
      cout << " `product_prices` size expected to be " << expected_size << ", but was " << gsp.product_prices.size() << "!" << endl;
    }
    else if ( gsp.product_prices.find( input1 ) == gsp.product_prices.end() )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.Stock( \"" << input1 << "\", " << input2 << " ) called." << endl;
      cout << " \"" << input1 << "\" not found in `product_prices`!" << endl;
    }
    else if ( gsp.product_prices.at( input1 ) != input2 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.Stock( \"" << input1 << "\", " << input2 << " ) called." << endl;
      cout << " \"" << input1 << "\" is mapped to " << gsp.product_prices.at( input1 ) << endl;
    }
    else
    {
      cout << GRN << "[PASS] " << testName << endl;
    }
  }

  {
    cout << CLR;
    string testName = "CustomerEnterStore";
    bool allPass = true;
    GroceryStoreProgram gsp;
    string input = "rebekah";
    int expected_size = 1;
    gsp.CustomerEnterStore( input );

    if ( gsp.customers_in_store.size() != expected_size )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerEnterStore( \"" << input << "\" ) called." << endl;
      cout << " `customers_in_store` size expected to be " << expected_size << ", but was " << gsp.customers_in_store.size() << "!" << endl;
    }
    else if ( gsp.customers_in_store.find( input ) == gsp.customers_in_store.end() )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerEnterStore( \"" << input << "\" ) called." << endl;
      cout << " \"" << input << "\" not found in `customers_in_store`!" << endl;
    }
    else if ( gsp.customers_in_store.at( input ).name != input )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerEnterStore( \"" << input << "\" ) called." << endl;
      cout << " The Customer name isn't set to \"" << input << "\"! It's \"" << gsp.customers_in_store.at( input ).name << "\"!" << endl;
    }
    else
    {
      cout << GRN << "[PASS] " << testName << endl;
    }

  }

  {
    cout << CLR;
    string testName = "CustomerCartAdd";
    bool allPass = true;
    GroceryStoreProgram gsp;
    string input1 = "rebekah";
    string input2 = "taco";
    string input3 = "burrito";
    int expected_size = 2;
    gsp.customers_in_store["rebekah"].name = "rebekah";
    gsp.CustomerCartAdd( input1, input2 );
    gsp.CustomerCartAdd( input1, input3 );

    if ( gsp.customers_in_store[ input1 ].products_in_cart.size() != 2 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input2 << "\" ) called." << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input3 << "\" ) called." << endl;
      cout << " `products_in_cart` size expected to be " << expected_size << ", but was " << gsp.customers_in_store[ input1 ].products_in_cart.size() << "!" << endl;
      allPass = false;
    }
    if ( gsp.customers_in_store[ input1 ].products_in_cart.top() != input3 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input2 << "\" ) called." << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input3 << "\" ) called." << endl;
      cout << " expected \"" << input3 << "\" to be on top of `products_in_cart`; instead it's \"" << gsp.customers_in_store[ input1 ].products_in_cart.top() << "\"!" << endl;
      allPass = false;
    }

    gsp.customers_in_store[ input1 ].products_in_cart.pop();
    if ( gsp.customers_in_store[ input1 ].products_in_cart.top() != input2 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input2 << "\" ) called." << endl;
      cout << " gsp.CustomerCartAdd( \"" << input1 << "\", \"" << input3 << "\" ) called." << endl;
      cout << " expected \"" << input2 << "\" to be on bottom of `products_in_cart`; instead it's \"" << gsp.customers_in_store[ input1 ].products_in_cart.top() << "\"!" << endl;
      allPass = false;
    }

    if ( allPass )
    {
      cout << GRN << "[PASS] " << testName << endl;
    }
  }

  {
    cout << CLR;
    string testName = "CustomerOops";
    bool allPass = true;
    GroceryStoreProgram gsp;
    string input1 = "rebekah";
    string input2 = "taco";
    string input3 = "burrito";
    int expected_size = 1;
    gsp.customers_in_store["rebekah"].name = "rebekah";
    gsp.customers_in_store["rebekah"].products_in_cart.push( input2 );
    gsp.customers_in_store["rebekah"].products_in_cart.push( input3 );
    gsp.CustomerOops( input1 );

    if ( gsp.customers_in_store[ input1 ].products_in_cart.size() != 1 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " Put 2 items in cart." << endl;
      cout << " gsp.CustomerOops( \"" << input1 << "\" ) called." << endl;
      cout << " `products_in_cart` size expected to be " << expected_size << ", but was " << gsp.customers_in_store[ input1 ].products_in_cart.size() << "!" << endl;
      allPass = false;
    }
    if ( gsp.customers_in_store[ input1 ].products_in_cart.top() != input2 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " Put 2 items in cart." << endl;
      cout << " gsp.CustomerOops( \"" << input1 << "\" ) called." << endl;
      cout << " expected \"" << input2 << "\" to be on top of `products_in_cart`; instead it's \"" << gsp.customers_in_store[ input1 ].products_in_cart.top() << "\"!" << endl;
      allPass = false;
    }

    if ( allPass )
    {
      cout << GRN << "[PASS] " << testName << endl;
    }
  }

  {
    cout << CLR;
    string testName = "CustomerLineup";
    bool allPass = true;
    GroceryStoreProgram gsp;
    string input1 = "rebekah";
    string input2 = "suzanne";
    int expected_size = 2;
    gsp.customers_in_store[ input1 ].name = input1;
    gsp.customers_in_store[ input2 ].name = input2;
    gsp.CustomerLineup( input1 );
    gsp.CustomerLineup( input2 );

    if ( gsp.checkout_queue.size() != expected_size )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " Put 2 customers in line queue." << endl;
      cout << " gsp.CustomerLineup( \"" << input1 << "\" ) called." << endl;
      cout << " gsp.CustomerLineup( \"" << input2 << "\" ) called." << endl;
      cout << " `checkout_queue` size expected to be " << expected_size << ", but was " << gsp.customers_in_store.size() << "!" << endl;
      allPass = false;
    }

    if ( gsp.checkout_queue.front().name != input1 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerLineup( \"" << input1 << "\" ) called." << endl;
      cout << " gsp.CustomerLineup( \"" << input2 << "\" ) called." << endl;
      cout << " expected \"" << input1 << "\" to be on top of `checkout_queue`; instead it's \"" << gsp.checkout_queue.front().name << "\"!" << endl;
      allPass = false;
    }

    gsp.checkout_queue.pop();
    if ( gsp.checkout_queue.front().name != input2 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " gsp.CustomerLineup( \"" << input1 << "\" ) called." << endl;
      cout << " gsp.CustomerLineup( \"" << input2 << "\" ) called." << endl;
      cout << " expected \"" << input2 << "\" to be on bottom of `checkout_queue`; instead it's \"" << gsp.checkout_queue.front().name << "\"!" << endl;
      allPass = false;
    }

    if ( allPass )
    {
      cout << GRN << "[PASS] " << testName << endl;
    }
  }

  {
    cout << CLR;
    string testName = "Process";
    bool allPass = true;
    GroceryStoreProgram gsp;
    gsp.Stock( "aaa", 111 );
    gsp.CustomerEnterStore( "bbb" );
    gsp.CustomerCartAdd( "bbb", "aaa" );
    gsp.CustomerLineup( "bbb" );
    gsp.Process();

    if ( gsp.checkout_queue.size() != 0 )
    {
      cout << RED << "[FAIL] " << testName << endl;
      cout << " expected `checkout_queue.size()` to be 0, but it's " << gsp.checkout_queue.size() << endl;
      allPass = false;
    }

    if ( allPass )
    {
      cout << GRN << "[PASS] " << testName << endl;
    }
  }

  cout << endl << BOLD
    << "** NOTE: void GroceryStoreProgram::Process() cannot be" << endl
    << "         fully tested with unit tests!" << endl
    << "         There may be existing issues in the program," << endl
    << "         even if the unit tests pass!" << endl;


//        cout << " ACTUAL   front customer's cart: " << ( [=]() -> string { string S; for ( auto& p : gsp.checkout_queue.front().products_in_cart )  { S += p + " "; } return S; }() ) << endl;


      // Anonymous functions in C++ are UGLY!!!
}
