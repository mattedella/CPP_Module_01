
#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
	std::cout << "Constructor called\n";
}

HumanA::~HumanA(void) {
	std::cout << "Destructor called\n";
}

void HumanA::attack(void) {
	std::string option;
	if (_weapon.getType().empty()) {
		std::cout << "quick! gave me a weapon: ";
		std::getline(std::cin, option);
		this->_weapon.setType(option);
	}
	std::cout << _name << " attack with their " << _weapon.getType() << "\n";
}