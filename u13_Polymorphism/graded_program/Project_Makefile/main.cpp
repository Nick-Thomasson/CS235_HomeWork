//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE! !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <iomanip>
#include <string>

#include "Program.h"

enum class ProgramAction { TEST, PROGRAM };
void Tester();
int main( int argCount, char* args[] )
{
//    std::string program_name = "";
//    ProgramAction action = ProgramAction::PROGRAM;
//
//    // RUN THE PROGRAM OR RUN THE TESTS?
//    if ( argCount > 1 && std::string( args[1] ) == "test" )
//    {
//        action = ProgramAction::TEST;
//    }
//    else if ( argCount > 1 && std::string( args[1] ) == "run" )
//    {
//        action = ProgramAction::PROGRAM;
//    }
//    else
//    {
//        // User menu
//        std::cout << std::string( 80, '-' ) << std::endl
//                  << program_name << std::endl << std::endl
//                  << "1. Run AUTOMATED TESTS" << std::endl
//                  << "2. Run PROGRAM" << std::endl << std::endl
//                  << ">> ";
//        int choice;
//        std::cin >> choice;
//
//        switch( choice )
//        {
//        case 1: action = ProgramAction::TEST; break;
//        case 2: action = ProgramAction::PROGRAM; break;
//        }
//    }
//
//    // Execute action
//    if ( action == ProgramAction::TEST )
//    {
//        Tester();
//    }
//    else
//    {
        Program program;
        program.Run();
//    }

    return 0;
}

// - AUTOMATED TESTER -------------------------------------------------------//
void Tester()
{
//    const std::string GRN = "\033[0;32m"; const std::string RED = "\033[0;31m";
//    const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";
//    std::cout << std::left;
//
//    std::cout << "Manual testing will need to be done to fully check features." << std::endl;
//
//    std::string test_name;
//
//    {   test_name = "TrueFalseQuestion - Check constructor 1";
//        string input1 = "A";
//        bool input2 = true;
//        string exout1 = "A";
//        bool exout2 = true;
//        string acout1;
//        bool acout2;
//
//        TrueFalseQuestion q( input1, input2 );
//        acout1 = q.question;
//        acout2 = q.answer;
//
//        if ( acout1 == exout1 && acout2 == exout2 )
//        {
//            std::cout << GRN << "[PASS] " << test_name << std::endl;
//        }
//        else
//        {
//            std::cout << RED << "[FAIL] " << test_name << std::endl;
//            std::cout << "TrueFalseQuestion( \"" << input1 << "\", " << input2 << ")" << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected question: " + exout1 )
//                << std::setw( 30 ) << std::string( "actual question: " + acout1 ) << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected answer:   " + to_string( exout2 ) )
//                << std::setw( 30 ) << std::string( "actual answer:   " + to_string( acout2 ) ) << std::endl;
//        }
//    } std::cout << CLR;
//
//    {   test_name = "TrueFalseQuestion - Check constructor 2";
//        string input1 = "Z";
//        bool input2 = false;
//        string exout1 = "Z";
//        bool exout2 = false;
//        string acout1;
//        bool acout2;
//
//        TrueFalseQuestion q( input1, input2 );
//        acout1 = q.question;
//        acout2 = q.answer;
//
//        if ( acout1 == exout1 && acout2 == exout2 )
//        {
//            std::cout << GRN << "[PASS] " << test_name << std::endl;
//        }
//        else
//        {
//            std::cout << RED << "[FAIL] " << test_name << std::endl;
//            std::cout << "TrueFalseQuestion( \"" << input1 << "\", " << input2 << ")" << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected question: " + exout1 )
//                << std::setw( 30 ) << std::string( "actual question: " + acout1 ) << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected answer:   " + to_string( exout2 ) )
//                << std::setw( 30 ) << std::string( "actual answer:   " + to_string( acout2 ) ) << std::endl;
//        }
//    } std::cout << CLR;
//
//    {   test_name = "FillInQuestion - Check constructor 1";
//        string input1 = "A";
//        string input2 = "CAT";
//        string exout1 = "A";
//        string exout2 = "CAT";
//        string acout1;
//        string acout2;
//
//        FillInQuestion q( input1, input2 );
//        acout1 = q.question;
//        acout2 = q.answer;
//
//        if ( acout1 == exout1 && acout2 == exout2 )
//        {
//            std::cout << GRN << "[PASS] " << test_name << std::endl;
//        }
//        else
//        {
//            std::cout << RED << "[FAIL] " << test_name << std::endl;
//            std::cout << "FillInQuestion( \"" << input1 << "\", " << input2 << ")" << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected question: " + exout1 )
//                << std::setw( 30 ) << std::string( "actual question: " + acout1 ) << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected answer:   " + exout2 )
//                << std::setw( 30 ) << std::string( "actual answer:   " + acout2 ) << std::endl;
//        }
//    } std::cout << CLR;
//
//    {   test_name = "FillInQuestion - Check constructor 2";
//        string input1 = "Z";
//        string input2 = "DOG";
//        string exout1 = "Z";
//        string exout2 = "DOG";
//        string acout1;
//        string acout2;
//
//        FillInQuestion q( input1, input2 );
//        acout1 = q.question;
//        acout2 = q.answer;
//
//        if ( acout1 == exout1 && acout2 == exout2 )
//        {
//            std::cout << GRN << "[PASS] " << test_name << std::endl;
//        }
//        else
//        {
//            std::cout << RED << "[FAIL] " << test_name << std::endl;
//            std::cout << "FillInQuestion( \"" << input1 << "\", " << input2 << ")" << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected question: " + exout1 )
//                << std::setw( 30 ) << std::string( "actual question: " + acout1 ) << std::endl;
//            std::cout << std::setw( 30 ) << std::string( "Expected answer:   " + exout2 )
//                << std::setw( 30 ) << std::string( "actual answer:   " + acout2 ) << std::endl;
//        }
//    } std::cout << CLR;
}








