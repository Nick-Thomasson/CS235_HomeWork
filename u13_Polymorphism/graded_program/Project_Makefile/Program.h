#ifndef _PROGRAM
#define _PROGRAM

#include "QuestionFamily.h"

#include <vector>
using namespace std;

class Program
{
    public:
    Program();
    ~Program();

    void Run();

    private:
    vector<IQuestion*> questions;
};

#endif
