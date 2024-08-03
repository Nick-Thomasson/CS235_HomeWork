#include "Program.h"
#include "RestaurantManager.h"
#include <iostream>
#include <iomanip>
#include <string>

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
		std::cout << std::endl << std::endl;
		std::cout << "MAIN MENU" << std::endl << std::string(80, '-') << std::endl;
		std::cout << "0. SAVE AND QUIT" << std::endl;
		std::cout << "1. Add new restaurant" << std::endl;
		std::cout << "2. View all restaurants" << std::endl;
		std::cout << "3. Search restaurants by name" << std::endl;
		std::cout << "4. Search restaurants by city" << std::endl;
		std::cout << "5. Search restaurants by state" << std::endl;
		std::cout << "6. Search restaurants by zipcode" << std::endl;
		std::cout << std::endl << ">> ";
		int choice;
		std::cin >> choice;

		std::cout << std::endl << std::endl;

		switch (choice)
		{
		case 0: done = true; break;
		case 1: m_restMan.AddRestaurant(); break;
		case 2: DisplayRestaurants(m_restMan.GetAllRestaurants()); break;
		case 3: {
			std::string search;
			std::cout << std::endl << "Enter search term: ";
			std::cin.ignore();
			getline(std::cin, search);
			DisplayRestaurants(m_restMan.FindByName(search));
		} break;
		case 4: {
			std::string search;
			std::cout << std::endl << "Enter search term: ";
			std::cin.ignore();
			getline(std::cin, search);
			DisplayRestaurants(m_restMan.FindByCity(search));
		} break;
		case 5: {
			std::string search;
			std::cout << std::endl << "Enter search term: ";
			std::cin.ignore();
			getline(std::cin, search);
			DisplayRestaurants(m_restMan.FindByState(search));
		} break;
		case 6: {
			int search;
			std::cout << std::endl << "Enter search term: ";
			std::cin >> search;
			DisplayRestaurants(m_restMan.FindByZipcode(search));
		} break;
		}
	}
}

void Program::DisplayRestaurants(const std::vector<Restaurant> restaurants)
{
	std::cout << std::left
		<< std::setw(3) << "#"
		<< std::setw(30) << "NAME"
		<< std::setw(25) << "STREET"
		<< std::setw(15) << "CITY"
		<< std::setw(8) << "STATE"
		<< std::setw(6) << "ZIP"
		<< std::endl << std::string(80, '-') << std::endl;

	for (size_t i = 0; i < restaurants.size(); i++)
	{
		std::cout << std::setw(3) << i;
		restaurants[i].Display();
	}
}
