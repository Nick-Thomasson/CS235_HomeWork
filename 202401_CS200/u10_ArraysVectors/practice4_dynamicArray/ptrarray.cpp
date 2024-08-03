#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a size_t variable named total_classes
    size_t total_classes;  

    // Ask the user how many classes they have. Store their answer in total_classes.
    cout << "How many classes do you have? ";
    cin >> total_classes;

    // Use a pointer to allocate space for a new dynamic array of strings.
    string* my_classes = new string[total_classes];

    cout << "Getting input:" << endl;


    // Get user input and store it in the array at my_classes[i]
    // Use a for loop from i = 0 to total_classes
    for (size_t i = 0; i < total_classes; i++) {
        cout << "Enter name for class #" << i << ": ";
        cin >> my_classes[i];  
    }

    cout << endl << "Resulting array:" << endl;

    // Use a for loop from i = 0 to total_classes
    for (size_t i = 0; i < total_classes; i++) {
        cout << "Class #" << i << ": " << my_classes[i] << endl;  // Display the index and element
    }

    delete[] my_classes;  

    return 0;
}
