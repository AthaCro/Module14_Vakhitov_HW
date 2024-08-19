#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>

int main()
{
	std::string x = "Hello, Artyom!";
	std::cout << x << "\n";
	std::cout << x.length() << "\n";
	
	std::string tmp = x;
	std::cout << tmp[0] << "\n";
	std::cout << tmp[13];
	std::getline(std::cin, x);
		
	
	std::cin;
	return 0;
}