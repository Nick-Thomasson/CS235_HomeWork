# Templates & Exceptions practice 2: Structs

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
Ballpoint pen	 $2.29
Burrito	 $1.99, 400 calories
Kiki's Delivery Service	 $19.99, rated G
```

## Instructions
In this program there are three types of product classes declared: `GenericProduct`, `FoodProduct`, and `MovieProduct`. They all have a `name` and `price` as well as a `Display()` function, though the food product also has `calories` and the movie product also has a `rating`.

Further down in the code is a `ShoppingCart` class that is not using templates currently. It has to have three separate vectors, one for each type of product it can store. It also has three versions of the `AddProduct` function, and in the `DisplayProducts` function it has to have three separate for loops.

Update the `ShoppingCart` class so that it uses templates:
- Only need one `vector<T>` instead of three to store all products.
- Only need one `void AddProduct( T new_product )` to add any type of product to the cart.
- Only need one loop within the `DisplayProducts` function to call Display for any type of product.


main() doesn't need to be updated - we've updated the code so it's cleaner but the functionality all remains the same as far as main() is concerned.


## Reference
Templated struct declaration:
```
template <typename T>
struct NAME
{
    string var1;
    float var2;
    T var3;       // Templated member variable

    void FUNCTION( T param ) // Templated parameter
    {
        T thingy; // Templated local variable
    }
};
```
