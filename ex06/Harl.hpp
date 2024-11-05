
#ifndef HARL
# define HARL

# include <iostream>
# include <cctype>
# include <string>
# include <sstream>
# include <iomanip>
# include <fstream>
#include <map>

class Harl {

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);
	
		int getComplaiLevel(std::string level);
};

#endif