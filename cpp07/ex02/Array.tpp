template <typename T>
Array<T>::Array()
{
	_size = 0;
	_arr = new T[0];
}

template <class T>
Array<T>::Array(unsigned int array_size)
{
	_size = array_size;
	_arr = new T[array_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = (int)0;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	_arr = new T[other.size()];
	_size = other.size();
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other[i];
}

template <typename T>
Array<T>::~Array() {
	delete[] _arr;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	delete[] _arr;
	_arr = new T[other.size()];
	_size = other.size();
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other[i];
	return *this;
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _arr[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}
