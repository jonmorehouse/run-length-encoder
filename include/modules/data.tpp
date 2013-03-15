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

	// allocate the correct amount of memory and make sure that when you return it you are casting it properly
	T * data = (T*)malloc(size * 2 * sizeof(<T>Element));//this is the data element	

	<T>Element * current;//equal the current element that we are storing

	// initialize various counter elements as needed for this function
	int inputIndex = 0, //current input index
		outputIndex= 0, //current output index
		currentRun = 0,//current length of the run	
		currentNegativeIndex = 0,//current element to update if we are still on a negative run
		currentNegative = 0;//current negative run

	do {

		// cache current value
		current = input[inputIndex];//cache the current input element

		if (outputIndex > 0 && input[inputIndex] == data[outputIndex - 1])	
			data[outputIndex - 2] += 1;//iterate the element up one		

		// otherwise we need to actually store the element as a normal rle
		else {

			// save the element that we want to store!
			data[outputIndex] = static_cast<char*>(1); 

			std::cout << data[outputIndex] << std::endl;
			outputIndex++;//increment output index 1 for the next element

			// save the data element
			data[outputIndex] = input[inputIndex];

			outputIndex++;//increment up one for the next run of the element
		}

		// functionality for negative runs ...
		inputIndex++;//iterate the counter up one!

	} while (inputIndex < size);

	//end function
	// for (int i = 0; i < outputIndex; i++)
	// 	std::cout << data[i] << std::endl;

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