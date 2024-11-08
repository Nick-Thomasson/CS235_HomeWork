# Anonymous functions graded lab

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
MAIN MENU
--------------------------------------------------------------------------------
0. SAVE AND QUIT
1. Add new restaurant
2. View all restaurants
3. Search restaurants by name
4. Search restaurants by city
5. Search restaurants by state
6. Search restaurants by zipcode

>> 4



Enter search term: Lenexa
#  NAME                          STREET                   CITY           STATE   ZIP
--------------------------------------------------------------------------------
0  Hawaiian Bros                 16179 W 87th St          Lenexa         KS      66219
1  Black Dog Coffeehouse         12815 W 87th St Pkwy     Lenexa         KS      66215
```

## Instructions
For this program you will be working within the RestaurantManager.cpp file, implementing the three search functions using anonymous functions within.

The Restaurant object has the following functions you will be using:
- `GetCity()`
- `GetState()`
- `GetZipcode()`

And the RestaurantManager has a vector `m_restaurants` which stores all of the Restaurant objects.


I've already implemented the `FindByName` function without an anonymous function. Your versions will be similar but you'll implement an anonymous function in each one.


### `vector<Restaurant> RestaurantManager::FindByCity(string city)`
For this one use the **no capture** clause and write in two parameters - the vector of Restaurant objects and the string search term (city). It will have a vector of Restaurants as its return type.

Within the function body, create a vector of Restaurants to store your `matches`. Iterate through all of the items in the restaurants vector and if a match is found (if the city matches) then push the match into your `matches` vector. Return your matches vector at the end.

Don't forget that at the end of the anonymous function you'll need to pass in arguments - in this case, `m_restaurants` and `city`.

e.g.:

```
vector<Restaurant> RestaurantManager::FindByCity(string city)
{
    vector<Restaurant> matches;
    
    matches = [CAPTURE](PARAMETERS) -> RETURNTYPE {
        // FUNCTION BODY
    }( ARGUMENTS );

	return matches;
}
```


### `vector<Restaurant> RestaurantManager::FindByState(string state)`
For this one use the **capture by-value** clause. You won't need parameters or arguments for this version. Same sort of function body here except you're comparing the State instead of the City.

e.g.:

```
vector<Restaurant> RestaurantManager::FindByState(string state)
{
    vector<Restaurant> matches;

    matches = [CAPTURE]() -> RETURNTYPE {
        // FUNCTION BODY
    }();

	return matches;
}
```



### `vector<Restaurant> RestaurantManager::FindByZipcode(int zipcode)`
For this one use the **capture by-reference** clause. You once again won't need any parameters or arguments for this version. Look for matching Zipcode.

e.g.:

```
vector<Restaurant> RestaurantManager::FindByZipcode(int zipcode)
{
    vector<Restaurant> matches;

    matches = [CAPTURE]() -> RETURNTYPE {
        // FUNCTION BODY
    }();

	return matches;
}
```


## Reference
Anonymous function form:
```
[CAPTURE](PARAMETERS) -> RETURNTYPE {
    // FUNCTION BODY
}( ARGUMENTS );
```

Capture types:
- `[]` - No capture; don't pull any variables from surrounding scope.
- `[=]` - Capture in-scope variables by-value.
- `[VAR]` - Capture VAR by-value.
- `[&]` - Capture in-scope variables by-reference.
- `[&VAR]` - Capture VAR by-reference.
