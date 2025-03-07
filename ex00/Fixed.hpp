#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int fix;
	static const int bits;
public:
	Fixed(/* args */);
	~Fixed();
	int getRawBits(void);
	void SetRawBits(int const raw);
};


#endif