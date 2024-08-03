#include "Utilities.h"

#include <cstdlib>
#include <ctime>
using namespace std;

int RollDie( int sides )
{
    return rand() % sides + 1;
}
