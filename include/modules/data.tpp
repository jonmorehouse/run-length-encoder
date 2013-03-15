#ifndef DATA_TPP
#define DATA_TPP

#include "modules/data.hpp"

/*
	TPP files are usually reserved for the implementation of template headers
	This file should be included in the template header file	
*/
// this should be in the namespace data?
template <typename T>
void RLE<T>::compress(const T* input, const int size) {

		// initialize our place in memory to store a list of the element pieces
	Element<T> * data = (Element<T>*)malloc(size * 2 * sizeof(Element<T>));

	// initialize index variables 
	int inputIndex = 0,
		outputIndex = 0;

	// create a new element with this particular lambda
	auto newElement = [&data, &outputIndex] (T _data) {

		// initialize the element properly -- set length to 1. Controller can update accordingly
		data[outputIndex].length = 1;
		// allocate the proper amount of space for the t element
		data[outputIndex].data = (T*)malloc(sizeof(T));
		// assign the value of data for this particular element to the _data variable passed in
		data[outputIndex].data[0] = _data;
	};

	// put our advanced logic here to check the negative
	// want to pull things in by reference so we can get the real-time variable values. Otherwise they are just cached once!
	auto checkNegativeRun = [data, &outputIndex, &inputIndex, input] () {

		Element<T> current = data[outputIndex];//cache the current element
		T last = current.data[0];

		// make sure the length is not greater than the normal
		if (current.length > 1) return false;//this is a normal run

		// should never happen
		if (input[inputIndex] == last) return false;

		// make sure this is a negative run because a negative run should never equal the next value!
		if (input[inputIndex] == input[inputIndex + 1]) return false;

		return true;//this is actually a negative run!

	};  

	// will update the negative run element according to our laws of negative runs etc
	auto negativeRun = [&data, &outputIndex] (T _data) {

		// now that we know we're running negative length, ensure that the length is adjusted accordingly
		if (data[outputIndex].length > 0) data[outputIndex].length *= -1;

		// adjust length accordingly
		data[outputIndex].length--;//subtract one so we know that we have a negative run of at least two characters long!

		// now reallocate the memory properly to store the data
		// reallocate will make the memory spot bigger and will move it if necessary!
		data[outputIndex].data = (T*)realloc(data[outputIndex].data, data[outputIndex].length * -1 * sizeof(T)); 

		// set the value properly now
		data[outputIndex].data[data[outputIndex].length * -1 -1] = _data;
	};


	// control the basic algorithm element with this particular while loop
	while (inputIndex < size) {

		// first check that we're not the first element
		// why can't I see if the element is null here?
		if (data[outputIndex].length == 0)//need to create a new element
			newElement(input[inputIndex]);

		// same element -- not in a negative run!
		else if (input[inputIndex] == data[outputIndex].data[0])//we need to simply increase the run length element
			data[outputIndex].length++;//increase the length by one for this particular run			

		// check if the run should be a negative run! -- if so then call the negativeRun element
		else if (checkNegativeRun())//only returns true if it adheres to the rules above
		 	negativeRun(input[inputIndex]);//update the current element to ensure that its a negative run that incorporates the element

		// otherwise just start a new element?
		else {

			outputIndex++;//increase the input index by 1
			// create a new element
			newElement(input[inputIndex]);//initialize the element with the current data and then create a new one
		}

		// increase the counter by one here
		inputIndex++;//increase the input index 
	}

	// could reallocate here -- but ... we have a problem determining the size of all the elements 
	// work on this later

	// set up the global structure variables
	this->size = outputIndex;//size of the output index -- ie: the number of elements we have
	this->data = data;//set the pointer of global data to the pointer of the local data	

	printf("%d", outputIndex);
}

template <typename T>
void RLE<T>::decompress(const Element<T> * input, const int size) {//this assumes that 

	// allocate the initial size guessing that each element is size		
	// each time its not, lets keep track so we can know exactly when we are out of space and allocate just that amount -- using some sort of average? 
	// keep track of how many T spots we have left etc
	T * data = (T*)malloc(size * sizeof(T));

		



}

template <typename T>
int RLE<T>::maxRunSize() {

	// make sure that this doesn't happen so that we are only using RLE for proper input types
	// static_assert(false, "RLE not supported for this particular type");

}


#endif
