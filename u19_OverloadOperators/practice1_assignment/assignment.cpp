#include <iostream>
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

  // - STUDENT CODE ----------------------------------------------------------
  Grade& operator=( const Grade& other )
  {
    if ( &other == this )
      {
        return *this;
      }

    // TODO: Implement
    
    return *this;
  }
  // -------------------------------------------------------------------------

private:
  vector<float> grade_list;
};


int main()
{
  Grade rai_grades, anuj_grades;
  rai_grades.AddGrades( { 4.0, 3.5, 3.8 } );
  // TODO: Uncomment out once you implement the = operator function
  //anuj_grades = rai_grades;

  cout << endl << "rai_grades:" << endl;
  Display( rai_grades.GetGrades() );

  cout << endl << "anuj_grades:" << endl;
  Display( anuj_grades.GetGrades() );

  return 0;
}
