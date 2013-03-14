#ifndef DATA_TPP
#define DATA_TPP

#include "modules/data.hpp"
/*
	TPP files are usually reserved for the implementation of template headers
	This file should be included in the template header file	
*/
// this should be in the namespace data?
template <typename T>
void RLE<T>::compress(const T* input, int size) {

	T * data[100];//this is the data element	
	T current = input[0];//current element
	// compress the input here
	int counter = 0, //which element of the input data that we are currently on
		indexCounter = 0,//how long our element is 
		currentRun = 1;//how long our current run is

	// loop through the entire input element
	while (counter < size) {

		if (input[counter] == current)
			currentRun++;//update the current run to be plus one

		// we don't have a match -- need to update the system accordingly
		else {

			
			// set the current index as the run length
			// data[indexCounter] = static_cast<char *>(currentRun);//initialize the index counter
			// move index counter right 1 so that we don't have to reallocate etc
			// data[++indexCounter] = current;//store the variable in memory!
			// update the index counter one more time so that the next time this happens we don't have to do anything to initialize!	
			// ++indexCounter;//update the index counter for the next run
			// currentRun = 0;
		}

		// now update the data counter to move right one element!
		++counter;//update the counter for each loop to go to the next element
	}



}

template <typename T>
void RLE<T>::decompress(const T* input, int inputSize) {

	// decompress the code / logic here etc
	// know that the output size is the element that we need to 


	// want to deallocate the input data after we are done?			
	// 	

	for (int i = 0; i < inputSize; i++) {

		std::cout << input[i] << std::endl;

	}
		

}

template <typename T>
int RLE<T>::maxRunSize() {

	// make sure that this doesn't happen so that we are only using RLE for proper input types
	// static_assert(false, "RLE not supported for this particular type");

}


#endif