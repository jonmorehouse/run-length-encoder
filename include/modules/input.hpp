#ifndef INPUT_HPP
#define INPUT_HPP

// project includes
#include "modules/data.hpp"


// c++ includes
#include <sstream>

/*
	Input namespace is responsible for pulling in data
	This is how we should generally interact with the user for the testing segment of the application etc
*/
namespace input {

	// get string data using only string streams etc
	Data getStringData();

	// make sure that we are only getting integers into an array and then return that
	Data getIntegerData();

	Data extractStringData(char * content);//extract the string data from a raw array of characters


	Data extractIntegerData(char * content);//extract the string data from a raw array of characters	


}


#endif