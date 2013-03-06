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


#endif