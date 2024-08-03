#ifndef _RESTAURANT_MANAGER
#define _RESTAURANT_MANAGER

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
	std::vector<Restaurant> GetAllRestaurants();
	std::vector<Restaurant> FindByName(std::string name);
	std::vector<Restaurant> FindByCity(std::string city);
	std::vector<Restaurant> FindByState(std::string state);
	std::vector<Restaurant> FindByZipcode(int zipcode);

private:
	std::vector<Restaurant> m_restaurants;

	friend void Tester();
};

#endif
