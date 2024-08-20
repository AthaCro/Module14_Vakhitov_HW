#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>

int main()
{
	std::string x = "Hello, Artyom!";
	std::cout << x << "\n";
	std::cout << x.length() << "\n";
	
	std::cout << x.front() << "\n";
	std::cout << x.back();
	std::getline(std::cin, x);
		
	
	std::cin;
	return 0;
}