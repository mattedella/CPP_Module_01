
#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie* chump;

	chump = new Zombie(name);
	chump->announce();
	delete(chump);
}
