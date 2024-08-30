//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!
//   !! DON'T MODIFY THIS FILE !!
//   !!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "Colors.h"

#include <iostream>
using namespace std;

/* COLOR CODES:

| code value | execute            |
|------------|--------------------|
| ' '        | `cout << CLEAR;`   |
| 'K'        | `cout << BLACK;`   |
| 'R'        | `cout << RED;`     |
| 'G'        | `cout << GREEN;`   |
| 'Y'        | `cout << YELLOW;`  |
| 'B'        | `cout << BLUE;`    |
| 'M'        | `cout << MAGENTA;` |
| 'C'        | `cout << CYAN;`    |
| 'W'        | `cout << WHITE;`   |
*/

//! Testing the tooltip feature
void DrawPixel(char code)
{
    switch (code)
    {
    case ' ':
        cout << CLEAR;
        break;
    case 'K':
        cout << BLACK;
        break;
    case 'R':
        cout << RED;
        break;
    case 'G':
        cout << GREEN;
        break;
    case 'Y':
        cout << YELLOW;
        break;
    case 'B':
        cout << BLUE;
        break;
    case 'M':
        cout << MAGENTA;
        break;
    case 'C':
        cout << CYAN;
        break;
    case 'W':
        cout << WHITE;
        break;
    default:
        cout << CLEAR;
        break;
    }

    cout << " ";
}

