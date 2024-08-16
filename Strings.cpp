#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>

int main()
{
	std::string x = "Hello, Artyom!";
	std::cout << x << "\n";
	std::cout << x.length() << "\n";
	std::cout << "H\n";
	std::cout << "!\n";
	std::getline(std::cin, x);
		
	
	std::cin;
	return 0;
}