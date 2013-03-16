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

	Data<char> * getTextContents(const char * filename) {

		// get the file contents into a c++ string
		// convert that string to a char and return the pointer to it
		// free up the c++ string

		Data<char> * data = new Data<char>();//initialize a pointer to the correct element

		// read the input file
		std::ifstream file(filename);	
		// this is the temporary string for grabbing all of the content		
		std::string current,//this is used for the current line
			content;//this is what will come of the data afterward the stringstream fills

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
		data->data = new char[content.length() + 1];//grab the length of the current content and +1 it to create a valid char to return to our element	
		data->length = content.length() + 1;

		// convert the c++ string to a const char (c->string) and then copy it over to the data array that we have created etc
		std::strcpy(data->data, content.c_str());		

		return data;// now lets just return the data that we are working with		
	}

	Data<char> * getBinaryContents(const char * filename) {

		// set up the data pointer that will be returned
		Data<char> * data = new Data<char>();

		// open file stream 
		std::ifstream file(filename, std::ios::in|std::ios::binary|std::ios::ate);
		
		// ensure that the file is open
		if (!file.is_open()) return static_cast<char>(false);			

		int size = file.tellg();//grab the size of the file (in binary)

		// 
		data->data = new char[size];// grab the size of the file (not binary)

		// set the initial position as the beginning of the file
		file.seekg (0, std::ios::beg);
		// now read in the entire file
	    file.read (data->data, size);
	    //close the file
	    file.close();	

	    // return the data element
	    return data;
	}
		
	std::list<std::string> directoryFiles(const char * directoryName) {

		std::list<std::string> files;//list of files that we can iterate through
		DIR * directory;

		
	}

}