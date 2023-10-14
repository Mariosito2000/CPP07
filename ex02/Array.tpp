#pragma once
#ifndef ARRAY_TPP
# define ARRAY_TPP

/*---CONS/DES---*/

template < typename T >
Array<T>::Array()
{
	_ptr = new T[10];
	_size = 10;
}

template < typename T >
Array<T>::~Array()
{
	delete[] _ptr;
}

template < typename T >
Array<T>::Array(const Array &copy)
{
	_size = copy._size;
	_ptr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_ptr[i] = copy._ptr[i];
}

template < typename T >
Array<T>::Array(unsigned int siz)
{
	_ptr = new T[siz];
	for (size_t i = 0; i < siz; i++)
		_ptr[i] = 0;
	_size = siz;
}

/*---MEMBER FUNCTIONS---*/

template < typename T >
unsigned int	Array<T>::size()
{
	return (_size);
}

/*---OPERATORS---*/

template < typename T >
Array<T> &	Array<T>::operator = (const Array<T> &equal)
{
	if (_size == equal._size)
	{
		for (size_t i = 0; i < _size; i++)
			_ptr[i] = equal._ptr[i];
	}
	else
	{
		_size = equal._size;
		delete[] _ptr;
		_ptr = new T[equal._size];
		for (size_t i = 0; i < _size; i++)
			_ptr[i] = equal._ptr[i];
	}
	return (*this);
}

template < typename T >
T &	Array<T>::operator [] (unsigned int index)
{
	if (index > _size)
		throw (OutOfBoundsException());
	return (_ptr[index]);
}

#endif