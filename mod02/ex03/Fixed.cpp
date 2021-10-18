/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:55 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/18 23:21:07 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw_bits(0){}

Fixed::~Fixed(){}

Fixed&		Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		_raw_bits = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const int input)
{
	_raw_bits = input << _frac_bits;
}

Fixed::Fixed(const float input)
{
	_raw_bits = roundf(input * (1 << _frac_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
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

bool		Fixed::operator>(const Fixed &num) const
{
	if (_raw_bits > num.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator<(const Fixed &num) const
{
	if (_raw_bits < num.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator>=(const Fixed &num) const
{
	if (_raw_bits >= num.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator<=(const Fixed &num) const
{
	if (_raw_bits <= num.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator==(const Fixed &num) const
{
	if (_raw_bits == num.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator!=(const Fixed &num) const
{
	if (_raw_bits != num.getRawBits())
		return true;
	else
		return false;
}

Fixed		Fixed::operator+(const Fixed &num) const
{
	Fixed	cpy;
	cpy._raw_bits = _raw_bits + num.getRawBits();
	return cpy;
}

Fixed		Fixed::operator-(const Fixed &num) const
{
	Fixed	cpy;
	cpy._raw_bits = _raw_bits - num.getRawBits();
	return cpy;
}

Fixed		Fixed::operator/(const Fixed &num) const
{
	Fixed	cpy;
	cpy._raw_bits = _raw_bits / num.toFloat();
	return cpy;
}

Fixed		Fixed::operator*(const Fixed &num) const
{
	Fixed	cpy;
	cpy._raw_bits = _raw_bits * num.toFloat();
	return cpy;
}

Fixed&		Fixed::operator++()
{
	_raw_bits += 1 << _frac_bits;
	return *this;
}

Fixed&		Fixed::operator--()
{
	_raw_bits -= 1 << _frac_bits;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed cpy(*this);
	cpy._raw_bits += 1 << _frac_bits;
	return cpy;
}

Fixed		Fixed::operator--(int)
{
	Fixed cpy(*this);
	_raw_bits -= 1 << _frac_bits;
	return cpy;
}

Fixed&  	Fixed::min(Fixed &num_a, Fixed &num_b)
{
	if (num_a._raw_bits < num_b._raw_bits)
		return num_a;
	return num_b;
}

const Fixed&  Fixed::min(const Fixed &num_a, const Fixed &num_b)
{
	if (num_a._raw_bits < num_b._raw_bits)
		return num_a;
	return num_b;
}

Fixed&  	Fixed::max(Fixed &num_a, Fixed &num_b)
{
	if (num_a._raw_bits > num_b._raw_bits)
		return num_a;
	return num_b;
}

const Fixed&  Fixed::max(const Fixed &num_a, const Fixed &num_b)
{
	if (num_a._raw_bits > num_b._raw_bits)
		return num_a;
	return num_b;
}	
