#include <iostream>
using namespace std;

#include "File.h"

int main()
{
    File fileA;

    File fileB( "fileb" );

    File fileC( "filec", "html" );

    File fileD( fileC );

    return 0;
}
