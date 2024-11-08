#include "RestaurantManager.h"

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


vector<Restaurant> RestaurantManager::FindByName(string name)
{
	vector<Restaurant> matches;
	for (auto& rest : m_restaurants)
	{
		if (rest.GetName() == name)
		{
			matches.push_back(rest);
		}
	}
	return matches;
}

vector<Restaurant> RestaurantManager::FindByCity(string city)
{
	vector<Restaurant> matches;
	auto findCityMatches = []
	(vector<Restaurant>& restaurants, string& m_city)
		-> vector<Restaurant>
		{
			vector <Restaurant> myMatches;
			for (auto& tempRestaurants : restaurants) {
				if (tempRestaurants.GetCity() == m_city) {
					myMatches.push_back(tempRestaurants);
				}
			}
			return myMatches;
		};
	matches = findCityMatches(m_restaurants, city);
	return matches;
}

vector<Restaurant> RestaurantManager::FindByState(string state)
{
	vector<Restaurant> matches;
	matches = [=]() -> vector<Restaurant>
		{
			vector<Restaurant> myMatches;
			for (auto& restaurant : m_restaurants) {
				if (restaurant.GetState() == state) {
					myMatches.push_back(restaurant);
				};
			};
			return myMatches;
		}();
	return matches;
}

vector<Restaurant> RestaurantManager::FindByZipcode(int zipcode)
{
	vector<Restaurant> matches;
	matches = [=]() -> vector<Restaurant>
		{
			vector<Restaurant> myMatches;
			for (auto& restaurant : m_restaurants) {
				if (restaurant.GetZipcode() == zipcode) {
					myMatches.push_back(restaurant);
				};
			};
			return myMatches;
		}();
	return matches;
}




void RestaurantManager::Load()
{
	//    cout << "LOAD" << endl;
	//	const string FILENAME = "../restaurants.txt";
	//	ifstream input(FILENAME);
	//	if (input.fail())
	//	{
	//		cout << "ERROR: Could not open " << FILENAME << endl;
	//		return;
	//	}
	//
	//	Restaurant buffer;
	//	while (input >> buffer)
	//	{
	//		m_restaurants.push_back(buffer);
	//	}

	m_restaurants.push_back(Restaurant("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062));
	m_restaurants.push_back(Restaurant("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210));
	m_restaurants.push_back(Restaurant("Taco Bell", "16600 W 135th St", "Olathe", "KS", 66062));
	m_restaurants.push_back(Restaurant("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210));
	m_restaurants.push_back(Restaurant("Hawaiian Bros", "16179 W 87th St", "Lenexa", "KS", 66219));
	m_restaurants.push_back(Restaurant("Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133));
	m_restaurants.push_back(Restaurant("Taco Bell", "8215 Wornall Rd", "Kansas City", "MO", 64114));
	m_restaurants.push_back(Restaurant("Longboards", "5415 Johnson Dr", "Mission", "KS", 66205));
	m_restaurants.push_back(Restaurant("Longboards", "8775 W 95th St", "Overland Park", "KS", 66212));
	m_restaurants.push_back(Restaurant("Longboards", "506 SE Missouri 291", "Lee's Summit", "MO", 64063));
	m_restaurants.push_back(Restaurant("Whistle Stop Coffee", "228 SE Main St", "Lee's Summit", "MO", 64063));
	m_restaurants.push_back(Restaurant("Ahadu Coffee", "1531 NE Douglas St", "Lee's Summit", "MO", 64086));
	m_restaurants.push_back(Restaurant("Black Dog Coffeehouse", "12815 W 87th St Pkwy", "Lenexa", "KS", 66215));

	cout << endl << m_restaurants.size() << " restaurant(s) loaded." << endl;
}

void RestaurantManager::Save()
{
	const string FILENAME = "../restaurants.txt";
	ofstream output(FILENAME);

	for (auto& rest : m_restaurants)
	{
		output << rest;
	}

	cout << endl << m_restaurants.size() << " restaurant(s) saved." << endl;
}

void RestaurantManager::AddRestaurant(Restaurant newRest)
{
	m_restaurants.push_back(newRest);
}

void RestaurantManager::AddRestaurant()
{
	Restaurant newRest;
	string name, address, city, state;
	int zipcode;

	cout << "Enter restaurant's name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter street address: ";
	getline(cin, address);

	cout << "Enter city: ";
	getline(cin, city);

	cout << "Enter state: ";
	getline(cin, state);

	cout << "Enter zipcode: ";
	cin >> zipcode;

	newRest.Setup(name, address, city, state, zipcode);

	AddRestaurant(newRest);

	cout << endl << "New restaurant added." << endl;
}

vector<Restaurant> RestaurantManager::GetAllRestaurants()
{
	return m_restaurants;
}
