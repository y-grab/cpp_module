#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:

		int					_fpval;
		static const int	_fract = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif