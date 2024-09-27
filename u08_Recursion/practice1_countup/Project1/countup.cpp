#include <iostream>
using namespace std;

/**
 * CountUp_Iterative
 * Uses a loop to display all numbers from `start`
 * to `end`, inclusive.
 * */
void CountUp_Iterative( int start, int end )
{
  // - STUDENT CODE ----------------------------------------------------------
	
	for (start < end; start++;) {
		cout << start;
	}
	
  // -------------------------------------------------------------------------
}

/**
 * CountUp_Recursive
 * Uses recursion to display all numbers from `start`
 * to `end`, inclusive.
 * */
void CountUp_Recursive( int start, int end )
{
  // - STUDENT CODE ----------------------------------------------------------

  // -------------------------------------------------------------------------
}

int main()
{
  // Manual tests :) You'll have to verify the output when running
  cout << "CountUp_Iterative( 2, 5 ): ";
  CountUp_Iterative( 2, 5 );
  cout << endl;

  cout << "CountUp_Recursive( 2, 5 ): ";
  CountUp_Recursive( 2, 5 );
  cout << endl << endl;

  cout << "CountUp_Iterative( 10, 20 ): ";
  CountUp_Iterative( 10, 20 );
  cout << endl;

  cout << "CountUp_Recursive( 10, 20 ): ";
  CountUp_Recursive( 10, 20 );
  cout << endl;

  return 0;
}
