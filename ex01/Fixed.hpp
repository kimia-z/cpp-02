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

	~Fixed();
	
	int getRawBits(void);
	void SetRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

/*
	*** Overload of "<<" ***
	**ReturnType operator<symbol>(parameters);**
*/
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif