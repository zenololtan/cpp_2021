/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:55 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/02 15:52:41 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed&		Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called." << std::endl;
	_fixed_point = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const int input)
{
	_fixed_point = input << _frac_bits;
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float input)
{
	_fixed_point = roundf(input * (1 << _frac_bits));
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

void		Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}

int		Fixed::getRawBits() const
{
	return _fixed_point;
}

float		Fixed::toFloat() const
{
	float	out;

	out = _fixed_point >> _frac_bits;
	out += (float)(_fixed_point & 0xFF) / (1 << _frac_bits);
	return out;
}

int		Fixed::toInt() const
{
	float	out;

	out = _fixed_point >> _frac_bits;
	return out;
}

