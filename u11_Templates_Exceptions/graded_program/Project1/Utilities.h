#ifndef _UTILITIES
#define _UTILITIES

#include "Models/Order.h"
#include "Models/PaymentMethod.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// - STUDENT CODE ----------------------------------------------------------
//! TODO: Replace these with a templated function

template <typename T>
void DisplayAll(vector<T> objects) {
	for (size_t i = 0; i < objects.size(); i++) {
		cout << i << ". ";
		objects[i].Display(); 
	}
}

/*
void DisplayAll( vector<Order> objects );

void DisplayAll( vector<PaymentMethod> objects );

void DisplayAll( vector<Product> objects ); */
// -------------------------------------------------------------------------


// - Helper functions -------------------------------------------------------//
int DisplayMenu(vector<string> options, bool zeroToReturn = true);
int GetValidInput(int min, int max);
void ClearScreen();
void DisplayHeader(string title);
void PressEnterToContinue();



#endif
