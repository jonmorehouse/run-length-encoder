// include all project libraries	
#include "modules/files.hpp"


// include project dependencies
#include <iostream>

void menuOptions() {

	// print out all valid menu options as given in the assignment syllabus
	std::cout << "1.) -- Run Tests.\n";
	std::cout << "2.) -- Compress File.\n";
	std::cout << "3.) -- Compress Directory.\n";
	std::cout << "4.) -- Decompress File.\n"; 
	std::cout << "5.) -- Exit.\n";
}

void menuController() {

	// cache our menu selection locally with input
	int input;

	do {

		// print out the menu options
		menuOptions();//actually display the various menu options etc for this program

		// grab the generic standard input here
		std::cin >> input;	

		// switch will go here to load in the proper controller functions to operate 
		switch (input) {

			case 1://tests 

				break;

			case 2://compress single file
			
				break;

			case 3://compress directory

				break;	

			case 4: //decompress file

				break;
		}			

	// break statement responsible for exiting the program etc
	} while (input < 5);
}


int main(int argc, char ** argv) {

	// menuController();//run the menu controller to initialize our program!	

	char filename[] = "test.txt";

	files::getFileContents(filename);//

}