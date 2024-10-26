#include "File.h"

#include <iostream>
#include <fstream>
using namespace std;


// - STUDENT CODE ----------------------------------------------------------
File::File()
{
    
}

File::File( string name )
{
    CreateFile(name);
}

File::File( string name, string ext )
{
    CreateFile(name, ext);
}

File::File( const File& other )
{
    CreateFile(other.name, other.ext, "Copied file");
}
// -------------------------------------------------------------------------

void File::CreateFile( string name, string ext /* ="txt" */, string text /*= "hello"*/ )
{
    this->name = name;
    this->ext = ext;

    string path = "fileout/" + name + "." + ext;
    cout << "Writing out file " << path << endl;

    // - STUDENT CODE ----------------------------------------------------------
    ofstream output;
    output.open(path);
    output << text << endl;
    output.close();
    // -------------------------------------------------------------------------
}
