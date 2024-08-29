#include "Image.h"

#include "Colors.h"

#include <iostream>
#include <fstream>
using namespace std;

//! Attempts to load the filename given
void Image::Load( string new_filename )
{
    pixelrows.clear();
    ifstream input;
    string line;

    // TODO: Use `input`'s open function and pass in the `filename`.
    input.open(new_filename);


    // TODO: If `input.fail()` is true then display an error (couldn't find file) and return.
    if (input.fail()) {
        cout << "Unable to find the file!" << endl;
        return;
    }

    // TODO: Set the `filename` member variable to the `new_filename` parameter's value.
    filename = new_filename;

    // TODO: WHILE we are able to load a line from `input` to `line` using getline
    //       Within the loop, use `pixelrows`'s push_back function, passing in the `line` we read.
    
    while (getline(input, line)) {
        pixelrows.push_back(line);
    }



    cout << "Loading file \"" << filename << "\" successful." << endl;
}

//! Draws the rows/columns of pixels to the screen
void Image::Draw()
{
    cout << endl;

    // TODO: Use a for loop to iterate over all the rows within the `pixelrows` member vector.
    // TODO: Create an INTERNAL for loop that iterates over all the characters in the `pixelrows[row]` string.
    // TODO: Within the internal for loop, call the DrawPixel function, passing in the current pixel `pixelrows[row][col]`.
    // TODO: When the INTERNAL loop is over (but still inside the OUTER loop), use `cout << CLEAR << endl;` to end the line of pixels.

    for (int i=0; i<pixelrows.size(); i++)
        for (int j = 0; j < pixelrows.size(); j++) {
            DrawPixel(pixelrows[i][j]);
        }
    cout << CLEAR << endl;


}

//! Returns the filename member variable. const because we don't want it to be able to modify any class member variables.
string Image::GetFilename() const
{
    // TODO: Return the corresponding member variable.

    return filename; 
}
