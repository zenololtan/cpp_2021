/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:48 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/04 12:48:36 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		static const int	_raw = 8;
		int					_raw_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed&	operator=(const Fixed &copy);

		void	setRawBits(int const raw);
		int	getRawBits() const;
};

#endif
