#ifndef _QUESTIONS
#define _QUESTIONS

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class IQuestion
{
public:
	IQuestion();
	IQuestion(string new_question);
	virtual ~IQuestion();

	virtual bool AskQuestion() = 0;
	virtual void DisplayQuestion();

protected:
	string question;

	friend void Tester();
};

class TrueFalseQuestion : public IQuestion
{
public:
	TrueFalseQuestion();
	TrueFalseQuestion(string new_question, bool new_answer);
	virtual ~TrueFalseQuestion();

	virtual bool AskQuestion();
	bool IsCorrect(bool guess);

protected:
	bool answer;

	friend void Tester();
};

// - STUDENT CODE ----------------------------------------------------------
class FillInTheBlank : public IQuestion {
public:
	FillInTheBlank();
	FillInTheBlank(string question, string answer);
	virtual ~FillInTheBlank();
	virtual bool AskQuestion();
	bool IsCorrect(string answer);
protected:
	string answer;
};



class MultipleChoiceQuestion : public IQuestion {
public:
	MultipleChoiceQuestion();
	MultipleChoiceQuestion(string question, vector <string> options, int guess);
	virtual ~MultipleChoiceQuestion();

	virtual bool AskQuestion();
	bool IsCorrect(int guess);

protected:
	vector<string> options;
	int correct;

};
// -------------------------------------------------------------------------

#endif
