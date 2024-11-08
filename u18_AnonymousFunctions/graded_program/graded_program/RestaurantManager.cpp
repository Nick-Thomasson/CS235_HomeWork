#include "RestaurantManager.h"

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


std::vector<Restaurant> RestaurantManager::FindByName(std::string name)
{
	std::vector<Restaurant> matches;
	for (auto& rest : m_restaurants)
	{
		if (rest.GetName() == name)
		{
			matches.push_back(rest);
		}
	}
	return matches;
}

// - STUDENT CODE ----------------------------------------------------------
std::vector<Restaurant> RestaurantManager::FindByCity(std::string city)
{
    std::vector<Restaurant> matches;
    // TODO: Implement
    return matches;
}

std::vector<Restaurant> RestaurantManager::FindByState(std::string state)
{
    std::vector<Restaurant> matches;
    // TODO: Implement
    return matches;
}

std::vector<Restaurant> RestaurantManager::FindByZipcode(int zipcode)
{
    std::vector<Restaurant> matches;
    // TODO: Implement
    return matches;
}
// -------------------------------------------------------------------------




void RestaurantManager::Load()
{
//    std::cout << "LOAD" << std::endl;
//	const std::string FILENAME = "../restaurants.txt";
//	std::ifstream input(FILENAME);
//	if (input.fail())
//	{
//		std::cout << "ERROR: Could not open " << FILENAME << std::endl;
//		return;
//	}
//
//	Restaurant buffer;
//	while (input >> buffer)
//	{
//		m_restaurants.push_back(buffer);
//	}

    m_restaurants.push_back( Restaurant( "Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062 ) );
    m_restaurants.push_back( Restaurant( "Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210 ) );
    m_restaurants.push_back( Restaurant( "Taco Bell", "16600 W 135th St", "Olathe", "KS", 66062 ) );
    m_restaurants.push_back( Restaurant( "Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210 ) );
    m_restaurants.push_back( Restaurant( "Hawaiian Bros", "16179 W 87th St", "Lenexa", "KS", 66219 ) );
    m_restaurants.push_back( Restaurant( "Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133 ) );
    m_restaurants.push_back( Restaurant( "Taco Bell", "8215 Wornall Rd", "Kansas City", "MO", 64114 ) );
    m_restaurants.push_back( Restaurant( "Longboards", "5415 Johnson Dr", "Mission", "KS", 66205 ) );
    m_restaurants.push_back( Restaurant( "Longboards", "8775 W 95th St", "Overland Park", "KS", 66212 ) );
    m_restaurants.push_back( Restaurant( "Longboards", "506 SE Missouri 291", "Lee's Summit", "MO", 64063 ) );
    m_restaurants.push_back( Restaurant( "Whistle Stop Coffee", "228 SE Main St", "Lee's Summit", "MO", 64063 ) );
    m_restaurants.push_back( Restaurant( "Ahadu Coffee", "1531 NE Douglas St", "Lee's Summit", "MO", 64086 ) );
    m_restaurants.push_back( Restaurant( "Black Dog Coffeehouse", "12815 W 87th St Pkwy", "Lenexa", "KS", 66215 ) );

	std::cout << std::endl << m_restaurants.size() << " restaurant(s) loaded." << std::endl;
}

void RestaurantManager::Save()
{
	const std::string FILENAME = "../restaurants.txt";
	std::ofstream output(FILENAME);

	for (auto& rest : m_restaurants)
	{
		output << rest;
	}

	std::cout << std::endl << m_restaurants.size() << " restaurant(s) saved." << std::endl;
}

void RestaurantManager::AddRestaurant(Restaurant newRest)
{
	m_restaurants.push_back(newRest);
}

void RestaurantManager::AddRestaurant()
{
	Restaurant newRest;
	std::string name, address, city, state;
	int zipcode;

	std::cout << "Enter restaurant's name: ";
	std::cin.ignore();
	getline(std::cin, name);

	std::cout << "Enter street address: ";
	getline(std::cin, address);

	std::cout << "Enter city: ";
	getline(std::cin, city);

	std::cout << "Enter state: ";
	getline(std::cin, state);

	std::cout << "Enter zipcode: ";
	std::cin >> zipcode;

	newRest.Setup(name, address, city, state, zipcode);

	AddRestaurant(newRest);

	std::cout << std::endl << "New restaurant added." << std::endl;
}

std::vector<Restaurant> RestaurantManager::GetAllRestaurants()
{
	return m_restaurants;
}
