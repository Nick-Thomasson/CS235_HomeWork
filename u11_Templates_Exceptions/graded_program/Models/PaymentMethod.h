#ifndef _PaymentMethod_Header
#define _PaymentMethod_Header

#include <iostream>
#include <vector>
#include <string>

//! A single payment method, including the last 4 digits of a card
class PaymentMethod
{
public:
    PaymentMethod();
    PaymentMethod( int new_last4, int new_exp_month, int new_exp_year );
    void Charge( float amount, int current_month, int current_year );
    void Display();
    int GetLast4() const;

private:
    //! Last 4 digits of the card
    int cc_last4{-1};
    //! Expiration month
    int exp_month{-1};
    //! Expiration year
    int exp_year{-1};
};

#endif
