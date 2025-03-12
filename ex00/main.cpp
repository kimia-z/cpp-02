#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	// a.SetRawBits(42);
	
	Fixed b(a); // copy constructor
	b.getRawBits();

	Fixed c;
	c = b; // copy assignment operator
	c.getRawBits();
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}