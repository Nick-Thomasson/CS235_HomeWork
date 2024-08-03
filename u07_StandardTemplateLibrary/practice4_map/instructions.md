# STL Practice 4: map object

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
MAP PROGRAM

Declare a map with string keys and float values...

Set up 3 product names and their prices in the map...

Iterating over the map to display each element's key and value...
Item: burrito, Price: $1.29
Item: quesadilla, Price: $2.36
Item: taco, Price: $1.29

Enter a food: burrito
The price of this item is... $1.29

THE END
```


## Instructions

For this program we will be using the STL map.

1. Near the top of the program declare a map with string keys and float values, the variable name should be `product_prices`.

2. Afterwards, hard-code 3 products, use the product name as the KEY and the price of the product as a VALUE. (e.g., "burrito" and 1.29).

3. Use a for loop to iterate over all of the elements of `product_prices`, display each element's key and value.

4. After the user has entered a food, display the price of the item by accessing the element of `product_prices` with `choice` as the key.


## Reference
map documentation: https://cplusplus.com/reference/map/map/

Declare a map with TYPE1 key and TYPE2 value:
```
map<TYPE1, TYPE2> MAPNAME;
```

Add a (key, value) pair to the map:
```
MAPNAME[KEY] = VALUE;
```

Get the amount of items in the map:
```
MAPNAME.size()
```

Iterate over all of the pairs in a map:
```
for ( auto item : product_prices )
{
    // KEY: item.first
    // VALUE: item.second
}
```

Get the value of an item from a map given some key:
```
MAPNAME[ KEY ]
```
