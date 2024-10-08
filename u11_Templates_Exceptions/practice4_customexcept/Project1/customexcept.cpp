#include <stdexcept>
#include <iostream>
#include <string>
#include <array>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------
// TODO: Implement a `NotEnoughFriendsException` custom exception
	void NotEnoughFriendsException
// -------------------------------------------------------------------------

int SlicesPerPerson(int friends, int pizzaSlices)
{
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: If friends is 0, throw a `NotEnoughFriendsException` exception
  // TODO: If pizza slices is 0, throw a `NotEnoughPizzaException` exception
  // -------------------------------------------------------------------------
  return float(pizzaSlices) / friends;
}

int main()
{
  std::cout << std::string( 80, '-' ) << std::endl;
  std::cout << "PIZZA PARTY" << std::endl;

  int friendCount, pizzaSliceCount;
  std::cout << "How many pizza slices at pizza party? ";
  std::cin >> pizzaSliceCount;

  std::cout << "How many friends at party? ";
  std::cin >> friendCount;

  std::cout << endl;

  int slices = -1;
  // - STUDENT CODE ----------------------------------------------------------
  // TODO: Surround the risky function call with try/catch blocks.
  slices = SlicesPerPerson(friendCount, pizzaSliceCount);
  std::cout << "Give each friend " << slices << " slices of pizza" << std::endl;
  // -------------------------------------------------------------------------

  return 0;
}






