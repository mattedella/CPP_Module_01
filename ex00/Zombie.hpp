
# include <iostream>
# include <cctype>
# include <string>
# include <sstream>
# include <iomanip>

class Zombie {
	private:
		std::string _name;
	
	public:
	
		void announce(void);

		Zombie(std::string name);

		~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);