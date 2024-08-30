# Setup project:
Create a new project in your IDE, put the project inside this folder.
From the project view, do "Add existing file" to add the .cpp file here.
Then you can build and run the program.


# Example program output:
    Enter price: $3.5
    Enter tax: %9.58
    Updated price: $3.8353


# Function:
Implement the `CalculatePricePlusTax` function below.
This function HAS input parameters so its parentheses ( ) will contain the following:
`float original_price`, and `float tax_percent`.
and it has a float output RETURN so its return type is `float`.

Within this function we need to calculate the following:
1. Tax as a decimal: take `tax_percent / 100` and store it in a float variable.
2. Add on price: take `original_price` and multiply it by the "tax as a decimal" amount and store it in a float variable.
3. New price: take `original_place` and add the "add on price".
Return the new price as the function result.


# main:
Within `main()`, set the `updated_price` variable to the result from calling the `GetPricePlusTax` function.
Afterwards the updated price will be displayed to the screen.


# Reference
Function definition, yes inputs, yes outputs:
```
RETURNTYPE FUNCTIONNAME( TYPE1 VARIABLE1, TYPE2 VARIABLE2 )
{
}
```
