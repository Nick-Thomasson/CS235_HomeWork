#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  cout << "VECTOR PROGRAM" << endl;
  
  vector<string> console_list;
  
  console_list.push_back( "Nintendo Entertainment System" );
  console_list.push_back( "Super Nintendo" );
  console_list.push_back( "Nintendo 64" );
  console_list.push_back( "Game Cube" );
  console_list.push_back( "Wii" );
  console_list.push_back( "Wii-U" );
  console_list.push_back( "Switch" );
  
  cout << endl << "CONSOLES:" << endl;
  for ( size_t i = 0; i < console_list.size(); i++ )
  {
    cout << "Index: " << i << ", Element: " << console_list[i] << endl;
  }
  
  cout << "THE END" << endl;
  return 0;
}
