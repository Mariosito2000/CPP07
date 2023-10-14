#include "iter.hpp"
#include <iostream>
#include <string>

void sumfunc(int & var)
{
	var += 20;
	std::cout << var << "\n";
}

template < typename T >
void testfunc(T & var)
{
	std::cout << var << "\n";
}

int	main()
{
	std::cout << "String\n\n";
	std::string	a[] = {"1a", "2sd", "3sdf", "4asdf", "5asdfh", "12sadfasddfaasdf"};
	iter(&a, 6, testfunc<std::string>);

	std::cout << "\nInt\n\n";
	int	b[] = {2, 234, 234, 4546, 6456};
	iter(&b, 5, testfunc<int>);

	std::cout << "\n(2)Int + 20\n\n";
	iter(&b, 2, sumfunc);

	std::cout << "\nInt\n\n";
	iter(&b, 5, testfunc<int>);

	return (0);
}