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
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->value = source.value;
	return *this;
}

/* ex02 */
Fixed Fixed::operator+(const Fixed &source) const
{
	return Fixed(this->toFloat() + source.toFloat());
}
Fixed Fixed::operator-(const Fixed &source) const
{
	return Fixed(this->toFloat() - source.toFloat());
}
Fixed Fixed::operator*(const Fixed &source) const
{
	return Fixed(this->toFloat() * source.toFloat());
}
Fixed Fixed::operator/(const Fixed &source) const
{
	return Fixed(this->toFloat() / source.toFloat());
}
bool Fixed::operator>(const Fixed &source) const
{
	return (this->toFloat() > source.toFloat());
}
bool Fixed::operator<(const Fixed &source) const
{
	return (this->toFloat() < source.toFloat());
}
bool Fixed::operator>=(const Fixed &source) const
{
	return (this->toFloat() >= source.toFloat());
}
bool Fixed::operator<=(const Fixed &source) const
{
	return (this->toFloat() <= source.toFloat());
}
bool Fixed::operator==(const Fixed &source) const
{
	return (this->toFloat() == source.toFloat());
}
bool Fixed::operator!=(const Fixed &source) const
{
	return (this->toFloat() != source.toFloat());
}
Fixed &Fixed::operator++()
{
	this->value += 1;
	return *this;
}
Fixed &Fixed::operator--()
{
	this->value -= 1;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(this->toFloat());
	this->value += 1;
	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(this->toFloat());
	this->value -= 1;
	return temp;
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}
/*end of ex02*/

/* ex00 */
void Fixed::SetRawBits(int const raw)
{
	value = raw;
}
int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}
/* end of ex00*/

/* ex01 */
float Fixed::toFloat(void) const
{
	return static_cast<float>(value) / (1 << bits);
}
int Fixed::toInt(void) const
{
	return value >> bits;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
/* end od ex01 */