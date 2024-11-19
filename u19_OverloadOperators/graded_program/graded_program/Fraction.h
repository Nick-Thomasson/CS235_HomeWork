#ifndef _FRACTION_H
#define _FRACTION_H

#include <fstream>
using namespace std;

class Fraction
{
private:
	int num;
	int denom;


public:
  Fraction();
  Fraction( int num, int denom );

  float GetDecimal() const;

  Fraction CommonDenominatorize( const Fraction& other ) const;

  // Operator overloading
  // Assignment operator
  Fraction& operator=( const Fraction& other );

  // Arithmetic operators
  friend Fraction operator+( const Fraction& left, const Fraction& right );
  friend Fraction operator-( const Fraction& left, const Fraction& right );
  friend Fraction operator*( const Fraction& left, const Fraction& right );
  friend Fraction operator/( const Fraction& left, const Fraction& right );

  // Relational operators
  friend bool operator==( const Fraction& left, const Fraction& right );
  friend bool operator!=( const Fraction& left, const Fraction& right );
  friend bool operator<=( const Fraction& left, const Fraction& right );
  friend bool operator>=( const Fraction& left, const Fraction& right );
  friend bool operator<( const Fraction& left, const Fraction& right );
  friend bool operator>( const Fraction& left, const Fraction& right );

  // Stream operators
  friend ostream& operator<<( ostream& out, const Fraction& fraction );
  friend istream& operator>>( istream& in, Fraction& fraction );

  friend class Tester;
};

#endif
