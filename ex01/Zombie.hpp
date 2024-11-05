
# include <iostream>
# include <cctype>
# include <string>
# include <sstream>
# include <iomanip>

class Zombie {
	private:
		std::string _name;
	
	public:
	
		void setName(std::string name);
		void announce(void);

		Zombie(void);

		~Zombie(void);
};

Zombie *zombieHorde(int N, std::string name);