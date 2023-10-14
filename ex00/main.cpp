#include "whatever.hpp"
#include <iostream>
#include <string>

int	main()
{
	int	a = 42;
	int	b = 31;


	//INT
	std::cout << "min: " << ::min<int>(a, b) << "\n";
	std::cout << "max: " << ::max<int>(a, b) << "\n";
	swap(a, b);
	std::cout << "swap: a = " << a << ", b = " << b << "\n\n";


	//STRING
	std::string str = "Hola";
	std::string rts = "Adios";
	std::cout << "min: " << ::min<std::string>(str, rts) << "\n";
	std::cout << "max: " << ::max<std::string>(str, rts) << "\n";
	swap(str, rts);
	std::cout << "swap: str = " << str << ", rts = " << rts << "\n";

	return (0);
}