#ifndef _RESTAURANT_MANAGER
#define _RESTAURANT_MANAGER
using namespace std;
#include <string>
#include <vector>
#include "Restaurant.h"

class RestaurantManager
{
public:
	void Load();
	void Save();
	void AddRestaurant(Restaurant newRest);
	void AddRestaurant();
	vector<Restaurant> GetAllRestaurants();
	vector<Restaurant> FindByName(string name);
	vector<Restaurant> FindByCity(string city);
	vector<Restaurant> FindByState(string state);
	vector<Restaurant> FindByZipcode(int zipcode);

private:
	vector<Restaurant> m_restaurants;

	friend void Tester();
};

#endif
