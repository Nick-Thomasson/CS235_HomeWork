#ifndef _FILE
#define _FILE

#include <string>
using namespace std;

class File
{
public:
    File();
    File( string name );
    File( string name, string ex );
    File( const File& other );

    void CreateFile( string name, string ext="txt", string text="hello" );

    private:
    string name;
    string ext;
};

#endif
