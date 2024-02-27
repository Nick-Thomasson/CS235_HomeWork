// - INCLUDES ---------------------------------------------------------------//
#include <iostream>   // Library that contains `cout` commands
#include <string>     // Library that contains `string` types
#include <iomanip>    // Library for formatting; `setprecision`
using namespace std;  // Using the C++ STanDard libraries

#include "Functions.h"

// -- FUNCTION DEFINITION GOES HERE -------------------------------------------
 void DisplayMenu(){
	cout << "1. Add item: " << endl;
	cout << "2. Checkout: " << endl;
}

 void FormatUSD (float price){
cout << fixed << setprecision(2);
cout << "You entered the amount of $" << price << endl;
}

float GetTaxPercent(){
	return 9.61;}

float GetPricePlusTax(float original_price, float tax_percent){
return original_price + ( tax_percent/100 * original_price );
}

float GetNewPrice(){
	float price;
	cout << "Please enter the price of the item: $";
	cin >> price;
	return price;
}

int GetChoice(int min, int max){
    int choice;
    cout << "Please enter " << min << " or " << max << " ";
    cin >> choice;
    while (choice < min || choice > max) {
        cout << "Invalid number! Please enter again: ";
        cin >> choice; 
    }
    return choice; 
}

float StudentCode()
{
	float final_price = 0;
	float transaction_total = 0;
	bool running = true;
	float new_price;
	int choice;

	while (running == true){
		cout << "Current transaction amount: " << endl;
		FormatUSD(transaction_total);
		DisplayMenu();
		choice = GetChoice(1,2);
		if (choice == 1){
			new_price = GetNewPrice();
			transaction_total = new_price + transaction_total;	  
			}
		else{
			running = false;
			}

}

	cout << "RECEIPT" << endl;
	final_price = GetPricePlusTax(transaction_total, GetTaxPercent());
	FormatUSD(transaction_total);
	cout << "Tax rate:" << GetTaxPercent() << endl;
	cout << "After tax" << endl;
	FormatUSD(final_price);
	return final_price;

}
