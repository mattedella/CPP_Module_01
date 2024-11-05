
#ifndef WEAPON
# define WEAPON

# include <iostream>
# include <cctype>
# include <string>
# include <sstream>
# include <iomanip>

class Weapon {

	private:
		std::string _type;
	
	public:
		Weapon(std::string weapon);

		void setType(std::string type);
		std::string const &getType(void);

		~Weapon (void);
};

#endif