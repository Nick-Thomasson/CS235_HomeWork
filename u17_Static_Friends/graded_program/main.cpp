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

    std::string test_name;

    { test_name = "Test CreateOrder 1";
        RestaurantManager::CreateOrder( "breakfast combo" );

        if ( RestaurantManager::orders.size() == 0 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED RESULT: orders.size() > 0" << std::endl;
            std::cout << "ACTUAL   RESULT: " << RestaurantManager::orders.size() << std::endl;
        }
        else if ( RestaurantManager::orders.back().meal_name != "breakfast combo" )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED orders.back().meal_name: breakfast combo" << std::endl;
            std::cout << "ACTUAL   orders.back().meal_name: " << RestaurantManager::orders.front().meal_name << std::endl;
        }
        else
        {
            std::cout << GRN << "[PASS] " << test_name << std::endl;
        }
    } std::cout << CLR;

    { test_name = "Test CreateOrder 2";
        RestaurantManager::CreateOrder( "soup of the day" );

        if ( RestaurantManager::orders.size() == 0 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED RESULT: orders.size() > 0" << std::endl;
            std::cout << "ACTUAL   RESULT: " << RestaurantManager::orders.size() << std::endl;
        }
        else if ( RestaurantManager::orders.back().meal_name != "soup of the day" )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED orders.back().meal_name: soup of the day" << std::endl;
            std::cout << "ACTUAL   orders.back().meal_name: " << RestaurantManager::orders.front().meal_name << std::endl;
        }
        else
        {
            std::cout << GRN << "[PASS] " << test_name << std::endl;
        }
    } std::cout << CLR;

    { test_name = "Test PrepNextOrder";
        RestaurantManager::PrepNextOrder();
        RestaurantManager::PrepNextOrder();

        if ( RestaurantManager::meals.size() == 0 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED RESULT: meals.size() > 0" << std::endl;
            std::cout << "ACTUAL   RESULT: " << RestaurantManager::meals.size() << std::endl;
        }
        else if ( RestaurantManager::orders.size() > 0 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED RESULT: orders.size() == 0" << std::endl;
            std::cout << "ACTUAL   RESULT: " << RestaurantManager::orders.size() << std::endl;
        }
        else
        {
            std::cout << GRN << "[PASS] " << test_name << std::endl;
        }
    } std::cout << CLR;

    { test_name = "Test ReturnMeal 1";
        size_t originalSize = RestaurantManager::meals.size();
        Meal meal = RestaurantManager::ReturnMeal();

        if ( RestaurantManager::meals.size() >= originalSize )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED meals.size() < " << originalSize << std::endl;
            std::cout << "ACTUAL   meals.size() " << RestaurantManager::meals.size() << std::endl;
        }
        else if ( meal.meal_name != "breakfast combo" )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED first meal name: " << originalSize << std::endl;
            std::cout << "ACTUAL   first meal name: " << meal.meal_name << std::endl;
        }
        else if ( meal.foods.size() != 4 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED meal.foods.size(): 4" << std::endl;
            std::cout << "ACTUAL   meal.foods.size() " << meal.foods.size() << std::endl;
        }
        else
        {
            std::cout << GRN << "[PASS] " << test_name << std::endl;
        }
    } std::cout << CLR;

    { test_name = "Test ReturnMeal 2";
        size_t originalSize = RestaurantManager::meals.size();
        Meal meal = RestaurantManager::ReturnMeal();

        if ( RestaurantManager::meals.size() >= originalSize )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED meals.size() < " << originalSize << std::endl;
            std::cout << "ACTUAL   meals.size() " << RestaurantManager::meals.size() << std::endl;
        }
        else if ( meal.meal_name != "soup of the day" )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED first meal name: " << originalSize << std::endl;
            std::cout << "ACTUAL   first meal name: " << meal.meal_name << std::endl;
        }
        else if ( meal.foods.size() != 2 )
        {
            std::cout << RED << "[FAIL] " << test_name << std::endl;
            std::cout << "EXPECTED meal.foods.size(): 4" << std::endl;
            std::cout << "ACTUAL   meal.foods.size() " << meal.foods.size() << std::endl;
        }
        else
        {
            std::cout << GRN << "[PASS] " << test_name << std::endl;
        }
    } std::cout << CLR;
}
