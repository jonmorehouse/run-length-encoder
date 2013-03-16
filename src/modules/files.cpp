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
		
	void directoryFiles(const char * directoryName, std::vector<const char *> * files) {

		// current directory object
		DIR * directory;
		// temporary structure for working with the directory
		// http://www.delorie.com/gnu/docs/dirent/dirent.5.html
		struct dirent *current;

		//http://pubs.opengroup.org/onlinepubs/009695299/basedefs/sys/stat.h.html
		struct stat filestat;//file statistic struct
		// create a directory pointer
		directory = opendir(directoryName);

		// cache the current filename to help with comparisons / directory elements ...
		std::string currentFilename;
		std::string currentPath;//current file path
		char * entry;


		// exit if the directory is not workable
		if (directory == NULL) exit(1);

		// loop through each member of the directory
		while (current = readdir(directory)) {

			// cache current filename by using the dirent structure method
			currentFilename = std::string(current->d_name);
			currentPath = std::string(directoryName).append("/").append(currentFilename);
			stat(currentPath.c_str(), &filestat);

			// cast the filename entry as a c++ string to help for comparisons
			if ( currentFilename == "." || currentFilename == ".." || currentFilename == std::string(directoryName)) continue;

			// make sure that the element is not a directory and if so then append the files
			// if it is go ahead and append the files in that directory

			// 
			else {

				entry = new char[currentPath.size()]();
				strcpy(entry, currentPath.c_str());	
				files->push_back(entry);
			} 
			// 	
		}
	}

}