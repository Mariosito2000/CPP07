#include "Array.hpp"

#include <iostream>
#include <string>

/* void	leaks()
{
	system("leaks -q array_test");
} */

int	main()
{

	//atexit(leaks);

	Array<int>   a(20);

std::cout << "\ntry out of bounds\n\n";
try
{
	std::cout << a[-23] << "\n";
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

std::cout << "\nempty int array\n\n";
	for (int i = (a.size() - 1); i >= 0; i--)
		std::cout << a[i] << "\n";
std::cout << "\nfill int array\n\n";
	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << "\n";
	}

std::cout << "\nint array copy\n\n";

	//Array<int>   copy(a);
	Array<int>   copy;
	std::cout << "Default size: " << copy.size() << "\n\n";
	copy = a;
	std::cout << "Equal size: "  << copy.size() << "\n\n";

	for (unsigned int i = 0; i < copy.size(); i++)
	{
		std::cout << copy[i] << "\n";
	}

std::cout << "\nmodify copy\n\n";
	for (unsigned int i = 0; i < copy.size(); i++)
	{
		copy[i] = i * i;
		std::cout << copy[i] << "\n";
	}

std::cout << "\nint array again\n\n";
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << "\n";
	}

}