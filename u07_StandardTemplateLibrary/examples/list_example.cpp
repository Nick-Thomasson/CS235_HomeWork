#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
  cout << "LIST PROGRAM" << endl;
  
  list<char> my_list;
  my_list.push_front( 'A' );
  my_list.push_front( 'B' );
  my_list.push_back( 'C' );
  my_list.push_back( 'D' );
  my_list.push_front( 'E' );
  my_list.push_back( 'F' );
  
  for ( auto& item : my_list )
  {
    cout << item << endl;
  }
  
  cout << "THE END" << endl;
  return 0;
}
