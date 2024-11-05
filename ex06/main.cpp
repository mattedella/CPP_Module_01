
#include "Harl.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: wrong nbr argument\n";
		return 1;
	}
	Harl harl;
	std::string level = argv[1];
	harl.complain(level);
	return 0;
}
