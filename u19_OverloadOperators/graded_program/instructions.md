# Operator overloading graded lab

## Setup
- In your IDE create a new project within the unit folder and sub-program folder.
- Use the "Add existing item" feature to add all the .cpp files (and any .h files if present) to your project.
- Make sure to BUILD AND RUN IN DEBUG MODE.
- If you're building from a terminal, use: `g++ *.cpp` or `g++ *.cpp *.h`.
- If you're running from a terminal, use: `./a.out` (Linux/Mac) or `./a.exe` (Windows).


## Example program output
```
[PASS] Test 1, Fraction frac... frac.m_num=1, frac.m_denom=1
[PASS] Test 2, Fraction frac( otherFrac ) frac.m_num=2, frac.m_denom=3
[PASS] Test 3, Fraction frac( otherFrac ) frac.m_num=4, frac.m_denom=5
[PASS] Test 4, Fraction 1/2, GetDecimal() = 0.5
[PASS] Test 5, Fraction 3/4, GetDecimal() = 0.75
[PASS] Test 6, Fraction 1/2, CommonDenominatorize(1/3) = 3/6
[PASS] Test 7, Fraction 2/3, CommonDenominatorize(1/5) = 10/15
[PASS] Test 8, Fraction 2/4, CommonDenominatorize(1/4) = 2/4
[PASS] Test 9, Fraction frac = other ...  frac.m_num=2, frac.m_denom=3
[PASS] Test 10, Fraction frac = other ...  frac.m_num=3, frac.m_denom=4
[PASS] Test 11, 1/2 * 2/3 = 2/6
[PASS] Test 12, 5/7 * 3/11 = 15/77
[PASS] Test 13, 1/2 / 2/3 = 3/4
[PASS] Test 14, 5/7 / 3/11 = 55/21
[PASS] Test 15, 1/2 + 1/2 = 2/2
[PASS] Test 16, 1/5 + 2/5 = 3/5
[PASS] Test 17, 1/2 + 1/3 = 5/6
[PASS] Test 18, 2/3 + 5/7 = 29/21
[PASS] Test 19, 1/2 - 1/2 = 0/2
[PASS] Test 20, 3/5 - 2/5 = 1/5
[PASS] Test 21, 1/2 - 1/3 = 1/6
[PASS] Test 22, 2/3 - 5/7 = -1/21
[PASS] Test 23, 1/2 == 1/2? true
[PASS] Test 24, 1/2 == 2/3? false
[PASS] Test 25, 1/2 == 2/4? true
[PASS] Test 26, 1/2 == 3/4? false
[PASS] Test 27, 1/2 != 1/2? false
[PASS] Test 28, 1/2 != 2/3? true
[PASS] Test 29, 1/2 != 2/4? false
[PASS] Test 30, 1/2 != 3/4? true
[PASS] Test 31, 2/6 < 1/3? false
[PASS] Test 32, 2/6 < 2/3? true
[PASS] Test 33, 6/6 < 2/3? false
[PASS] Test 34, 2/6 <= 1/2? true
[PASS] Test 35, 2/6 <= 2/3? true
[PASS] Test 36, 6/6 <= 2/3? false
[PASS] Test 37, 2/6 > 1/3? false
[PASS] Test 38, 2/6 > 2/3? false
[PASS] Test 39, 6/6 > 2/3? true
[PASS] Test 40, 2/6 >= 1/3? true
[PASS] Test 41, 2/6 >= 2/3? false
[PASS] Test 42, 6/6 >= 2/3? true
[PASS] Test 43, frac.m_num=1, frac.m_denom=2 out << ... "1/2"
[PASS] Test 44, frac.m_num=3, frac.m_denom=4 out << ... "3/4"
[PASS] Test 45, 1 and 2, in >> frac ... now m_num=1, frac.m_denom=2
[PASS] Test 46, 3 and 4, in >> frac ... now m_num=3, frac.m_denom=4
```

## Instructions
Here you will implement the functionality for the `Fraction` class in Fraction.cpp where we have to tell our program how comparing two fractions work, how to perform arithmetic on fractions, what the assignment operator does, and what the stream operators do.


### `ostream& operator<<( ostream& out, const Fraction& fraction )`
Output `fraction.num` then "/" then `fraction.denom` out to the `out` parameter.


### `istream& operator>>( istream& in, Fraction& fraction )`
Stream the input into `fraction.num` and `fraction.denom`.


### `Fraction& Fraction::operator=( const Fraction& other )`
Copy the value of `other.num` into the member variable `this->num`, and same for the `denom`.


### `Fraction operator*( const Fraction& left, const Fraction& right )`
The result of multiplying two fractions is to multiply the numerators across and the denominators across:

```
  n1   n2     n1*n2
  -- * --  =  -----
  d1   d2     d1*d2
```

Create a new Fraction object and set its `num` and `denom` based on this operator and return the fraction.


### `Fraction operator/( const Fraction& left, const Fraction& right )`
The result of multiplying two fractions is to "cross multiply":

```
  n1   n2     n1*d2
  -- / --  =  -----
  d1   d2     d1*n2
```

Create a new Fraction object and set its `num` and `denom` based on this operator and return the fraction.


### `Fraction operator+( const Fraction& left, const Fraction& right )`
If the denominators of the `left` and `right` fractions match, then the math is:

```
  n1   n2     n1+n2
  -- + --  =  -----
  d1   d2       d1
```

However, if the denominators are different you need a common denominator first. Use the `CommonDenominatorize` function to create two new fractions...

```
Fraction cright = right.CommonDenominatorize( left );
```

Then do the math operation as above.


### `Fraction operator-( const Fraction& left, const Fraction& right )`
Similar math as with addition, the denominators need to be the same before you do the subtraction.

```
  n1   n2     n1-n2
  -- - --  =  -----
  d1   d2       d1
```


### `bool operator==( const Fraction& left, const Fraction& right )` and other relational operators
For the relational operators you need to get common denominators and then compare numerators. Once you have the common denominators, you can check if they are equal with `cleft.num == cright.num`.

You'll do the same for the other relational operators.
