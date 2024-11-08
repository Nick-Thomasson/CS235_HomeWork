//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

#include "RestaurantManager.h"
#include "Program.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
  string program_name = "";
  ProgramAction action = ProgramAction::PROGRAM;

  // RUN THE PROGRAM OR RUN THE TESTS?
  if ( argCount > 1 && string( args[1] ) == "test" )
  {
    action = ProgramAction::TEST;
  }
  else if ( argCount > 1 && string( args[1] ) == "run" )
  {
    action = ProgramAction::PROGRAM;
  }
  else
  {
    // User menu
    cout << string( 80, '-' ) << endl
              << program_name << endl << endl
              << "1. Run AUTOMATED TESTS" << endl
              << "2. Run PROGRAM" << endl << endl
              << ">> ";
    int choice;
    cin >> choice;

    switch( choice )
    {
    case 1: action = ProgramAction::TEST; break;
    case 2: action = ProgramAction::PROGRAM; break;
    }
  }

  // Execute action
  if ( action == ProgramAction::TEST )
  {
    Tester();
  }
  else
  {
    Program program;
    program.Run();
  }

  return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
  const string GRN = "\033[0;32m"; const string RED = "\033[0;31m";
  const string BOLD = "\033[0;35m"; const string CLR = "\033[0m";

	cout << string(80, '-') << endl;
	cout << endl << "RESTAURANT TESTS" << endl;

	int testsPass = 0;
	int totalTests = 0;

	bool implemented_RestaurantManager_AddRestaurant = true;
	bool implemented_RestaurantManager_FindByName = true;
	bool implemented_RestaurantManager_FindByCity = true;
	bool implemented_RestaurantManager_FindByState = true;
	bool implemented_RestaurantManager_FindByZip = true;
	bool implemented_Restaurant_GetName = true;
	bool implemented_Restaurant_GetAddress = true;
	bool implemented_Restaurant_GetCity = true;
	bool implemented_Restaurant_GetState = true;
	bool implemented_Restaurant_GetZipcode = true;
	bool allFunctionsImplemented = true;

	{
		RestaurantManager restMan;
		Restaurant rest;
		bool exception = false;
		try { restMan.AddRestaurant(Restaurant()); }
		catch (...)
		{
			implemented_RestaurantManager_AddRestaurant = false;
			allFunctionsImplemented = false;
			exception = true;
		}
		try { restMan.FindByCity("asdf"); }
		catch (...)
		{
			implemented_RestaurantManager_FindByCity = false;
			allFunctionsImplemented = false;
			exception = true;
		}
		try { restMan.FindByState("asdf"); }
		catch (...)
		{
			implemented_RestaurantManager_FindByState = false;
			allFunctionsImplemented = false;
			exception = true;
		}
		try { restMan.FindByName("asdf"); }
		catch (...)
		{
			implemented_RestaurantManager_FindByName = false;
			allFunctionsImplemented = false;
			exception = true;
		}
		try { restMan.FindByZipcode(111); }
		catch (...)
		{
			implemented_RestaurantManager_FindByZip = false;
			allFunctionsImplemented = false;
			exception = true;
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

		bool allPass = true;

		cout << "TEST 0: Check if functions have been implemented..." << endl;
		if  (exception) { cout << RED << "[FAIL] "; allPass = false; }
		else            { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

		if ( !allPass )
		{
            cout << "\t EXPECTATION:    RestaurantManager::AddRestaurant(...) is implemented (1)" << endl;
            cout << "\t ACTUAL:         RestaurantManager::AddRestaurant(...) is implemented (" << (implemented_RestaurantManager_AddRestaurant) << ")" << endl;
            cout << "\t EXPECTATION:    RestaurantManager::FindByName(...) is implemented (1)" << endl;
            cout << "\t ACTUAL:         RestaurantManager::FindByName(...) is implemented (" << (implemented_RestaurantManager_FindByName) << ")" << endl;
            cout << "\t EXPECTATION:    RestaurantManager::FindByCity(...) is implemented (1)" << endl;
            cout << "\t ACTUAL:         RestaurantManager::FindByCity(...) is implemented (" << (implemented_RestaurantManager_FindByCity) << ")" << endl;
            cout << "\t EXPECTATION:    RestaurantManager::FindByState(...) is implemented (1)" << endl;
            cout << "\t ACTUAL:         RestaurantManager::FindByState(...) is implemented (" << (implemented_RestaurantManager_FindByState) << ")" << endl;
            cout << "\t EXPECTATION:    RestaurantManager::FindByZipcode(...) is implemented (1)" << endl;
            cout << "\t ACTUAL:         RestaurantManager::FindByZipcode(...) is implemented (" << (implemented_RestaurantManager_FindByZip) << ")" << endl;
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
	} cout << CLR;

	if (!allFunctionsImplemented)
	{
		cout << endl << "ENDING UNIT TESTS - PREREQUISITE FUNCTIONS NOT IMPLEMENTED." << endl;
		return;
	}

	{
        bool allPass = true;

		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("AA", "BB", "CC", "DD", 66);
		restMan.AddRestaurant(rest);
		if      (restMan.m_restaurants.size() != 1)             { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetName() != "AA")    { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetAddress() != "BB") { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetCity() != "CC")    { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetState() != "DD")   { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetZipcode() != 66)   { cout << RED << "[FAIL] "; allPass = false; }
		else                                                    { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

        cout << "TEST 1a: Create Restaurant. Create RestaurantManager. Add Restauraunt to Manager. Verify." << endl;
		if ( !allPass )
        {
            cout << "\t RestaurantManager restMan; Restaurant rest; rest.Setup(\"AA\", \"BB\", \"CC\", \"DD\", 66); restMan.AddRestaurant(rest);" << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants.size() is 1." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants.size() is " << restMan.m_restaurants.size() << "." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetName() is \"AA\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetName() is \"" << rest.GetName() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetAddress() is \"BB\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetAddress() is \"" << rest.GetAddress() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetCity() is \"CC\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetCity() is \"" << rest.GetCity() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetState() is \"DD\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetState() is \"" << rest.GetState() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetZipcode() is 66." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetZipcode() is " << rest.GetZipcode() << "." << endl;
            cout << endl;
		}
	} cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "123 Fake St", "Raytown", "MO", 64138);
		restMan.AddRestaurant(rest);
		if      (restMan.m_restaurants.size() != 1)                         { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetName() != "Taco Bell")         { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetAddress() != "123 Fake St")    { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetCity() != "Raytown")           { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetState() != "MO")               { cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetZipcode() != 64138)            { cout << RED << "[FAIL] "; allPass = false; }
		else                                                                { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

        cout << "TEST 1b: Create Restaurant. Create RestaurantManager. Add Restauraunt to Manager. Verify." << endl;
		if ( !allPass )
		{
            cout << "\t RestaurantManager restMan; Restaurant rest; rest.Setup(\"Taco Bell\", \"123 Fake St\", \"Raytown\", \"MO\", 64138); restMan.AddRestaurant(rest);" << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants.size() is 1." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants.size() is " << restMan.m_restaurants.size() << "." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetName() is \"Taco Bell\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetName() is \"" << rest.GetName() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetAddress() is \"123 Fake St\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetAddress() is \"" << rest.GetAddress() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetCity() is \"Raytown\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetCity() is \"" << rest.GetCity() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetState() is \"MO\"." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetState() is \"" << rest.GetState() << "\"." << endl;
            cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetZipcode() is 64138." << endl;
            cout << "\t ACTUAL:         restMan.m_restaurants[0].GetZipcode() is " << rest.GetZipcode() << "." << endl;
            cout << endl;
		}
	} cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		vector<Restaurant> matches = restMan.FindByName("Taco Bell");

		if      (matches.size() != 2)                   { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetName() != "Taco Bell")   { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetName() != "Taco Bell")   { cout << RED << "[FAIL] "; allPass = false; }
		else                                            { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

        cout << "TEST 2: Create RestaurantManager. Add Restaurants. Check FindByName results." << endl;
		if ( !allPass )
		{
            cout << "\t RestaurantManager restMan; Added 2 Taco Bells and 1 Hawaiian Bros. restMan.FindByName(\"Taco Bell\");" << endl;
            cout << "\t EXPECTATION:    matches.size() is 2." << endl;
            cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << endl;
            cout << "\t EXPECTATION:    matches[0].GetName() is \"Taco Bell\"." << endl;
            cout << "\t ACTUAL:         matches[0].GetName() is \"" << matches[0].GetName() << "\"." << endl;
            cout << "\t EXPECTATION:    matches[1].GetName() is \"Taco Bell\"." << endl;
            cout << "\t ACTUAL:         matches[1].GetName() is \"" << matches[1].GetName() << "\"." << endl;
            cout << endl;
		}
	} cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		vector<Restaurant> matches = restMan.FindByCity("Overland Park");

		if      (matches.size() != 2)                       { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetCity() != "Overland Park")   { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetCity() != "Overland Park")   { cout << RED << "[FAIL] "; allPass = false; }
		else                                                { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

        cout << "TEST 3: Create RestaurantManager. Add Restaurants. Check FindByCity results." << endl;
		if ( !allPass )
		{
            cout << "\t RestaurantManager restMan; Added 2 Taco Bells and 1 Hawaiian Bros. restMan.FindByCity(\"Overland Park\");" << endl;
            cout << "\t EXPECTATION:    matches.size() is 2." << endl;
            cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << endl;
            cout << "\t EXPECTATION:    matches[0].GetCity() is \"Overland Park\"." << endl;
            cout << "\t ACTUAL:         matches[0].GetCity() is \"" << matches[0].GetCity() << "\"." << endl;
            cout << "\t EXPECTATION:    matches[1].GetCity() is \"Overland Park\"." << endl;
            cout << "\t ACTUAL:         matches[1].GetCity() is \"" << matches[1].GetCity() << "\"." << endl;
            cout << endl;
		}
	} cout << CLR;

	{
        bool allPass = true;

		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133); restMan.AddRestaurant(rest);
		vector<Restaurant> matches = restMan.FindByState("KS");
		if      (matches.size() != 3)           { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetState() != "KS") { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetState() != "KS") { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[2].GetState() != "KS") { cout << RED << "[FAIL] "; allPass = false; }
		else                                    { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;

        cout << "TEST 4: Create RestaurantManager. Add Restaurants. Check FindByState results." << endl;
		if ( !allPass )
		{
            cout << "\t RestaurantManager restMan; Added 3 Taco Bells and 1 Hawaiian Bros. restMan.FindByState(\"KS\");" << endl;
            cout << "\t EXPECTATION:    matches.size() is 3." << endl;
            cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << endl;
            cout << "\t EXPECTATION:    matches[0].GetState() is \"KS\"." << endl;
            cout << "\t ACTUAL:         matches[0].GetState() is \"" << matches[0].GetState() << "\"." << endl;
            cout << "\t EXPECTATION:    matches[1].GetState() is \"KS\"." << endl;
            cout << "\t ACTUAL:         matches[1].GetState() is \"" << matches[1].GetState() << "\"." << endl;
            cout << "\t EXPECTATION:    matches[2].GetState() is \"KS\"." << endl;
            cout << "\t ACTUAL:         matches[2].GetState() is \"" << matches[2].GetState() << "\"." << endl;
            cout << endl;
		}
	} cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133); restMan.AddRestaurant(rest);
		vector<Restaurant> matches = restMan.FindByZipcode(66210);
		if      (matches.size() != 2)               { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetZipcode() != 66210)  { cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetZipcode() != 66210)  { cout << RED << "[FAIL] "; allPass = false; }
		else                                        { testsPass++; cout << GRN << "[PASS] "; }
		totalTests++;
		cout << "TEST 5: Create RestaurantManager. Add Restaurants. Check FindByZipcode results." << endl;

		if ( !allPass )
		{
            cout << "\t RestaurantManager restMan; Added 3 Taco Bells and 1 Hawaiian Bros. restMan.FindByZipcode(66210);" << endl;
            cout << "\t EXPECTATION:    matches.size() is 2." << endl;
            cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << endl;
            cout << "\t EXPECTATION:    matches[0].GetZipcode() is 66210." << endl;
            cout << "\t ACTUAL:         matches[0].GetZipcode() is " << matches[0].GetZipcode() << "." << endl;
            cout << "\t EXPECTATION:    matches[1].GetZipcode() is 66210." << endl;
            cout << "\t ACTUAL:         matches[1].GetZipcode() is " << matches[1].GetZipcode() << "." << endl;
            cout << endl;
		}
	} cout << CLR;

	cout << "Functions without tests:" << endl;
	cout << "* void Load();" << endl;
	cout << "* void Save();" << endl;
	cout << "* void AddRestaurant();" << endl;

	cout << endl << string(80, '*') << endl
		<< testsPass << " tests passed out of " << totalTests << " total tests"
		<< endl << string(80, '*') << endl;
}
