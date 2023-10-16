#pragma once
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T, typename f >
void	iter(T &array, size_t len, f func)
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif