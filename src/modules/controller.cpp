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
		std::string filename;
		std::cout << "Please enter file name: ";	
		std::cin >> filename;//cache the filename
		sdt::cout << std::endl;

		compressFile(filename);//actually run the filename element	

	}

	void compressDirectory() {

				


	}

	void decompressFile() {




	}

	void commandLine() {

		// will be responsible for parsing any command line functionality and then using that to talk to the application controllr
		

	}


	/******** PRIVATE MODULE FUNCTIONS ********/
	void compressFile(std::string filename) {

		// simply outputs the file to the correct file name etc using our algorithm
		// make sure the file exists before using
		if (!files::fileExists(filename.c_str())) {

			std::cout << "Invalid filename. Exiting.";
			exit(1);

		}

		// initiliaze a data RLE Structure to hold our data
		RLE<char> * rle = new RLE<char>();				
		// initialize the data element for the particular string etc
		Data<char> * data = files::getTextContents(filename.c_str()); 

		// compress the data
		rle->compress(data->data, data->length);

		// write the file using our rle element!
		rle->writeFile(filename.append(".rle").c_str());

		delete data;
		delete rle;
	}

	void decompressFile(std::string filename) {


		// will take in a file
		



	}

}
