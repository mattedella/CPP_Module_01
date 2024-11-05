#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon club = Weapon("club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("");
	bob.attack();

	Weapon sword = Weapon("sword");
	HumanB jim("Jim");
	jim.setWeapon(sword);
	jim.attack();
	sword.setType("");
	jim.attack();

	return 0;
}