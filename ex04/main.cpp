
#include "replace.hpp"

int main (int argc, char **argv) {
	std::string new_line;
	std::string line;
	std::ifstream myfile;
	std::string filename;

	if (argc != 4) {
		std::cout << "Error: number of argument not correct\n";
		return 1;
	}

	std::string to_sub = argv[2];
	std::string to_rep = argv[3];
	filename = argv[1];
	filename.append(".replace");
	myfile.open(argv[1]);
	if (!myfile.is_open()) {
		std::cout << "file corrupted or inexistent\n";
		return 1;
	}
	std::ofstream outFile(filename.c_str());
	while (getline(myfile, line)) {
		new_line = replace(line, to_sub, to_rep);
    	if (outFile.is_open())
	   		outFile << new_line;
		else {
			std::cout << "Error: outfile is not open\n";
			return 1;
		}
	}
	myfile.close();
	outFile.close();
	return 0;
}
