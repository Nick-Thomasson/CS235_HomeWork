#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
  cout << "QUEUE PROGRAM" << endl;
  
  queue<string> queue1;
  queue1.push( "A" );
  queue1.push( "B" );
  queue1.push( "C" );
  queue1.push( "D" );
  
  queue<string> queue2;
  queue2.push( "A" );
  queue2.push( "B" );
  queue2.pop();
  queue2.push( "C" );
  queue2.pop();
  queue2.push( "D" );
  
  cout << endl << "Queue 1:" << endl;
  while ( queue1.size() > 0 )
  {
      cout << queue1.front() << "\t";
      queue1.pop();
  }
  
  cout << endl << endl << "Queue 2:" << endl;
  while ( queue2.size() > 0 )
  {
      cout << queue2.front() << "\t";
      queue2.pop();
  }
  
  cout << endl << endl << "THE END" << endl;
  return 0;
}
