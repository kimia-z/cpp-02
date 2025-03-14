#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << Fixed( 5.05f ) + Fixed( 2 ) << std::endl;
	std::cout << Fixed( 5.05f ) - Fixed( 2 ) << std::endl;
	std::cout << Fixed( 5.05f ) * Fixed( 2 ) << std::endl;
	std::cout << Fixed( 5.05f ) / Fixed( 2 ) << std::endl;
	std::cout << (Fixed( 5.05f ) > Fixed( 2 )) << std::endl; // 1
	std::cout << (Fixed( 5.05f ) < Fixed( 2 )) << std::endl; // 0
	std::cout << (Fixed( 5.05f ) >= Fixed( 2 )) << std::endl; // 1
	std::cout << (Fixed( 5.05f ) <= Fixed( 2 )) << std::endl; // 0
	std::cout << (Fixed( 5.05f ) == Fixed( 2 )) << std::endl; // 0
	std::cout << (Fixed( 5.05f ) != Fixed( 2 )) << std::endl; // 1
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}