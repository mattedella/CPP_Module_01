#include "Zombie.hpp"

int main() {
    
    Zombie* zombie = newZombie("Walker"); // Create a Zombie dynamically
	zombie->announce();
    randomChump("Runner"); // Creates and announces a temporary Zombie

	delete(zombie);
    return 0;
}