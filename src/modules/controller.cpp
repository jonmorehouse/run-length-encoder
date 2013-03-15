#include "modules/controller.hpp"

namespace controller {

	void test() {

		RLE<char> * current = new RLE<char>();
		const char compressed[11] = "555a5b6z8g";	
		current->compress(compressed, 10);	


	}

	void compressFile() {

		// ask for filename
		// verify that it exists

	}

	void compressDirectory() {



	}

	void decompressFile() {




	}

	void commandLine() {

		// will be responsible for parsing any command line functionality and then using that to talk to the application controllr
		

	}

}
