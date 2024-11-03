# Graded assignment: Static and friends

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
--------------------------------------------------------------------------------
Restaurant manager
* Total orders: 0
* Total meals:  0

0. Exit
1. Create order
2. Prep next order
3. Return meal

Choice: 1

CREATE ORDER
1. breakfast combo
2. soup of the day
3. lunch combo

Choice: 1
New order for breakfast combo...


Press a ENTER to continue

--------------------------------------------------------------------------------
Restaurant manager
* Total orders: 1
* Total meals:  0

0. Exit
1. Create order
2. Prep next order
3. Return meal

Choice: 2

Prep meal breakfast combo...
--------------------------------------------------------------------------------
Restaurant manager
* Total orders: 0
* Total meals:  1

0. Exit
1. Create order
2. Prep next order
3. Return meal

Choice: 3

Meal returned:
breakfast combo: eggs pancakes bacon coffee


Press a ENTER to continue
```

## Instructions
In the Restaurant.h file there is an `Order` class and a `Meal` class declared. In both of these class declarations, mark RestaurantManager as a friend class.

Back in the RestaurantManager class it has functions CreateOrder, ReturnMeal, PrepNextOrder, and Display. It also has a private function GetIngredients. It also has two static variables: `list<Order> orders` and `list<Meal> meals`.

Within RestaurantManager.cpp, initialize the static member variables `orders` and `meals`.

You'll implement the manager's functions as well.
5
### `void RestaurantManager::CreateOrder( string meal_name )`
Within this function display a message that a new order is created and the meal name.
Create a new `Order` object and set its `meal_name`. Then, push it into the back of the `orders` list.

### `void RestaurantManager::PrepNextOrder()`
If there are 0 items in the `orders` list then display an error message - there are no meals to prep.

If there are items in the `orders` list then create a new `Meal` object.

You're going to work with the front-most item in the orders list.

Set its meal name and foods vector (call the `GetIngredients` function, passing in the order's meal name).

Push the new meal into the `meals` list, and pop the order from the `orders`.


### `Meal RestaurantManager::ReturnMeal()`
If the `meals` list is empty then throw a `runtime_error` with an error message - no meals ready.

Otherwise, create a Meal object and retrieve the front-most object from the `meals` list. Then pop the front-most item `meals` and return the meal you grabbed.



## Reference
Push a new item into a list:
```
LISTNAME.push_front( VALUE );
LISTNAME.push_back( VALUE );
```

Access an item from a list:
```
LISTNAME.front()
LISTNAME.back()
```

Remove an item from a list:
```
LISTNAME.pop_front();
LISTNAME.pop_back();
```
