#ifndef _RESTAURANT
#define _RESTAURANT
using namespace std;
#include <string>
#include <ostream>
#include <istream>

class Restaurant
{
public:
    Restaurant();
    Restaurant(string newName, string newAddress, string newCity, string newState, int newZipcode);
	void Setup(string newName, string newAddress, string newCity, string newState, int newZipcode);
	void Display() const;

	string GetName() const;
	string GetAddress() const;
	string GetCity() const;
	string GetState() const;
	int GetZipcode() const;

	friend ostream& operator<<(ostream& out, const Restaurant& item);
	friend istream& operator>>(istream& in, Restaurant& item);

	friend void RestaurantTests();

private:
	string m_name;
	string m_address;
	string m_city;
	string m_state;
	int m_zipcode;
};

#endif
