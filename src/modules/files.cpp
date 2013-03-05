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




	}

	void writeFile(char ** content) {




	}

	
	std::list<std::string> directoryFiles(char * directory) {




	}

}