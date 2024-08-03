#include "QuestionFamily.h"

#include <iostream>
using namespace std;

/* QUESTION *************************************************************************/
IQuestion::IQuestion()
{
    this->question = "";
}

IQuestion::IQuestion( string new_question )
{
    this->question = new_question;
}

IQuestion::~IQuestion()
{
}

void IQuestion::DisplayQuestion()
{
    cout << this->question << endl;
}

/* TRUE/FALSE QUESTION **************************************************************/
TrueFalseQuestion::TrueFalseQuestion()
{
    this->question = "";
    this->answer = false;
}

TrueFalseQuestion::TrueFalseQuestion( string new_question, bool new_answer )
    : IQuestion( new_question )
{
    this->answer = new_answer;
}

TrueFalseQuestion::~TrueFalseQuestion()
{
}

bool TrueFalseQuestion::AskQuestion()
{
    cout << endl << string( 80, '-' ) << endl;
    cout << "True or false     - ";
    DisplayQuestion();

    int selection;
    cout << "1. TRUE \t 2. FALSE" << endl;
    cout << "Your answer: ";
    cin >> selection;

    bool result = IsCorrect( selection == 1 );

    if ( result )
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Wrong!" << endl;
    }

    return result;
}

bool TrueFalseQuestion::IsCorrect( bool guess )
{
    return ( guess == this->answer );
}

// - STUDENT CODE ----------------------------------------------------------

// -------------------------------------------------------------------------
