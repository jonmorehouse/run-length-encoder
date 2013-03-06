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

	// compress the input here

}

template <typename T>
void RLE<T>::decompress(const T* input, int inputSize, int outputSize) {

	// decompress the code / logic here etc
		

}

template <typename T>
int RLE<T>::maxRunSize() {

	// make sure that this doesn't happen so that we are only using RLE for proper input types
	// static_assert(false, "RLE not supported for this particular type");

}


#endif