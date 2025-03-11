#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::SetRawBits(int const raw)
{
	value = raw;
}

int Fixed::getRawBits(void)
{
	return value;
}