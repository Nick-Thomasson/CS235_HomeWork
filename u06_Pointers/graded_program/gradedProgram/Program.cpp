#include "Program.h"
using namespace std;
#include "Array.h"
#include <iostream>

void Program()
{
	int choice;
	bool running = true;
	while (running) {
		cout << "1..... " << endl;
		cout << "2..... " << endl;
		cout << "3..... " << endl;
		cout << "4..... " << endl;
		cout << "Enter a number: " << endl;
		cin >> choice;
		switch (choice)
		{case 1:
			cout << "You chose 1!" << endl;
			running = false;
			break;
		case 2:
			cout << "You chose 2!" << endl;
			running = false;
			break;
		case 3:
			cout << "You chose 3!" << endl;
			running = false;
			break;
		case 4: 
			cout << "You chose 4!" << endl;
			running = false;
			break;
		default:
			cout << "Enter a valid number please!" << endl;
			break;
		}
	}
	
	
}
