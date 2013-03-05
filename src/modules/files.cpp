// include project depenendencies
#include "modules/files.hpp"

namespace files {

	bool fileExists(char * filename) {
	
		std::fstream file(filename);//initialize a file stream with the input file name		

		// return the status of the file stream
		if (file) return true;	

		else return false;

	}	


	char ** getFileContents(char * filename) {

		// read the input file
		std::ifstream file(filename);	

		// check if the file exists and don't continue if not
		if (!file.is_open()) return false;

		// read the number of lines in the file for our array to store them properly etc
		int lines = std::count(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>(), '\n');

		// now lets create a char of strings


	}

	char ** getFileBinaryContents(char * filename) {




	}

	void writeFile(char ** content) {




	}

	
	std::list<std::string> directoryFiles(char * directory) {




	}

}