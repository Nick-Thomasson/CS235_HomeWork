#include "PaymentMethod.h"

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//! Default constructor
PaymentMethod::PaymentMethod()
{
}

//! Parameterized constructor
PaymentMethod::PaymentMethod( int new_last4, int new_exp_month, int new_exp_year )
{
    this->cc_last4 = new_last4;
    this->exp_month = new_exp_month;
    this->exp_year = new_exp_year;
}

int PaymentMethod::GetLast4() const
{
    return this->cc_last4;
}

//! Sends a charge to the credit card...
// ERROR CHECK: card must not be expired!
void PaymentMethod::Charge( float amount, int current_month, int current_year )
{
    bool valid_charge = false;
    if ( this->exp_year > current_year )
    {
        valid_charge = true;
    }
    else if ( this->exp_year == current_year && this->exp_month >= current_month )
    {
        valid_charge = true;
    }


    if ( valid_charge )
    {
        // Make fake receipt
        ofstream output( "receipt.txt", ios_base::app );
        output
            << "$" << amount
            << " charged to " << this->cc_last4
            << " on " << current_month << "/" << current_year << endl;
    }
    else
    {
        // - STUDENT CODE ----------------------------------------------------------
        // TODO: Throw exception!
        // -------------------------------------------------------------------------
    }
}

void PaymentMethod::Display()
{
    cout
        << setw( 10 ) << string( "#: " + to_string( this->cc_last4 ) )
        << setw( 20 ) << string( "EXPIRATION: " + to_string( this->exp_month ) + "/" + to_string( this->exp_year ) )
        << endl;
}

