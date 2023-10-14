#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

template < typename T >
class Array
{
private:

	T				*_ptr;
	unsigned int	_size;

public:

/*---CONS/DES---*/

	Array();
	~Array();

	Array(const Array &);
	Array(unsigned int);

/*---MEMBER FUNCTIONS---*/

	unsigned int	size();

/*---OPERATORS---*/

	Array &	operator = (const Array &);
	T & operator [] (unsigned int);

/*---EXCEPTIONS---*/

	class OutOfBoundsException : public std::exception {
		public:
			const char * what () const _NOEXCEPT {
				return ("Index out of bounds");
    		}
	};

};

#include "Array.tpp"

#endif