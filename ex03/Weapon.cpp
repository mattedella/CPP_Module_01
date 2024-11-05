
#include "Weapon.hpp"

void Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const &Weapon::getType(void) {
	return this->_type;
}

Weapon::Weapon(std::string weapon) : _type(weapon) {
	std::cout << "Constructor called\n";
}

Weapon::~Weapon(void) {
	std::cout << "Destructor called\n";
}