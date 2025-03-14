#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) : value(source.value)
{
	std::cout << "Copy constructor called" << std::endl;
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
	return static_cast<float>(value) / (1 << bits);
}

int Fixed::toInt(void) const
{
	int res = value >> bits;
	return res;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}