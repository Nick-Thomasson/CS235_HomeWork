#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <vector>
#include <string>
using namespace std;

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

  friend ostream& operator<<( ostream& out, const Grade& grade );
  friend istream& operator>>( istream& in, Grade& grade );

private:
  vector<float> grade_list;
};

// - STUDENT CODE ----------------------------------------------------------
ostream& operator<<( ostream& out, const Grade& grade )
{
  return out;
}

istream& operator>>( istream& in, Grade& grade )
{
  return in;
}
// -------------------------------------------------------------------------

int main()
{
  Grade rai_grades;

  cout << "Enter three grades (0.0 to 4.0), separated by spaces: ";
  //cin >> rai_grades;
  //cin >> rai_grades;
  //cin >> rai_grades;

  cout << endl << "rai_grades: ";
  //cout << rai_grades << endl;

  return 0;
}
