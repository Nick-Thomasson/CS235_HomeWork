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
  std::string program_name = "";
  ProgramAction action = ProgramAction::PROGRAM;

  // RUN THE PROGRAM OR RUN THE TESTS?
  if ( argCount > 1 && std::string( args[1] ) == "test" )
  {
    action = ProgramAction::TEST;
  }
  else if ( argCount > 1 && std::string( args[1] ) == "run" )
  {
    action = ProgramAction::PROGRAM;
  }
  else
  {
    // User menu
    std::cout << std::string( 80, '-' ) << std::endl
              << program_name << std::endl << std::endl
              << "1. Run AUTOMATED TESTS" << std::endl
              << "2. Run PROGRAM" << std::endl << std::endl
              << ">> ";
    int choice;
    std::cin >> choice;

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
  const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
  const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

	std::cout << std::string(80, '-') << std::endl;
	std::cout << std::endl << "RESTAURANT TESTS" << std::endl;

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

		std::cout << "TEST 0: Check if functions have been implemented..." << std::endl;
		if  (exception) { std::cout << RED << "[FAIL] "; allPass = false; }
		else            { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

		if ( !allPass )
		{
            std::cout << "\t EXPECTATION:    RestaurantManager::AddRestaurant(...) is implemented (1)" << std::endl;
            std::cout << "\t ACTUAL:         RestaurantManager::AddRestaurant(...) is implemented (" << (implemented_RestaurantManager_AddRestaurant) << ")" << std::endl;
            std::cout << "\t EXPECTATION:    RestaurantManager::FindByName(...) is implemented (1)" << std::endl;
            std::cout << "\t ACTUAL:         RestaurantManager::FindByName(...) is implemented (" << (implemented_RestaurantManager_FindByName) << ")" << std::endl;
            std::cout << "\t EXPECTATION:    RestaurantManager::FindByCity(...) is implemented (1)" << std::endl;
            std::cout << "\t ACTUAL:         RestaurantManager::FindByCity(...) is implemented (" << (implemented_RestaurantManager_FindByCity) << ")" << std::endl;
            std::cout << "\t EXPECTATION:    RestaurantManager::FindByState(...) is implemented (1)" << std::endl;
            std::cout << "\t ACTUAL:         RestaurantManager::FindByState(...) is implemented (" << (implemented_RestaurantManager_FindByState) << ")" << std::endl;
            std::cout << "\t EXPECTATION:    RestaurantManager::FindByZipcode(...) is implemented (1)" << std::endl;
            std::cout << "\t ACTUAL:         RestaurantManager::FindByZipcode(...) is implemented (" << (implemented_RestaurantManager_FindByZip) << ")" << std::endl;
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
	} std::cout << CLR;

	if (!allFunctionsImplemented)
	{
		std::cout << std::endl << "ENDING UNIT TESTS - PREREQUISITE FUNCTIONS NOT IMPLEMENTED." << std::endl;
		return;
	}

	{
        bool allPass = true;

		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("AA", "BB", "CC", "DD", 66);
		restMan.AddRestaurant(rest);
		if      (restMan.m_restaurants.size() != 1)             { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetName() != "AA")    { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetAddress() != "BB") { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetCity() != "CC")    { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetState() != "DD")   { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetZipcode() != 66)   { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                                    { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

        std::cout << "TEST 1a: Create Restaurant. Create RestaurantManager. Add Restauraunt to Manager. Verify." << std::endl;
		if ( !allPass )
        {
            std::cout << "\t RestaurantManager restMan; Restaurant rest; rest.Setup(\"AA\", \"BB\", \"CC\", \"DD\", 66); restMan.AddRestaurant(rest);" << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants.size() is 1." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants.size() is " << restMan.m_restaurants.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetName() is \"AA\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetName() is \"" << rest.GetName() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetAddress() is \"BB\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetAddress() is \"" << rest.GetAddress() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetCity() is \"CC\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetCity() is \"" << rest.GetCity() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetState() is \"DD\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetState() is \"" << rest.GetState() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetZipcode() is 66." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetZipcode() is " << rest.GetZipcode() << "." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "123 Fake St", "Raytown", "MO", 64138);
		restMan.AddRestaurant(rest);
		if      (restMan.m_restaurants.size() != 1)                         { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetName() != "Taco Bell")         { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetAddress() != "123 Fake St")    { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetCity() != "Raytown")           { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetState() != "MO")               { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (restMan.m_restaurants[0].GetZipcode() != 64138)            { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                                                { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

        std::cout << "TEST 1b: Create Restaurant. Create RestaurantManager. Add Restauraunt to Manager. Verify." << std::endl;
		if ( !allPass )
		{
            std::cout << "\t RestaurantManager restMan; Restaurant rest; rest.Setup(\"Taco Bell\", \"123 Fake St\", \"Raytown\", \"MO\", 64138); restMan.AddRestaurant(rest);" << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants.size() is 1." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants.size() is " << restMan.m_restaurants.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetName() is \"Taco Bell\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetName() is \"" << rest.GetName() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetAddress() is \"123 Fake St\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetAddress() is \"" << rest.GetAddress() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetCity() is \"Raytown\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetCity() is \"" << rest.GetCity() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetState() is \"MO\"." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetState() is \"" << rest.GetState() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    restMan.m_restaurants[0].GetZipcode() is 64138." << std::endl;
            std::cout << "\t ACTUAL:         restMan.m_restaurants[0].GetZipcode() is " << rest.GetZipcode() << "." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		std::vector<Restaurant> matches = restMan.FindByName("Taco Bell");

		if      (matches.size() != 2)                   { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetName() != "Taco Bell")   { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetName() != "Taco Bell")   { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                            { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

        std::cout << "TEST 2: Create RestaurantManager. Add Restaurants. Check FindByName results." << std::endl;
		if ( !allPass )
		{
            std::cout << "\t RestaurantManager restMan; Added 2 Taco Bells and 1 Hawaiian Bros. restMan.FindByName(\"Taco Bell\");" << std::endl;
            std::cout << "\t EXPECTATION:    matches.size() is 2." << std::endl;
            std::cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    matches[0].GetName() is \"Taco Bell\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[0].GetName() is \"" << matches[0].GetName() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    matches[1].GetName() is \"Taco Bell\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[1].GetName() is \"" << matches[1].GetName() << "\"." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		std::vector<Restaurant> matches = restMan.FindByCity("Overland Park");

		if      (matches.size() != 2)                       { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetCity() != "Overland Park")   { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetCity() != "Overland Park")   { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                                { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

        std::cout << "TEST 3: Create RestaurantManager. Add Restaurants. Check FindByCity results." << std::endl;
		if ( !allPass )
		{
            std::cout << "\t RestaurantManager restMan; Added 2 Taco Bells and 1 Hawaiian Bros. restMan.FindByCity(\"Overland Park\");" << std::endl;
            std::cout << "\t EXPECTATION:    matches.size() is 2." << std::endl;
            std::cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    matches[0].GetCity() is \"Overland Park\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[0].GetCity() is \"" << matches[0].GetCity() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    matches[1].GetCity() is \"Overland Park\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[1].GetCity() is \"" << matches[1].GetCity() << "\"." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	{
        bool allPass = true;

		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133); restMan.AddRestaurant(rest);
		std::vector<Restaurant> matches = restMan.FindByState("KS");
		if      (matches.size() != 3)           { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetState() != "KS") { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetState() != "KS") { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[2].GetState() != "KS") { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                    { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;

        std::cout << "TEST 4: Create RestaurantManager. Add Restaurants. Check FindByState results." << std::endl;
		if ( !allPass )
		{
            std::cout << "\t RestaurantManager restMan; Added 3 Taco Bells and 1 Hawaiian Bros. restMan.FindByState(\"KS\");" << std::endl;
            std::cout << "\t EXPECTATION:    matches.size() is 3." << std::endl;
            std::cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    matches[0].GetState() is \"KS\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[0].GetState() is \"" << matches[0].GetState() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    matches[1].GetState() is \"KS\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[1].GetState() is \"" << matches[1].GetState() << "\"." << std::endl;
            std::cout << "\t EXPECTATION:    matches[2].GetState() is \"KS\"." << std::endl;
            std::cout << "\t ACTUAL:         matches[2].GetState() is \"" << matches[2].GetState() << "\"." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	{
        bool allPass = true;
		RestaurantManager restMan;
		Restaurant rest;
		rest.Setup("Taco Bell", "12208 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "12075 S Black Bob Rd", "Olathe", "KS", 66062); restMan.AddRestaurant(rest);
		rest.Setup("Hawaiian Bros", "12120 College Blvd", "Overland Park", "KS", 66210); restMan.AddRestaurant(rest);
		rest.Setup("Taco Bell", "9021 E State Rte 350", "Raytown", "MO", 64133); restMan.AddRestaurant(rest);
		std::vector<Restaurant> matches = restMan.FindByZipcode(66210);
		if      (matches.size() != 2)               { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[0].GetZipcode() != 66210)  { std::cout << RED << "[FAIL] "; allPass = false; }
		else if (matches[1].GetZipcode() != 66210)  { std::cout << RED << "[FAIL] "; allPass = false; }
		else                                        { testsPass++; std::cout << GRN << "[PASS] "; }
		totalTests++;
		std::cout << "TEST 5: Create RestaurantManager. Add Restaurants. Check FindByZipcode results." << std::endl;

		if ( !allPass )
		{
            std::cout << "\t RestaurantManager restMan; Added 3 Taco Bells and 1 Hawaiian Bros. restMan.FindByZipcode(66210);" << std::endl;
            std::cout << "\t EXPECTATION:    matches.size() is 2." << std::endl;
            std::cout << "\t ACTUAL:         matches.size() is " << matches.size() << "." << std::endl;
            std::cout << "\t EXPECTATION:    matches[0].GetZipcode() is 66210." << std::endl;
            std::cout << "\t ACTUAL:         matches[0].GetZipcode() is " << matches[0].GetZipcode() << "." << std::endl;
            std::cout << "\t EXPECTATION:    matches[1].GetZipcode() is 66210." << std::endl;
            std::cout << "\t ACTUAL:         matches[1].GetZipcode() is " << matches[1].GetZipcode() << "." << std::endl;
            std::cout << std::endl;
		}
	} std::cout << CLR;

	std::cout << "Functions without tests:" << std::endl;
	std::cout << "* void Load();" << std::endl;
	std::cout << "* void Save();" << std::endl;
	std::cout << "* void AddRestaurant();" << std::endl;

	std::cout << std::endl << std::string(80, '*') << std::endl
		<< testsPass << " tests passed out of " << totalTests << " total tests"
		<< std::endl << std::string(80, '*') << std::endl;
}
