
#include <iostream>

int main (void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address sring: " << &string << "\n";
	std::cout << "Address pointer: " << stringPTR << "\n";
	std::cout << "Address reference: " << &stringREF << "\n";

	std::cout << "Value string: " << string << "\n";
	std::cout << "Value pointer: " << *stringPTR << "\n";
	std::cout << "Value reference: " << stringREF << "\n";

	return 0;
}