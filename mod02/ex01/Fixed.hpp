/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:57 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/04 12:48:38 by ztan          ########   odam.nl         */
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
};

	std::ostream&	operator<<(std::ostream &out, const Fixed &copy);

#endif
