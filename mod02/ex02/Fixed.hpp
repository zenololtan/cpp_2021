/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:57 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/07 16:07:45 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		static const int	_frac_bits = 8;
		int					_raw_bits;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed&	operator=(const Fixed &copy);
		~Fixed();
		
		Fixed(const int input);
		Fixed(const float input);
		void	setRawBits(int const raw);
		int		getRawBits() const;
		float	toFloat() const;
		int		toInt() const;
		
		bool	operator>(const Fixed &num) const;
		bool	operator<(const Fixed &num) const;
		bool	operator>=(const Fixed &num) const;
		bool	operator<=(const Fixed &num) const;
		bool	operator==(const Fixed &num) const;
		bool	operator!=(const Fixed &num) const;
		
		Fixed&	operator+(const Fixed &num);
		Fixed&	operator-(const Fixed &num);
		Fixed&	operator/(const Fixed &num);
		Fixed&	operator*(const Fixed &num);
		
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		Fixed&	min(Fixed &num_a, Fixed &num_b) const;
		Fixed&	min(const Fixed &num_a, const Fixed &num_b) const;

		Fixed&	max(Fixed &num_a, Fixed &num_b) const;
		Fixed&	max(const Fixed &num_a, const Fixed &num_b) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &copy);

#endif
