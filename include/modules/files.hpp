#ifndef FILES_HPP
#define FILES_HPP

// project includes


// standard includes
#include <string>
#include <list>
#include <fstream>
/*
	This namespace will be responsible for reading / writing files
	Will be responsible for pulling in proper file data
	Can later be a templated function namespace etc

*/
namespace files {

	// check existence etc
	bool fileExists(char * filename);//will determine whether or not the file exists in the current scope etc

	// grab the contents
	char ** getFileContents(char * filename);//grab the contents of the file and place them into a square array and return a pointer to this element

	// save contents to a file 
	void writeFile(char ** content);//write the compressed contents to a file

	// grab a list of directory files -- will need to re-implement with windows / mac etc
	std::list<std::string> directoryFiles(char * directory);//iterate through a directory and return files that exist

}

#endif