#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <vector>
#include <string>
using namespace std;

void Display( vector<float> grades )
{
  cout << "[";
  for ( size_t i = 0; i < grades.size(); i++ )
    {
      if ( i != 0 ) { cout << ", "; }
      cout << i << " = " << grades[i];
    }
  cout << "]" << endl;
}

class Grade
{
public:
  void AddGrades( vector<float> grades )
  {
    this->grade_list = grades;
  }

  vector<float> GetGrades()
  {
    return this->grade_list;
  }

  friend bool operator==( const Grade& left, const Grade& right );
  friend bool operator!=( const Grade& left, const Grade& right );
  friend bool operator<( const Grade& left, const Grade& right );
  friend bool operator>( const Grade& left, const Grade& right );
  friend bool operator<=( const Grade& left, const Grade& right );
  friend bool operator>=( const Grade& left, const Grade& right );

private:
  vector<float> grade_list;
};

// - STUDENT CODE ----------------------------------------------------------
bool operator==( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}

bool operator!=( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}

bool operator<( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}

bool operator>( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}

bool operator<=( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}

bool operator>=( const Grade& left, const Grade& right )
{
  return false; // TODO: Remove this after you implement the function!
}
// -------------------------------------------------------------------------

int main()
{
  Grade rai_grades, anuj_grades, rach_grades;

  rach_grades.AddGrades( { 3.5, 3.8, 4.0 } );
  rai_grades.AddGrades( { 4.0, 3.5, 3.8 } );
  anuj_grades.AddGrades( { 2.0, 2.5, 4.0, 4.0 } );

  cout << "rach_grades: ";
  Display( rach_grades.GetGrades() );
  cout << "rai_grades: ";
  Display( rai_grades.GetGrades() );
  cout << "anuj_grades: ";
  Display( anuj_grades.GetGrades() );

  cout << endl;

  cout << "rach_grades == rai_grades? " << ( rach_grades == rai_grades ) << endl;
  cout << "anuj_grades == rai_grades? " << ( anuj_grades == rai_grades ) << endl;

  cout << "rach_grades != rai_grades? " << ( rach_grades != rai_grades ) << endl;
  cout << "anuj_grades != rai_grades? " << ( anuj_grades != rai_grades ) << endl;

  cout << "anuj_grades < rai_grades?  " << ( anuj_grades < rai_grades ) << endl;
  cout << "anuj_grades <= rai_grades? " << ( anuj_grades <= rai_grades ) << endl;
  cout << "anuj_grades > rai_grades?  " << ( anuj_grades > rai_grades ) << endl;
  cout << "anuj_grades >= rai_grades? " << ( anuj_grades >= rai_grades ) << endl;

  return 0;
}
