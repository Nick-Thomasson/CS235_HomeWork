#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <vector>
#include <string>
using namespace std;

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

	friend ostream& operator<<(ostream& out, const Grade& grade);
	friend istream& operator>>(istream& in, Grade& grade);
};

ostream& operator<<(ostream& out, const Grade& grade)
{
	out << "[";
	for (size_t i = 0; i < grade.grade_list.size(); ++i) {
		out << i << " = " << grade.grade_list[i];
		if (i < grade.grade_list.size() - 1) {
			out << ", ";
		}
	}
	out << "]";
	return out;
}

istream& operator>>(istream& in, Grade& grade)
{
	float inputStream;
	in >> inputStream, grade.grade_list;
	grade.grade_list.push_back(inputStream);
	return in;
}

int main()
{
	Grade rai_grades;

	cout << "Enter three grades (0.0 to 4.0), separated by spaces: ";
	cin >> rai_grades;
	cin >> rai_grades;
	cin >> rai_grades;

	cout << endl << "rai_grades: ";
	cout << rai_grades << endl;

	return 0;
}
