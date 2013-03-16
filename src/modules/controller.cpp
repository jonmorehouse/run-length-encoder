#include "modules/controller.hpp"

namespace controller {

	void test() {

		RLE<char> * current = new RLE<char>();
		const char compressed[14] = "555a5b6z8g555";	
		
		current->compress(compressed, 13);	

		current->decompress(current->data, current->size);

	}

	void compressFile() {

		//read in file
		// compress it and save it to an extra name etc!
		// just use c++ strings for all this etc...
		const char filename[20] = "test.txt";

		// make sure the file exists before using
		if (!files::fileExists(filename))
			exit(1);

		// initiliaze a data RLE Structure to hold our data
		RLE<char> * rle = new RLE<char>();				
		// initialize the data element for the particular string etc
		Data<char> * data = files::getTextContents(filename); 

		// compress the data
		rle->compress(data->data, data->length);

		// write the file using our rle element!
		rle->writeFile("safd");
	}

	void compressDirectory() {

		

	}

	void decompressFile() {




	}

	void commandLine() {

		// will be responsible for parsing any command line functionality and then using that to talk to the application controllr
		

	}

}
