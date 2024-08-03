# Templates & Exceptions graded lab

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
Automated tests passing:
```
[PASS] Check Order::ChangeStatus processing->shipped
[PASS] Check Order::ChangeStatus shipped->delivered
[PASS] Check Order::ChangeStatus processing->delivered
[PASS] Check PaymentMethod::Charge for valid date
[PASS] Check PaymentMethod::Charge for invalid date
```

Order update fail:
```
--------------------------------------------------------------------------------
ORDERS MENU
--------------------------------------------------------------------------------
0. ID: 100   STATUS: PROCESSING  PRODUCTS: 0. [Radish Seeds, $3.48] 1. [Beet Seeds, $3.75]
1. ID: 110   STATUS: DELIVERED   PRODUCTS: 0. [USB Type C, $7.99]
2. ID: 120   STATUS: SHIPPED     PRODUCTS: 0. [DigiCam, $49.99]
3. ID: 130   STATUS: UNKNOWN     PRODUCTS: 0. [Ketchup, $5.55]

0. Change ORDER to SHIPPED status
1. Change ORDER to DELIVERED status
(0-1): 1

Enter ORDER INDEX #: 0

EXCEPTION: Cannot go from status PROCESSING to DELIVERED!
Order 0 not updated.
```

Charge card fail:
```
--------------------------------------------------------------------------------
PAYMENT MENU
--------------------------------------------------------------------------------
0. #: 1234   EXPIRATION: 11/1995
1. #: 5678   EXPIRATION: 8/1994
2. #: 1337   EXPIRATION: 3/1996

CURRENT DATE: 10/1995

How much do you want to charge? $1
To which card? #: 1

EXCEPTION: Card #5678 is expired!
Card 5678 not charged.
```



## Instructions

Most of this program is already completed but you will need to make modifications in order to clean up some code and to add in exception handling.


### DisplayAll templated function
Un Utilities.h you'll see the declaration for three `DisplayAll` functions. One is for `Order` objects, one for `PaymentMethod` objects, and another for `Product` objects. The definitions for these functions are in Utilities.cpp.

Copy one of those function definitions and paste it into Utiltiies.h (remember that templated functions' definitions need to go in the .h file). After doing this you can erase or comment out the old function definitions in Utilities.cpp.

Set up the `DisplayAll` definition within the Utilities.h file to be a **templated function**, taking in a vector of any object type `T`.

Afterwards build and run the program to make sure it still works.


### `void Order::ChangeStatus( OrderStatus new_status )`
Within Models/Order.cpp in the ChangeStatus function it checks to see if the update is valid - an order can go from PROCESSING to SHIPPED and SHIPPED to DELIVERED but it can't skip steps.

If the change is not valid, then throw an `invalid_argument` exception. Add a message that specifies what exactly the problem was, going from `this->status` to `new_status` was invalid. (You can use the `OrderStatusString` function to pass in an order status and it will return a string that can be used in a cout statement.)


### `void PaymentMethod::Charge( float amount, int current_month, int current_year )`
Within Models/PaymentMethod.cpp in the Charge function it will check to see if the card is expired before trying to do a "transaction".

If the card is expired then throw a `runtime_error`. Give a detailed error message such as the card is expired. You can use the `to_string` function to change any integesr to strings.


### `void Program::Menu_Orders()`
Within Program.cpp the Menu_Orders function displays a list of orders and gives the user the option to update an order's status. Calling the `ChangeStatus` function is the risky function here.

Wrap the risky function in a try/catch statement, listen for the appropriate exception type. If the exception is detected, display the error message.


### `void Program::Menu_Payment()`
Within Program.cpp the Menu_Payment function displays a list of cards. The user can select which card to charge and give an amount.

Wrap the risky function in a try/catch statement, listen for the appropriate exception type. If the exception is detected, display the error message.
