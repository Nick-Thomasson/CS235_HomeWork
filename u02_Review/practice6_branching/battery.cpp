// PROGRAM: Practice if/else if statements

// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
using namespace std;  // Using the C++ STanDard libraries

// - PROGRAM CODE -----------------------------------------------------------//
int main()
{
  int charge;
  cout << "Enter the battery charge: %";
  cin >> charge;

  cout << "Image: ";

  // TODO: Use if/else if/else statements to decide which battery image to draw.
  // 90% and above: [****];  75% and above: [***-];  50% and above: [**--];  25% and above: [*---];  below 25%: [----]
  
  if      ( charge >= 90 ) { cout << "[****]"; }
  else if ( charge >= 75 ) { cout << "[***_]"; }
  else if ( charge >= 50 ) { cout << "[**__]"; }
  else if ( charge >= 25 ) { cout << "[*___]"; }
  else                     { cout << "[____]"; }
  cout << endl;

  // Return 0 means quit program with no errors, in this context.
  return 0;
}
