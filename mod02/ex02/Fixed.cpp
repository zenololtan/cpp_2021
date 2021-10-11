/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:55 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/11 21:43:40 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw_bits(0)
{
	// std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called." << std::endl;
}

Fixed&		Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Assignation operator called." << std::endl;
	_raw_bits = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const int input)
{
	_raw_bits = input << _frac_bits;
	// std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float input)
{
	_raw_bits = roundf(input * (1 << _frac_bits));
	// std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called." << std::endl;
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

bool	Fixed::operator>(const Fixed &num) const
{
	if (_raw_bits > num.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed &num) const
{
	if (_raw_bits < num.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed &num) const
{
	if (_raw_bits >= num.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed &num) const
{
	if (_raw_bits <= num.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed &num) const
{
	if (_raw_bits == num.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed &num) const
{
	if (_raw_bits != num.getRawBits())
		return true;
	else
		return false;
}

Fixed&	Fixed::operator+(const Fixed &num)
{
	_raw_bits += num.getRawBits();
	return *this;
}

Fixed&	Fixed::operator-(const Fixed &num)
{
	_raw_bits -= num.getRawBits();
	return *this;
}

Fixed&	Fixed::operator/(const Fixed &num)
{
	_raw_bits = _raw_bits / num.getRawBits();
	return *this;
}

Fixed&	Fixed::operator*(const Fixed &num)
{
	_raw_bits = _raw_bits * num.getRawBits();
	return *this;
}

Fixed&	Fixed::operator++()
{
	// std::cout << "raw bits " << _raw_bits << std::endl;
	_raw_bits++;
	return *this;
}

Fixed&	Fixed::operator--()
{
	_raw_bits--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	// std::cout << "raw bits " << _raw_bits << std::endl;
	Fixed cpy(*this);
	cpy._raw_bits++;
	// std::cout << "raw bits " << _raw_bits << std::endl;
	return cpy;
}

Fixed	Fixed::operator--(int)
{
	Fixed cpy(*this);
	_raw_bits--;
	return cpy;
}
