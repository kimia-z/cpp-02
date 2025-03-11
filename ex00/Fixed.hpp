#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	~Fixed();
	int getRawBits(void);
	void SetRawBits(int const raw);
};


#endif