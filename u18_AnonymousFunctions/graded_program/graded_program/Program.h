#ifndef _PROGRAM
#define _PROGRAM

#include <vector>
#include "Restaurant.h"
#include "RestaurantManager.h"

class Program
{
public:
	Program();
	~Program();
	void Run();
	void DisplayRestaurants(const std::vector<Restaurant> restaurants);
private:
	RestaurantManager m_restMan;
};

#endif