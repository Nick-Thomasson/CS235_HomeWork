#include <iostream>
using namespace std;


void CountUp_Iterative( int start, int end )
{
	int i = start;
	for (int i = start; i <= end; i++) {
		cout << i << " "; 
	}
}

void CountUp_Recursive( int start, int end )
{
    if (start > end) {
        return;
    }
    cout << start << " ";
    CountUp_Recursive(start + 1, end);
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
