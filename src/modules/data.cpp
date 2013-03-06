#include "modules/data.hpp"
// not lets declare the elements that we want to actually use this library with validly
// now lets implement our basic max run length elements
template <>
int RLE<char>::maxRunSize() {

	// this is the maximum run size as provided with the boilerplate code
	return 127;
}

template <>
int RLE<short>::maxRunSize() {

	// maximum runsize for short elements
	return 32767;	
}

template <>
int RLE<int>::maxRunSize() {

	// give the maximum integer run size as provided in the boilerplate code
	return 214783647;	

}