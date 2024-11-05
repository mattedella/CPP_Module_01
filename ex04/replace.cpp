
#include "replace.hpp"

std::string replace(const std::string& line, const std::string& to_sub, const std::string& to_rep) {
	std::string ret;
	size_t pos = 0;
	size_t found;
	size_t sublen = to_sub.length();

	while (pos < line.length()) {
		found = line.find(to_sub, pos);
		if (found == std::string::npos) {
			ret.append(line, pos, line.length() - pos);
			pos = line.length();
		}
		else {	
			ret.append(line, pos, found - pos);
			ret.append(to_rep);
			pos = found + sublen;
		}
	}
	ret.append("\n");
	return ret;
}
