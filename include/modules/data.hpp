#ifndef DATA_HPP
#define DATA_HPP

//project includes etc

// c++ standard libraries
#include <iostream>

// this data structure is vital for easily working with data throughout the input / output
struct Data {

	// this can be changed -- is not a constant string
	char * content;//will be the actual raw content as a cstring
	int * intContent;//returns an array of integer data	
	int length;//how long the content actually is etc	

};

// initialize a data structure that can hold all of the pieces of the element
template <typename T>
struct Element {

	short length;//length of the element -- if its less than 0 then we know its a negative length and to look at how many elements we have!
	char * data;//this is the type of elment that is stored etc
	
};

template <typename T>
struct RLE{

	// initialize a place in memory to store the array of the elemnet pieces that will store the compressed elements
	Element<T> * data;//this is the data that will store the uncompressed / compressed data
	int size;//this is how long the data currently is

	RLE() : data(NULL) , size(0) {


	}	

	~RLE() {

		delete data;//actually remove our data and free this structure

	}

	// compress the input data and store it as teh data element in this structure
	void compress(const T* input, int size);

	// decompress the data
	void decompress(const T* input, int size);//takes in the data and will then return 

	// grab the maximum run size element for this particular data type
	int maxRunSize();// declare the maximum run

	// declare a friend function that can be included in other projects to help output the data

};

// include the actual implementation of these files
#include "data.tpp"



#endif