/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:55 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/26 18:59:27 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw_bits(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int input)
{
	_raw_bits = input << _frac_bits;
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float input)
{
	_raw_bits = roundf(input * (1 << _frac_bits));
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Fixed&		Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called." << std::endl;
	if (this != &copy)
		_raw_bits = copy.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

void		Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}

int		Fixed::getRawBits() const
{
	return _raw_bits;
}

float		Fixed::toFloat() const
{
	float	out;

	out = _raw_bits >> _frac_bits;
	out += (float)(_raw_bits & 0xFF) / (1 << _frac_bits);
	return out;
}

int		Fixed::toInt() const
{
	float	out;

	out = _raw_bits >> _frac_bits;
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

