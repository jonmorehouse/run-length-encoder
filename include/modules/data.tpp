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

	// initialize our place in memory to store a list of the element pieces
	Element<T> * data = (Element<T>*)malloc(size * 2 * sizeof(Element<T>));

	// 
	int inputIndex = 0,
		outputIndex = 0;

	// initialize a few variables for controlling the algorithm for compression
	bool negativeRun = false;//while true will be running the negativeElemnet lambda

	// create a new element with this particular lambda
	auto newElement = [&data, &outputIndex] (T _data) {




	};

	// will need 
	auto negativeElement = [&] () {




	};


	// control the basic algorithm element with this particular while loop
	while (inputIndex < size) {

		// first check that we're not the first element
		if (!data[outputIndex])//need to create a new element
			newElement(input[inputIndex]);

		// same element -- not in a negative run!
		else if (input[inputIndex] == data[outputIndex].data)//we need to simply increase the run length element
			data[outputIndex].length++;//increase the length by one for this particular run			



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