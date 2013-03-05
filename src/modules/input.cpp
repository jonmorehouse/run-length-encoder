#include "modules/input.hpp"

namespace input {

	// constant char should not be able to be changed etc
	Data extractStringData(const char * content) {

		// initialize a data structure	
		Data data;
		data.length = strlen(content);//this is the length of the content coming in

		// make sure that the char length is of the proper size 
		data.content = new char[data.length + 1];
		// std::strcopy(data.content, content);

		// return our structure of data	
		return data;
	}

	Data extractIntegerData(const char * content) {

		// use long to help in case of overflow
		// integerContent;
		// grab the string stream content and extract only the numbers to a long element
		// std::stringstream(content) >> integerContent;

		// 
		// Data data;//instantiate a new data element



	}

	Data getStringData(int lines) {

		std::string content;//this is the raw content that we are grabbing and placing into the stream

		// will ask a user for particular types of data and will use string streams to filter out what we need
		do {

			// print message for user to enter string data etc
			std::cout << "Please enter a string" << std::endl;
			// grab the individual string line here
			std::getline(std::cin, content);

		} while (--lines > 0);

		return extractStringData(content.c_str());
	}	

	Data getIntegerData(int lines) {

		// create the actual return data structure
		Data data;
		 

		// return a pointer to a new data structure -- only writing out integer data and only writing to integercontent array
		int intData[lines];//create an array to hold the input from our element
		// grab the current line into a string	
		std::string content;

		// loop through each line that the user desires
		do {

			// actually grab the content
			getline(std::cin, content);	
			//process the raw string into pure integer data
			std::stringstream(content) >> data[lines -1];//insert the data into a string?	

		} while(--lines > 0);





	}



}