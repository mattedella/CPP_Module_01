
#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name) {
	this->_weapon = NULL;
	std::cout << "Constructor called\n";
}

HumanB::~HumanB(void) {
	std::cout << "Destructor called\n";
}

void HumanB::attack(void) {
	if (this->_weapon->getType().empty())
		std::cout << this->_name << " can't attack\n";
	else 
		std::cout << this->_name << " attack with their " << this->_weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
