#include <iostream>
using namespace std;

int CountLetter_Iterative( string text, char letter_to_count )
{
  int total_letter = 0;
  for (int i = 0; i < text.size(); i++) {
      if (letter_to_count == text[i]) {
          total_letter++;
      }
  }
  return total_letter;
}

/**
 * CountLetter_Recursive
 * @param   text              The string of text to investigate
 * @param   letter_to_count   Which letter we're counting
 * @param   i                 The index of the current letter we're investigating
 * This function goes through the string (recursively), character by character,
 * and if it finds `letter_to_count`,  it counts the letter.
 * */
int CountLetter_Recursive(string text, char letter_to_count, size_t i)
{
    if (i >= text.size()) {
        return 0;
    }
        if (text[i] == letter_to_count) {
        return 1 + CountLetter_Recursive(text, letter_to_count, i + 1);
         }
            else {
            return CountLetter_Recursive(text, letter_to_count, i + 1); // Continue recursion without adding 1
            }
}


void Test_Abc();

int main()
{
  cout << "MANUAL TESTS:" << endl;
  cout << "CountLetter_Iterative( \"Hello dello!\", 'e' ): " << CountLetter_Iterative( "Hello dello!", 'e' ) << endl;
  cout << "CountLetter_Recursive( \"Hello dello!\", 'e' ): " << CountLetter_Recursive( "Hello dello!", 'e', 0 ) << endl;
  cout << endl;
  cout << "CountLetter_Iterative( \"abcd\", 'z' ): " << CountLetter_Iterative( "abcd", 'z' ) << endl;
  cout << "CountLetter_Recursive( \"abcd\", 'z' ): " << CountLetter_Recursive( "abcd", 'z', 0 ) << endl;
  cout << endl;
  
  cout << "AUTOMATED TESTS:" << endl;
  Test_Abc();


  return 0;
}

void Test_Abc()
{
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m"; const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
  
  const int TOTAL_TESTS = 3;
  string  in1[TOTAL_TESTS] = { "aabbcc", "onethree", "xyz" };
  char    in2[TOTAL_TESTS] = { 'a', 'e', 'X' };
  int     exo[TOTAL_TESTS] = { 2, 3, 0 };
  int     aco[TOTAL_TESTS];
  
  for ( int i = 0; i < TOTAL_TESTS; i++ )
  {
    aco[i] = CountLetter_Recursive( in1[i], in2[i], 0 );
    
    if ( aco[i] == exo[i] )
    {
      std::cout << GRN << "[PASS] ";
      std::cout << " TEST " << i+1 
        << ", CountLetter_Recursive(\"" << in1[i] << "\", '" << in2[i] << "', 0) = ["
        << aco[i] << "]" << endl;
    }
    else
    {
      std::cout << RED << "[FAIL] ";
      std::cout << " TEST " << i+1 
        << ", CountLetter_Recursive(\"" << in1[i] << "\", '" << in2[i] << "', 0) = ["
        << aco[i] << "], expected [" << exo[i] << "]" << endl;
    }
  }
  
  std::cout << CLR;
}
