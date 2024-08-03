#ifndef _PROGRAM
#define _PROGRAM

#include "Models/Order.h"
#include "Models/PaymentMethod.h"
#include "Models/Product.h"
#include "Models/Review.h"

#include <vector>
using namespace std;

class Program
{
public:
    void Setup();
    void Run();

    void Menu_Main();
    void Menu_Orders();
    void Menu_Payment();


private:
    vector<Order> all_orders;
    vector<PaymentMethod> all_cards;
    int today_year, today_month;
};

#endif
