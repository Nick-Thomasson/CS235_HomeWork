#ifndef _IMAGE
#define _IMAGE

#include <string>
#include <vector>
using namespace std;

class Image
{
    public:
    void Load( string new_filename );
    void Draw();
    string GetFilename() const;

    private:
    // TODO: Add a vector of strings named `pixelrows`
        vector <string> pixelrows;


    // TODO: Add a string named `filename`
        string filename;

};

#endif
