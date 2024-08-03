#include "Restaurant.h"

#include <iostream>
#include <iomanip>

Restaurant::Restaurant()
{
}

Restaurant::Restaurant(std::string newName, std::string newAddress, std::string newCity, std::string newState, int newZipcode)
{
    Setup( newName, newAddress, newCity, newState, newZipcode );
}

void Restaurant::Setup(std::string newName, std::string newAddress, std::string newCity, std::string newState, int newZipcode)
{
	m_name = newName;
	m_city = newCity;
	m_state = newState;
	m_zipcode = newZipcode;
	m_address = newAddress;
}

void Restaurant::Display() const
{
	std::cout << std::left
		<< std::setw(30) << m_name
		<< std::setw(25) << m_address
		<< std::setw(15) << m_city
		<< std::setw(8) << m_state
		<< std::setw(6) << m_zipcode
		<< std::endl;
}

std::string Restaurant::GetName() const
{
	return m_name;
}

std::string Restaurant::GetAddress() const
{
	return m_address;
}

std::string Restaurant::GetCity() const
{
	return m_city;
}

std::string Restaurant::GetState() const
{
	return m_state;
}

int Restaurant::GetZipcode() const
{
	return m_zipcode;
}


std::ostream& operator<<(std::ostream& out, const Restaurant& item)
{
	out << "RESTAURANT {" << std::endl;
	out << "NAME" << std::endl << item.m_name << std::endl;
	out << "ADDRESS" << std::endl << item.m_address << std::endl;
	out << "CITY" << std::endl << item.m_city << std::endl;
	out << "STATE" << std::endl << item.m_state << std::endl;
	out << "ZIPCODE" << std::endl << item.m_zipcode << std::endl;
	out << "}" << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Restaurant& item)
{
	std::string buffer;
	while (getline(in, buffer))
	{
		if (buffer == "}") { break; }
		else if (buffer == "NAME") { getline(in, item.m_name); }
		else if (buffer == "ADDRESS") { getline(in, item.m_address); }
		else if (buffer == "CITY") { getline(in, item.m_city); }
		else if (buffer == "STATE") { getline(in, item.m_state); }
		else if (buffer == "ZIPCODE") { in >> item.m_zipcode; }
	}
	return in;
}

void RestaurantTests()
{
	std::cout << std::string(80, '-') << std::endl;
	std::cout << std::endl << "RESTAURANT TESTS" << std::endl;

	int testsPass = 0;
	int totalTests = 0;

	bool implemented_Restaurant_Setup = true;
	bool implemented_Restaurant_GetName = true;
	bool implemented_Restaurant_GetAddress = true;
	bool implemented_Restaurant_GetCity = true;
	bool implemented_Restaurant_GetState = true;
	bool implemented_Restaurant_GetZipcode = true;
	bool allFunctionsImplemented = true;

	{
		Restaurant rest;
		bool exception = false;

		try { rest.Setup("A", "B", "C", "D", 1); }
		catch (...)
		{
			implemented_Restaurant_Setup = false;
			allFunctionsImplemented = false;
		}
		try { rest.GetName(); }
		catch (...)
		{
			implemented_Restaurant_GetName = false;
			allFunctionsImplemented = false;
		}
		try { rest.GetAddress(); }
		catch (...)
		{
			implemented_Restaurant_GetAddress = false;
			allFunctionsImplemented = false;
		}
		try { rest.GetCity(); }
		catch (...)
		{
			implemented_Restaurant_GetCity = false;
			allFunctionsImplemented = false;
		}
		try { rest.GetState(); }
		catch (...)
		{
			implemented_Restaurant_GetState = false;
			allFunctionsImplemented = false;
		}
		try { rest.GetZipcode(); }
		catch (...)
		{
			implemented_Restaurant_GetZipcode = false;
			allFunctionsImplemented = false;
		}

		std::cout << "TEST 0: Check if functions have been implemented..." << std::endl;
		if (exception) { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "\t EXPECTATION:    Restaurant::Setup(...) is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::Setup(...) is implemented (" << (implemented_Restaurant_Setup) << ")" << std::endl;
		std::cout << "\t EXPECTATION:    Restaurant::GetName() is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::GetName() is implemented (" << (implemented_Restaurant_GetName) << ")" << std::endl;
		std::cout << "\t EXPECTATION:    Restaurant::GetAddress() is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::GetAddress() is implemented (" << (implemented_Restaurant_GetAddress) << ")" << std::endl;
		std::cout << "\t EXPECTATION:    Restaurant::GetCity() is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::GetCity() is implemented (" << (implemented_Restaurant_GetCity) << ")" << std::endl;
		std::cout << "\t EXPECTATION:    Restaurant::GetState() is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::GetState() is implemented (" << (implemented_Restaurant_GetState) << ")" << std::endl;
		std::cout << "\t EXPECTATION:    Restaurant::GetZipcode() is implemented (1)" << std::endl;
		std::cout << "\t ACTUAL:         Restaurant::GetZipcode() is implemented (" << (implemented_Restaurant_GetZipcode) << ")" << std::endl;
	}

	if (!allFunctionsImplemented)
	{
		std::cout << std::endl << "ENDING UNIT TESTS - PREREQUISITE FUNCTIONS NOT IMPLEMENTED." << std::endl;
		return;
	}

	{
		Restaurant rest;
		rest.Setup("A", "B", "C", "D", 5);
		if (rest.m_name != "A") { std::cout << "[FAIL] "; }
		else if (rest.m_address != "B") { std::cout << "[FAIL] "; }
		else if (rest.m_city != "C") { std::cout << "[FAIL] "; }
		else if (rest.m_state != "D") { std::cout << "[FAIL] "; }
		else if (rest.m_zipcode != 5) { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 1: Create a Restaurant. Use Setup function. Verify private member variables." << std::endl;
		std::cout << "\t Restaurant rest; rest.Setup(\"A\", \"B\", \"C\", \"D\", 5);" << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_name is \"A\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_name is \"" << rest.m_name << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_address is \"B\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_address is \"" << rest.m_address << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_city is \"C\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_city is \"" << rest.m_city << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_state is \"D\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_state is \"" << rest.m_state << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_zipcode is 5." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_zipcode is " << rest.m_zipcode << "." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.Setup("Foodplace", "123 Fake St", "Townsville", "MO", 12345);
		if (rest.m_name != "Foodplace") { std::cout << "[FAIL] "; }
		else if (rest.m_address != "123 Fake St") { std::cout << "[FAIL] "; }
		else if (rest.m_city != "Townsville") { std::cout << "[FAIL] "; }
		else if (rest.m_state != "MO") { std::cout << "[FAIL] "; }
		else if (rest.m_zipcode != 12345) { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 2: Create a Restaurant. Use Setup function. Verify private member variables." << std::endl;
		std::cout << "\t Restaurant rest; rest.Setup(\"Foodplace\", \"123 Fake St\", \"Townsville\", \"MO\", 5);" << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_name is \"Foodplace\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_name is \"" << rest.m_name << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_address is \"123 Fake St\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_address is \"" << rest.m_address << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_city is \"Townsville\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_city is \"" << rest.m_city << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_state is \"MO\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_state is \"" << rest.m_state << "\"." << std::endl;
		std::cout << "\t EXPECTATION:    rest.m_zipcode is 12345." << std::endl;
		std::cout << "\t ACTUAL:         rest.m_zipcode is " << rest.m_zipcode << "." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_name = "Cafe Coffee Day";
		if (rest.GetName() != "Cafe Coffee Day") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 3a: Create a Restaurant. Set m_name. Check GetName();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_name = \"Cafe Coffee Day\"; rest.GetName() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetName() is \"Cafe Coffee Day\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetName() is \"" << rest.GetName() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_name = "Stacks Cafe";
		if (rest.GetName() != "Stacks Cafe") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 3b: Create a Restaurant. Set m_name. Check GetName();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_name = \"Stacks Cafe\"; rest.GetName() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetName() is \"Stacks Cafe\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetName() is \"" << rest.GetName() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_city = "Raytown";
		if (rest.GetCity() != "Raytown") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 4a: Create a Restaurant. Set m_city. Check GetCity();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_city = \"Raytown\"; rest.GetCity() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetCity() is \"Raytown\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetCity() is \"" << rest.GetCity() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_city = "Lee's Summit";
		if (rest.GetCity() != "Lee's Summit") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 4b: Create a Restaurant. Set m_city. Check GetCity();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_city = \"Lee's Summit\"; rest.GetCity() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetCity() is \"Lee's Summit\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetCity() is \"" << rest.GetCity() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_state = "MO";
		if (rest.GetState() != "MO") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 5a: Create a Restaurant. Set m_state. Check GetState();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_state = \"MO\"; rest.GetState() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetState() is \"MO\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetState() is \"" << rest.GetState() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_state = "KS";
		if (rest.GetState() != "KS") { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 5b: Create a Restaurant. Set m_state. Check GetState();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_state = \"KS\"; rest.GetState() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetState() is \"KS\"." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetState() is \"" << rest.GetState() << "\"." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_zipcode = 12345;
		if (rest.GetZipcode() != 12345) { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 5a: Create a Restaurant. Set m_zipcode. Check GetZipcode();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_zipcode = 12345; rest.GetZipcode() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetZipcode() is 12345." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetZipcode() is " << rest.GetZipcode() << "." << std::endl;
		std::cout << std::endl;
	}

	{
		Restaurant rest;
		rest.m_zipcode = 64138;
		if (rest.GetZipcode() != 64138) { std::cout << "[FAIL] "; }
		else { testsPass++; std::cout << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 5b: Create a Restaurant. Set m_zipcode. Check GetZipcode();" << std::endl;
		std::cout << "\t Restaurant rest; rest.m_zipcode = 64138; rest.GetZipcode() = ...?" << std::endl;
		std::cout << "\t EXPECTATION:    rest.GetZipcode() is 64138." << std::endl;
		std::cout << "\t ACTUAL:         rest.GetZipcode() is " << rest.GetZipcode() << "." << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl << std::string(80, '*') << std::endl
		<< testsPass << " tests passed out of " << totalTests << " total tests"
		<< std::endl << std::string(80, '*') << std::endl;
}
