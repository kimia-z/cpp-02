#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &source);
	Fixed(const int number);
	Fixed(const float number);

	Fixed &operator=(const Fixed &source);

	/* Comparison */
	bool operator>(const Fixed &source) const;
	bool operator<(const Fixed &source) const;
	bool operator>=(const Fixed &source) const;
	bool operator<=(const Fixed &source) const;
	bool operator==(const Fixed &source) const;
	bool operator!=(const Fixed &source) const;

	/* Arithmetic */
	Fixed operator+(const Fixed &source) const;
	Fixed operator-(const Fixed &source) const;
	Fixed operator*(const Fixed &source) const;
	Fixed operator/(const Fixed &source) const;

	/* Increment/decrement */
	Fixed operator++(int); // a++ return previous one
	Fixed operator--(int);
	Fixed &operator++(); // ++a return modified one
	Fixed &operator--(); 

	~Fixed();
	
	int getRawBits(void);
	void SetRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	/* ex02 */
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

/*
	*** Overload of "<<" ***
	**ReturnType operator<symbol>(parameters);**
*/
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif