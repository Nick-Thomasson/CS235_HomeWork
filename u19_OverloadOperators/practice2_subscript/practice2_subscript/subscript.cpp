#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Display(vector<float> grades)
{
	cout << "[";
	for (size_t i = 0; i < grades.size(); i++)
	{
		if (i != 0) { cout << ", "; }
		cout << i << " = " << grades[i];
	}
	cout << "]" << endl;
}

class Grade
{

private:
	vector<float> grade_list;


public:
	void AddGrades(vector<float> grades)
	{
		this->grade_list = grades;
	}

	vector<float> GetGrades()
	{
		return this->grade_list;
	}

	float operator[](size_t index)
	{
		return grade_list[index]; // TODO: Remove this when you implement the function
	}


};

int main()
{
	Grade rai_grades;
	rai_grades.AddGrades({ 4.0, 3.5, 3.8 });

	cout << endl << "rai_grades: ";
	Display(rai_grades.GetGrades());

	cout << endl << "rai_grades[1]: " << rai_grades[1] << endl;

	return 0;
}
