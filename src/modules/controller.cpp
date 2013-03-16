
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

		

		// initiliaze a data RLE Structure
		RLE<char> * data = new RLE<char>();				
		


	}

	void compressDirectory() {



	}

	void decompressFile() {




	}

	void commandLine() {

		// will be responsible for parsing any command line functionality and then using that to talk to the application controllr
		

	}

}
