/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:45 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/02 14:40:48 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called." << std::endl;
	_fixed_point = copy.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called." << std::endl;
	return _fixed_point;
}
