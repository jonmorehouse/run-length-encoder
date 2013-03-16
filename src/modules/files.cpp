// include project depenendencies
#include "modules/files.hpp"

namespace files {

	bool fileExists(const char * filename) {
	
		std::fstream file(filename);//initialize a file stream with the input file name		

		// return the status of the file stream
		if (file) return true;	

		// 
		else return false;
	}	


	char * getTextContents(const char * filename) {

		// get the file contents into a c++ string
		// convert that string to a char and return the pointer to it
		// free up the c++ string

		// read the input file
		std::ifstream file(filename);	
		// this is the temporary string for grabbing all of the content		
		std::string current,//this is used for the current line
			content;//this is what will come of the data afterward the stringstream fills

		// data is what we will send back
		char * data;//this is where the data will go when we are finished looping through the file and need to return something	

		// declare our string stream
		std::ostringstream output;

		// check if the file exists and don't continue if not
		if (!file.is_open()) return static_cast<char>(false);

		// use a while loop to grab the content
		while (file.good()) {

			// grab the current line and then throw it into the stringstream
			getline(file, current);//grab the raw content of the file and place it into the string
			output << current;//send the current line to the output stream			
		}

		content = output.str();//cache the output stringstream as a c++ string

		// close the file 
		file.close();

		// now lets convert the element to the proper string
		data = new char[content.length() + 1];//grab the length of the current content and +1 it to create a valid char to return to our element	

		// convert the c++ string to a const char (c->string) and then copy it over to the data array that we have created etc
		std::strcpy(data, content.c_str());		

		return data;// now lets just return the data that we are working with		
	}

	char * getBinaryContents(const char * filename) {

		std::ifstream file(filename, std::ios::in|std::ios::binary|std::ios::ate);
		
		// ensure that the file is open
		if (!file.is_open()) return static_cast<char>(false);			

		int size = file.tellg();//grab the size of the file (in binary)
		char * data = new char[size];// grab the size of the file (not binary)

		// set the initial position as the beginning of the file
		file.seekg (0, std::ios::beg);
		// now read in the entire file
	    file.read (data, size);
	    //close the file
	    file.close();	

	    // return the data element
	    return data;
	}

	
		
	std::list<std::string> directoryFiles(const char * directory) {




	}

}