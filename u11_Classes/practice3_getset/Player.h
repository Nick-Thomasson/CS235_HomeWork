#ifndef _PLAYER
#define _PLAYER

#include <string>
using namespace std;

class Player
{
  public:
  // Member functions (methods)
  void SetName( string new_name );
  void SetLevel( int new_level );
  string GetName() const;
  int GetLevel() const;
  void LevelUp();
  void Display() const;

  private:
  // Member variables
  string name;
  int level;
};

#endif