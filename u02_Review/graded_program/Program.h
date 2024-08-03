//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef _PROGRAM
#define _PROGRAM

#include "Image.h"

class Program
{
    public:
    void Menu_Main();
    void Menu_LoadImage();
    void Menu_DrawImage();

    int GetValidInput( int min, int max );
    void ClearScreen() const;
    void DisplayHeader( string title ) const;
    void PressEnterToContinue() const;

    private:
    Image image;
};

#endif
