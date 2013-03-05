#ifndef DATA_HPP
#define DATA_HPP

//project includes etc


// this data structure is vital for easily working with data throughout the input / output
struct Data {

	char * content;//will be the actual raw content as a cstring
	int ** intData;//returns an array of integer data	
	int length;//how long the content actually is etc	

};

// data namespace etc
namespace data {

	void encode();

	void decode();

}


#endif