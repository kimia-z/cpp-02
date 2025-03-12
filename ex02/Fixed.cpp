#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::Fixed(const int number) : value(number << bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) : value(roundf(number*(1 << bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->value = source.value;
	return *this;
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
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

float Fixed::toFloat(void) const
{
	float res = value / (1 << bits);
	return res;
}

int Fixed::toInt(void) const
{
	int res = value >> bits;
	return res;
}