#ifndef _PROGRAM
#define _PROGRAM
using namespace std;
#include <vector>
#include "Restaurant.h"
#include "RestaurantManager.h"

class Program
{
public:
	Program();
	~Program();
	void Run();
	void DisplayRestaurants(const vector<Restaurant> restaurants);
private:
	RestaurantManager m_restMan;
};

#endif