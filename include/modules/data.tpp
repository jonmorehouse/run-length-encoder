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
	T * data = (T*)malloc(size * 2 * sizeof(T));//this is the data element	

	T current;//current element

	// initialize various counter elements as needed for this function
	int inputCounter = 0, //current input index
		outputCounter = 0, //current output index
		currentRun = 0,//current length of the run	
		currentNegativeIndex = 0,//current element to update if we are still on a negative run
		currentNegative = 0;//current negative run

	do {

		current = input[inputCounter];//cache the current input element


		std::cout << current << std::endl;

		inputCounter++;	




	} while (inputCounter < size);

	//end function
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