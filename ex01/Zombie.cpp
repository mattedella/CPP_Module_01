
#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name) {
	_name = name;
}
