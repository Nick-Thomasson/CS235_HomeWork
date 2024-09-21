#include <iostream>
#include <string>
#include <array>
using namespace std;


int main()
{
  cout << "ARRAY PROGRAM" << endl;


  // - STUDENT CODE ----------------------------------------------------------
  array <string, 4> course_list;
  course_list[0] = "CS 123";
  course_list[1] = "CS 1234";
  course_list[2] = "CS 12345";
  course_list[3] = "CS 123456";
  
  for (size_t i = 0; i < course_list.size(); i++) {
	  cout << i << ": \t" << course_list[i] << endl;
	  
  }
  // -------------------------------------------------------------------------

  cout << endl << "THE END" << endl;
  return 0;
}
