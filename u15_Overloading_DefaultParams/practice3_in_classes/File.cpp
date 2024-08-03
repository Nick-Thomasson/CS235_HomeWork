#include "File.h"

#include <iostream>
#include <fstream>
using namespace std;


// - STUDENT CODE ----------------------------------------------------------
File::File()
{
  // TODO: Implement me!
}

File::File( string name )
{
  // TODO: Implement me!
}

File::File( string name, string ext )
{
  // TODO: Implement me!
}

File::File( const File& other )
{
  // TODO: Implement me!
}
// -------------------------------------------------------------------------

void File::CreateFile( string name, string ext /* ="txt" */, string text /*= "hello"*/ )
{
    this->name = name;
    this->ext = ext;

    string path = "fileout/" + name + "." + ext;
    cout << "Writing out file " << path << endl;

    // - STUDENT CODE ----------------------------------------------------------
    // -------------------------------------------------------------------------
}
