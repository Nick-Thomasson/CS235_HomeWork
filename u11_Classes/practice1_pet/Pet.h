#ifndef _PET
#define _PET

#include <string>
using namespace std;

class Pet
{
  private:
  // Member variables
  string name;
  int age;
  string animal;
  string breed;

  public:
  // Member functions (methods)
  void SetName( string new_name );
  void SetAge( int new_age );
  void SetAnimal( string new_animal );
  void SetBreed( string new_breed );
  void Display();
}; // ; is required at the end of a class declaration

#endif
