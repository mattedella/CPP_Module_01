
#include "Zombie.hpp"

int main (void) {
	int n = 10;

	Zombie* horde = zombieHorde(n, "Runner");
	delete[] horde;

	return 0;
}