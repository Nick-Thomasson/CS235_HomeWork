#include <stdexcept>
#include <iostream>
#include <string>
#include <array>
using namespace std;

float Divide( float num, float denom )
{
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: If denominator is 0, throw an `invalid_argument` exception!
  
  // -------------------------------------------------------------------------

  return num / denom;
}

void Display( std::array<std::string, 5> arr, int index )
{
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: If index is invalid, then throw an `out_of_range` exception!
  // -------------------------------------------------------------------------

  std::cout << "Item at index " << index << " is " << arr[index] << std::endl;
}

void PtrDisplay( int* arr )
{
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: If the `arr` is pointing to nullptr, then throw an `invalid_argument` exception!
  // -------------------------------------------------------------------------

  std::cout << "Item being pointed to is: " << *arr << std::endl;
}

int main()
{
  std::cout << std::string( 80, '-' ) << std::endl;
  std::cout << "DIVISION EXAMPLE" << std::endl;
  int num, denom;
  std::cout << "Enter a numerator and denominator, separated by a space: ";
  std::cin >> num >> denom;

  float quotient;
  // - STUDENT CODE ----------------------------------------------------------
  quotient = Divide( num, denom ); // TODO: Wrap in a try/catch
  // -------------------------------------------------------------------------


  std::cout << std::endl << std::string( 80, '-' ) << std::endl;
  std::cout << "DISPLAY EXAMPLE" << std::endl;
  std::array<std::string, 5> my_array = { "cat", "bat", "rat", "gnat", "goat" };
  std::cout << "Enter an index between 0 and 4: ";
  int index;
  std::cin >> index;

  // - STUDENT CODE ----------------------------------------------------------
  Display(my_array, index); // TODO: Wrap in a try/catch
  // -------------------------------------------------------------------------


  std::cout << std::endl << std::string( 80, '-' ) << std::endl;
  std::cout << "POINTER EXAMPLE" << std::endl;
  int* good_pointer = &index;
  int* bad_pointer = nullptr;

  std::cout << "Display good_ptr..." << std::endl;

  // - STUDENT CODE ----------------------------------------------------------
  PtrDisplay( good_pointer ); // TODO: Wrap in a try/catch
  // -------------------------------------------------------------------------

  std::cout << std::endl << "Display bad_pointer..." << std::endl;

  // - STUDENT CODE ----------------------------------------------------------
  PtrDisplay( bad_pointer ); // TODO: Wrap in a try/catch
  // -------------------------------------------------------------------------

  return 0;
}
