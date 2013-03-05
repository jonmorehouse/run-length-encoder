#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP
/*
	
	This program is responsible for controlling the application
	Should be called from the main file
	This is menu driven, so each piece is a module that will merely interact with the proper mechanisms etc

*/
namespace controller {

	void test();//responsible for running the test suite / sample words etc ..
	void compressFile();//compress a single file
	void compressDirectory();//responsible for compressing an entire directory	
	void decompressFile();//responsible for decompressing a file	

}

#endif