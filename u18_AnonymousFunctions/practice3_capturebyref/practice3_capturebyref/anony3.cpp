#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Display(const vector<string>& vec)
{
	cout << "[";
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (i != 0) { cout << ", "; }
		cout << i << "=" << vec[i];
	}
	cout << "]";
	cout << endl;
}

int main()
{
	vector<string> data = { "bread", "cheese", "lettuce", "tomato", "mayo", "bread" };
	cout << endl << "Vector before anonymous function:" << endl;
	Display(data);
	string findme, replacewith;
	cout << endl << "Search for which term? ";
	cin >> findme;
	cout << "Replace with what? ";
	cin >> replacewith;
	[&]
	()
		-> void
		{

			for (size_t i = 0; i < data.size(); i++) {
				if (data[i] == findme) {
					data[i] = replacewith;
				}
			}
		}
	();
	cout << endl << "Vector after anonymous function:" << endl;
	Display(data);
	return 0;
}
