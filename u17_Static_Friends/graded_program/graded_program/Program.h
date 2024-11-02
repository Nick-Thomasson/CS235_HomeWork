#ifndef _PROGRAM
#define _PROGRAM

#include <string>
using namespace std;

class Program
{
public:
    void Run();
    void Menu_Main();
    void Menu_CreateOrder();
    void Menu_PrepNextOrder();
    void Menu_ReturnMeal();

private:
    int GetValidInput( int min, int max );
    void ClearScreen() const;
    void DisplayHeader( string title ) const;
    void PressEnterToContinue() const;
};

#endif
