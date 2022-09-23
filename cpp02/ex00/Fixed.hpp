#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_fpval;
		static const int	_fract = 8;
};

#endif