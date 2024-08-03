#ifndef _RESTAURANT
#define _RESTAURANT

#include <string>
#include <ostream>
#include <istream>

class Restaurant
{
public:
    Restaurant();
    Restaurant(std::string newName, std::string newAddress, std::string newCity, std::string newState, int newZipcode);
	void Setup(std::string newName, std::string newAddress, std::string newCity, std::string newState, int newZipcode);
	void Display() const;

	std::string GetName() const;
	std::string GetAddress() const;
	std::string GetCity() const;
	std::string GetState() const;
	int GetZipcode() const;

	friend std::ostream& operator<<(std::ostream& out, const Restaurant& item);
	friend std::istream& operator>>(std::istream& in, Restaurant& item);

	friend void RestaurantTests();

private:
	std::string m_name;
	std::string m_address;
	std::string m_city;
	std::string m_state;
	int m_zipcode;
};

#endif
