
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " constructor called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " destructor called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
