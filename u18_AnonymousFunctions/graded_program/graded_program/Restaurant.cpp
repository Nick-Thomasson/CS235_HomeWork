#include "Restaurant.h"

#include <iostream>
#include <iomanip>

Restaurant::Restaurant()
{
}

Restaurant::Restaurant(string newName, string newAddress, string newCity, string newState, int newZipcode)
{
    Setup( newName, newAddress, newCity, newState, newZipcode );
}

void Restaurant::Setup(string newName, string newAddress, string newCity, string newState, int newZipcode)
{
	m_name = newName;
	m_city = newCity;
	m_state = newState;
	m_zipcode = newZipcode;
	m_address = newAddress;
}

void Restaurant::Display() const
{
	cout << left
		<< setw(30) << m_name
		<< setw(25) << m_address
		<< setw(15) << m_city
		<< setw(8) << m_state
		<< setw(6) << m_zipcode
		<< endl;
}

string Restaurant::GetName() const
{
	return m_name;
}

string Restaurant::GetAddress() const
{
	return m_address;
}

string Restaurant::GetCity() const
{
	return m_city;
}

string Restaurant::GetState() const
{
	return m_state;
}

int Restaurant::GetZipcode() const
{
	return m_zipcode;
}


ostream& operator<<(ostream& out, const Restaurant& item)
{
	out << "RESTAURANT {" << endl;
	out << "NAME" << endl << item.m_name << endl;
	out << "ADDRESS" << endl << item.m_address << endl;
	out << "CITY" << endl << item.m_city << endl;
	out << "STATE" << endl << item.m_state << endl;
	out << "ZIPCODE" << endl << item.m_zipcode << endl;
	out << "}" << endl;
	return out;
}

istream& operator>>(istream& in, Restaurant& item)
{
	string buffer;
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
	cout << string(80, '-') << endl;
	cout << endl << "RESTAURANT TESTS" << endl;

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

		cout << "TEST 0: Check if functions have been implemented..." << endl;
		if (exception) { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "\t EXPECTATION:    Restaurant::Setup(...) is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::Setup(...) is implemented (" << (implemented_Restaurant_Setup) << ")" << endl;
		cout << "\t EXPECTATION:    Restaurant::GetName() is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::GetName() is implemented (" << (implemented_Restaurant_GetName) << ")" << endl;
		cout << "\t EXPECTATION:    Restaurant::GetAddress() is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::GetAddress() is implemented (" << (implemented_Restaurant_GetAddress) << ")" << endl;
		cout << "\t EXPECTATION:    Restaurant::GetCity() is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::GetCity() is implemented (" << (implemented_Restaurant_GetCity) << ")" << endl;
		cout << "\t EXPECTATION:    Restaurant::GetState() is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::GetState() is implemented (" << (implemented_Restaurant_GetState) << ")" << endl;
		cout << "\t EXPECTATION:    Restaurant::GetZipcode() is implemented (1)" << endl;
		cout << "\t ACTUAL:         Restaurant::GetZipcode() is implemented (" << (implemented_Restaurant_GetZipcode) << ")" << endl;
	}

	if (!allFunctionsImplemented)
	{
		cout << endl << "ENDING UNIT TESTS - PREREQUISITE FUNCTIONS NOT IMPLEMENTED." << endl;
		return;
	}

	{
		Restaurant rest;
		rest.Setup("A", "B", "C", "D", 5);
		if (rest.m_name != "A") { cout << "[FAIL] "; }
		else if (rest.m_address != "B") { cout << "[FAIL] "; }
		else if (rest.m_city != "C") { cout << "[FAIL] "; }
		else if (rest.m_state != "D") { cout << "[FAIL] "; }
		else if (rest.m_zipcode != 5) { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 1: Create a Restaurant. Use Setup function. Verify private member variables." << endl;
		cout << "\t Restaurant rest; rest.Setup(\"A\", \"B\", \"C\", \"D\", 5);" << endl;
		cout << "\t EXPECTATION:    rest.m_name is \"A\"." << endl;
		cout << "\t ACTUAL:         rest.m_name is \"" << rest.m_name << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_address is \"B\"." << endl;
		cout << "\t ACTUAL:         rest.m_address is \"" << rest.m_address << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_city is \"C\"." << endl;
		cout << "\t ACTUAL:         rest.m_city is \"" << rest.m_city << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_state is \"D\"." << endl;
		cout << "\t ACTUAL:         rest.m_state is \"" << rest.m_state << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_zipcode is 5." << endl;
		cout << "\t ACTUAL:         rest.m_zipcode is " << rest.m_zipcode << "." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.Setup("Foodplace", "123 Fake St", "Townsville", "MO", 12345);
		if (rest.m_name != "Foodplace") { cout << "[FAIL] "; }
		else if (rest.m_address != "123 Fake St") { cout << "[FAIL] "; }
		else if (rest.m_city != "Townsville") { cout << "[FAIL] "; }
		else if (rest.m_state != "MO") { cout << "[FAIL] "; }
		else if (rest.m_zipcode != 12345) { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 2: Create a Restaurant. Use Setup function. Verify private member variables." << endl;
		cout << "\t Restaurant rest; rest.Setup(\"Foodplace\", \"123 Fake St\", \"Townsville\", \"MO\", 5);" << endl;
		cout << "\t EXPECTATION:    rest.m_name is \"Foodplace\"." << endl;
		cout << "\t ACTUAL:         rest.m_name is \"" << rest.m_name << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_address is \"123 Fake St\"." << endl;
		cout << "\t ACTUAL:         rest.m_address is \"" << rest.m_address << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_city is \"Townsville\"." << endl;
		cout << "\t ACTUAL:         rest.m_city is \"" << rest.m_city << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_state is \"MO\"." << endl;
		cout << "\t ACTUAL:         rest.m_state is \"" << rest.m_state << "\"." << endl;
		cout << "\t EXPECTATION:    rest.m_zipcode is 12345." << endl;
		cout << "\t ACTUAL:         rest.m_zipcode is " << rest.m_zipcode << "." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_name = "Cafe Coffee Day";
		if (rest.GetName() != "Cafe Coffee Day") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 3a: Create a Restaurant. Set m_name. Check GetName();" << endl;
		cout << "\t Restaurant rest; rest.m_name = \"Cafe Coffee Day\"; rest.GetName() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetName() is \"Cafe Coffee Day\"." << endl;
		cout << "\t ACTUAL:         rest.GetName() is \"" << rest.GetName() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_name = "Stacks Cafe";
		if (rest.GetName() != "Stacks Cafe") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 3b: Create a Restaurant. Set m_name. Check GetName();" << endl;
		cout << "\t Restaurant rest; rest.m_name = \"Stacks Cafe\"; rest.GetName() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetName() is \"Stacks Cafe\"." << endl;
		cout << "\t ACTUAL:         rest.GetName() is \"" << rest.GetName() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_city = "Raytown";
		if (rest.GetCity() != "Raytown") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 4a: Create a Restaurant. Set m_city. Check GetCity();" << endl;
		cout << "\t Restaurant rest; rest.m_city = \"Raytown\"; rest.GetCity() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetCity() is \"Raytown\"." << endl;
		cout << "\t ACTUAL:         rest.GetCity() is \"" << rest.GetCity() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_city = "Lee's Summit";
		if (rest.GetCity() != "Lee's Summit") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 4b: Create a Restaurant. Set m_city. Check GetCity();" << endl;
		cout << "\t Restaurant rest; rest.m_city = \"Lee's Summit\"; rest.GetCity() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetCity() is \"Lee's Summit\"." << endl;
		cout << "\t ACTUAL:         rest.GetCity() is \"" << rest.GetCity() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_state = "MO";
		if (rest.GetState() != "MO") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 5a: Create a Restaurant. Set m_state. Check GetState();" << endl;
		cout << "\t Restaurant rest; rest.m_state = \"MO\"; rest.GetState() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetState() is \"MO\"." << endl;
		cout << "\t ACTUAL:         rest.GetState() is \"" << rest.GetState() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_state = "KS";
		if (rest.GetState() != "KS") { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 5b: Create a Restaurant. Set m_state. Check GetState();" << endl;
		cout << "\t Restaurant rest; rest.m_state = \"KS\"; rest.GetState() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetState() is \"KS\"." << endl;
		cout << "\t ACTUAL:         rest.GetState() is \"" << rest.GetState() << "\"." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_zipcode = 12345;
		if (rest.GetZipcode() != 12345) { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 5a: Create a Restaurant. Set m_zipcode. Check GetZipcode();" << endl;
		cout << "\t Restaurant rest; rest.m_zipcode = 12345; rest.GetZipcode() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetZipcode() is 12345." << endl;
		cout << "\t ACTUAL:         rest.GetZipcode() is " << rest.GetZipcode() << "." << endl;
		cout << endl;
	}

	{
		Restaurant rest;
		rest.m_zipcode = 64138;
		if (rest.GetZipcode() != 64138) { cout << "[FAIL] "; }
		else { testsPass++; cout << "[PASS] "; }
		totalTests++;
		cout << "TEST 5b: Create a Restaurant. Set m_zipcode. Check GetZipcode();" << endl;
		cout << "\t Restaurant rest; rest.m_zipcode = 64138; rest.GetZipcode() = ...?" << endl;
		cout << "\t EXPECTATION:    rest.GetZipcode() is 64138." << endl;
		cout << "\t ACTUAL:         rest.GetZipcode() is " << rest.GetZipcode() << "." << endl;
		cout << endl;
	}

	cout << endl << string(80, '*') << endl
		<< testsPass << " tests passed out of " << totalTests << " total tests"
		<< endl << string(80, '*') << endl;
}
