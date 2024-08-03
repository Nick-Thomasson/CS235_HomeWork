#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
  cout << "STACK PROGRAM" << endl;
  
  stack<string> stack1;
  stack1.push( "A" );
  stack1.push( "B" );
  stack1.push( "C" );
  stack1.push( "D" );
  
  stack<string> stack2;
  stack2.push( "A" );
  stack2.push( "B" );
  stack2.pop();
  stack2.push( "C" );
  stack2.pop();
  stack2.push( "D" );
  
  cout << endl << "Stack 1:" << endl;
  while ( stack1.size() > 0 )
  {
      cout << stack1.top() << "\t";
      stack1.pop();
  }
  
  cout << endl << endl << "Stack 2:" << endl;
  while ( stack2.size() > 0 )
  {
      cout << stack2.top() << "\t";
      stack2.pop();
  }
  
  cout << endl << endl "THE END" << endl;
  return 0;
}
