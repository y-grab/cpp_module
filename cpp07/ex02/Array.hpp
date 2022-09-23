#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int size);
		Array(const Array& other);
		~Array();
		Array& operator=(const Array& other);
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;

	private:
		T*				_arr;
		unsigned int	_size;
};

#include "Array.tpp"

#endif