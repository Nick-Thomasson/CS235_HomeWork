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

    input.close();

    cout << "Loading file \"" << filename << "\" successful." << endl;
}

//! Draws the rows/columns of pixels to the screen
void Image::Draw()
{
    cout << endl;

    // Iterate over all the rows within the `pixelrows` member vector
    for (int i = 0; i < pixelrows.size(); i++) {
        // Iterate over all the characters in the `pixelrows[i]` string
        for (int j = 0; j < pixelrows[i].size(); j++) {
            // Draw the current pixel
            DrawPixel(pixelrows[i][j]);
        }
        // End the line of pixels and clear formatting for the next line
        cout << CLEAR << endl;
    }
}


//! Returns the filename member variable. const because we don't want it to be able to modify any class member variables.
string Image::GetFilename() const
{
    // TODO: Return the corresponding member variable.

    return filename; 
}
