#include "QuestionFamily.h"

#include <iostream>
using namespace std;

/* QUESTION *************************************************************************/
IQuestion::IQuestion()
{
	this->question = "";
}

IQuestion::IQuestion(string new_question)
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

TrueFalseQuestion::TrueFalseQuestion(string new_question, bool new_answer)
	: IQuestion(new_question)
{
	this->answer = new_answer;
}

TrueFalseQuestion::~TrueFalseQuestion()
{
}

bool TrueFalseQuestion::AskQuestion()
{
	cout << endl << string(80, '-') << endl;
	cout << "True or false     - ";
	DisplayQuestion();

	int selection;
	cout << "1. TRUE \t 2. FALSE" << endl;
	cout << "Your answer: ";
	cin >> selection;

	bool result = IsCorrect(selection == 1);

	if (result)
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "Wrong!" << endl;
	}

	return result;
}

bool TrueFalseQuestion::IsCorrect(bool guess)
{
	return (guess == this->answer);
}

// - STUDENT CODE ----------------------------------------------------------
FillInTheBlank::FillInTheBlank() {
	this->question = "";
	this->answer = "";
}

FillInTheBlank::FillInTheBlank(string question, string answer) : IQuestion(question) {

	this->answer = answer;
}

FillInTheBlank::~FillInTheBlank()
{
}

bool FillInTheBlank::AskQuestion() {
	cout << endl << string(80, '-') << endl;
	cout << "Fill in the blank     - ";
	DisplayQuestion();
	string myAnswer;
	cin.ignore();
	getline(cin, myAnswer);
	bool result = IsCorrect(myAnswer);
	if (result)
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "Wrong!" << endl;
	}
	return result;
}

bool FillInTheBlank::IsCorrect(string guess) {
	return (guess == this->answer); 
}


// -------------------------------------------------------------------------

MultipleChoiceQuestion::MultipleChoiceQuestion()
{
}

MultipleChoiceQuestion::MultipleChoiceQuestion(string question, vector<string> options, int guess) : IQuestion(question), options(options), correct(correct)
{
}

MultipleChoiceQuestion::~MultipleChoiceQuestion()
{
}

bool MultipleChoiceQuestion::AskQuestion() {
	cout << endl << string(80, '-') << endl;
	cout << "Multiple Choice Question - ";
	DisplayQuestion(); 

	for (size_t i = 0; i < options.size(); i++) {
		cout << i + 1 << ". " << options[i] << endl;
	}

	int selection;
	cout << "Your answer: ";
	cin >> selection;

	bool result = IsCorrect(selection - 1);
	if (result) {
		cout << "Correct!!!!" << endl;
	}
	else {
		cout << "Wrong!!!!" << endl;
	}
	return result;
}

bool MultipleChoiceQuestion::IsCorrect(int guess) {
	return (guess == correct);
}
