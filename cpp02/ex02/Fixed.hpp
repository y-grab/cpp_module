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

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();

		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

	private:

		int					_fpval;
		static const int	_fract = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif