#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> data = { "cheese", "lettuce", "tomato", "mayo", "bread" };
	string findme;
	cout << "Search for which term? ";
	cin >> findme;

	int match =
		[data, findme]
		(vector<string> input, string findme)
		-> int
		{
			for (int i = 0; i < data.size(); i++) {
				if (data[i] == findme) {
					return i;
				}
			}
			return -1;
		}
	(data, findme); // Function call with arguments

	cout << "Result: " << match << endl;

	return 0;
}
