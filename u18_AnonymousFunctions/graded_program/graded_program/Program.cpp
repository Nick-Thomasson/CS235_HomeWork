#include "Program.h"
#include "RestaurantManager.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
Program::Program()
{
	m_restMan.Load();
}

Program::~Program()
{
	m_restMan.Save();
}

void Program::Run()
{
	bool done = false;
	while (!done)
	{
		cout << endl << endl;
		cout << "MAIN MENU" << endl << string(80, '-') << endl;
		cout << "0. SAVE AND QUIT" << endl;
		cout << "1. Add new restaurant" << endl;
		cout << "2. View all restaurants" << endl;
		cout << "3. Search restaurants by name" << endl;
		cout << "4. Search restaurants by city" << endl;
		cout << "5. Search restaurants by state" << endl;
		cout << "6. Search restaurants by zipcode" << endl;
		cout << endl << ">> ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		switch (choice)
		{
		case 0: done = true; break;
		case 1: m_restMan.AddRestaurant(); break;
		case 2: DisplayRestaurants(m_restMan.GetAllRestaurants()); break;
		case 3: {
			string search;
			cout << endl << "Enter search term: ";
			cin.ignore();
			getline(cin, search);
			DisplayRestaurants(m_restMan.FindByName(search));
		} break;
		case 4: {
			string search;
			cout << endl << "Enter search term: ";
			cin.ignore();
			getline(cin, search);
			DisplayRestaurants(m_restMan.FindByCity(search));
		} break;
		case 5: {
			string search;
			cout << endl << "Enter search term: ";
			cin.ignore();
			getline(cin, search);
			DisplayRestaurants(m_restMan.FindByState(search));
		} break;
		case 6: {
			int search;
			cout << endl << "Enter search term: ";
			cin >> search;
			DisplayRestaurants(m_restMan.FindByZipcode(search));
		} break;
		}
	}
}

void Program::DisplayRestaurants(const vector<Restaurant> restaurants)
{
	cout << left
		<< setw(3) << "#"
		<< setw(30) << "NAME"
		<< setw(25) << "STREET"
		<< setw(15) << "CITY"
		<< setw(8) << "STATE"
		<< setw(6) << "ZIP"
		<< endl << string(80, '-') << endl;

	for (size_t i = 0; i < restaurants.size(); i++)
	{
		cout << setw(3) << i;
		restaurants[i].Display();
	}
}
