#include "Fraction.h"

#include <istream>
#include <ostream>
using namespace std;

Fraction::Fraction()
{
	num = 1;
	denom = 1;
}

Fraction::Fraction(int num, int denom)
{
	this->num = num;
	this->denom = denom;
}

float Fraction::GetDecimal() const
{
	return float(num) / denom;
}

Fraction Fraction::CommonDenominatorize(const Fraction& other) const
{
	if (denom == other.denom)
	{
		return *this;
	}
	else
	{
		return Fraction(num * other.denom, denom * other.denom);
	}
}

// - STUDENT CODE ----------------------------------------------------------

ostream& operator<<(ostream& out, const Fraction& fraction)
{
	// TODO: Write the fraction in "n/d" format to the out stream.

	out << fraction.num << "/" << fraction.denom;
	return out;
}
istream& operator>>(istream& in, Fraction& fraction)
{
	// TODO: Use the stream to load in m_num and m_denom to the fraction.
	in >> fraction.num >> fraction.num;
	return in;
}
Fraction& Fraction::operator=(const Fraction& fraction)
{
	if (&fraction == this)
	{
		return *this;
	}
	this->num = fraction.num;
	this->denom = fraction.denom;
	return *this;
}
Fraction operator*(const Fraction& left, const Fraction& right)
{
	int newNumberator;
	int newDenom;
	newNumberator = left.num * right.num;
	newDenom = left.denom * right.denom;
	return Fraction(newNumberator, newDenom);
}
Fraction operator/(const Fraction& left, const Fraction& right)
{
	int newNumberator;
	int newDenom;
	newNumberator = left.num / right.num;
	newDenom = left.denom / right.denom;
	return Fraction(newNumberator, newDenom);
}
Fraction operator+(const Fraction& left, const Fraction& right)
{
	int newNum;
	int newDenom;
	if (left.denom == right.denom) {
		newNum = left.num + right.num;
		newDenom = left.denom;
	}
	else {
		Fraction adjustedLeft = left.CommonDenominatorize(right);
		Fraction adjustedRight = right.CommonDenominatorize(left);
		newNum = adjustedLeft.num + adjustedRight.num;
		newDenom = adjustedLeft.denom;
	}
	return Fraction(newNum, newDenom);
}






Fraction operator-(const Fraction& left, const Fraction& right)
{
	return Fraction(); // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator==(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator!=(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator<(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator>(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator<=(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}

bool operator>=(const Fraction& left, const Fraction& right)
{
	return false; // TEMPORARY PLACEHOLDER - REMOVE ME ONCE YOU IMPLEMENT THIS FUNCTION!
}
// -------------------------------------------------------------------------
