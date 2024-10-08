#include "Program.h"
#include "Utilities.h"

#include <iostream>
#include <iomanip>
using namespace std;

void Program::Setup()
{
    cout << left;
    // Create payment methods to work with
    all_cards.push_back( PaymentMethod( 1234, 11, 1995 ) );
    all_cards.push_back( PaymentMethod( 5678,  8,  1994 ) );
    all_cards.push_back( PaymentMethod( 1337,  3, 1996 ) );

    // Create orders to work with
    all_orders.push_back( Order( 100, { Product( "Radish Seeds", 3.48 ), Product( "Beet Seeds", 3.75 ) }, OrderStatus::PROCESSING ) );
    all_orders.push_back( Order( 110, { Product( "USB Type C", 7.99 ) }, OrderStatus::DELIVERED ) );
    all_orders.push_back( Order( 120, { Product( "DigiCam", 49.99 ) }, OrderStatus::SHIPPED ) );
    all_orders.push_back( Order( 130, { Product( "Ketchup", 5.55 ) }, OrderStatus::UNKNOWN ) );

    // Mock date
    today_month = 10;
    today_year = 1995;
}

void Program::Run()
{
    Setup();
    Menu_Main();
}

void Program::Menu_Main()
{
    DisplayHeader( "MAIN MENU" );
    int selection = DisplayMenu(
    {
        "Update ORDERS",
        "Make PAYMENT"
    } );

    switch( selection )
    {
    case 0: return;               break; // quit
    case 1: Menu_Orders();        break;
    case 2: Menu_Payment();       break;
    }
}
void Program::Menu_Orders()
{
    DisplayHeader("ORDERS MENU");
    DisplayAll(all_orders);
    cout << endl;

    int selection = DisplayMenu(
        {
            "Change ORDER to SHIPPED status",
            "Change ORDER to DELIVERED status"
        }, false);

    OrderStatus status;

    switch (selection)
    {
    case 0: status = OrderStatus::SHIPPED; break;
    case 1: status = OrderStatus::DELIVERED; break;
    default:
        cout << "Invalid selection." << endl;
        return;
    }
    cout << endl << "Enter ORDER INDEX #: ";
    int order_index = GetValidInput(0, all_orders.size() - 1);

    try
    {
        all_orders[order_index].ChangeStatus(status);
        cout << endl << "Order " << order_index << " updated successfully." << endl << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Exception is: " << e.what() << endl;
        cout << "Order number: " << order_index << " not updated." << endl << endl;
    }

    DisplayAll(all_orders);
}


void Program::Menu_Payment()
{
    DisplayHeader( "PAYMENT MENU" );
    DisplayAll( all_cards );
    cout << endl;
    cout << "CURRENT DATE: " << this->today_month << "/" << today_year << endl << endl;

    float amount;
    cout << "How much do you want to charge? $";
    cin >> amount;

    int card_index;
    cout << "To which card? #: ";
    cin >> card_index;


    // - STUDENT CODE ----------------------------------------------------------
    // TODO: Risky function call!!
    try {
        all_cards[card_index].Charge(amount, today_month, today_year);
        cout << endl << "Charge to card " << all_cards[card_index].GetLast4() << " successfully." << endl << endl;
    }
    catch (const runtime_error& e)
    {
        cout << "EXCEPTION: " << e.what() << endl;
        cout << "Card " << all_cards[card_index].GetLast4() << " not charged." << endl << endl;
    }
    // -------------------------------------------------------------------------
}


