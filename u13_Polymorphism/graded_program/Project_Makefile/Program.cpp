#include "Program.h"

Program::Program()
{
    // Create questions
    questions.push_back( new TrueFalseQuestion( "Pineapple belongs on pizza.", true ) );
    questions.push_back( new TrueFalseQuestion( "Salmon is a mammal.", false ) );
    questions.push_back( new FillInTheBlank("What is my name?", "Nick"));
    questions.push_back(new FillInTheBlank("What is 9+9 equal?", "18"));
    vector <string> options = { "Mario", "Luigi", "Peach", "Toad" };
    int correctAnswer = 1;
    questions.push_back(new MultipleChoiceQuestion("Which character wears a read hat with an 'M' on it?", options, correctAnswer));


  
}

Program::~Program()
{
    for ( auto& q : questions )
    {
        delete q;
    }
}

void Program::Run()
{
    int total_right = 0;

    for ( auto& q : questions )
    {
        bool result = q->AskQuestion();
        if ( result ) { total_right++; }
    }

    cout << endl << "RESULTS:" << endl;
    cout << total_right << " out of " << questions.size() << " correct" << endl;
}
