// include all project libraries	
#include "modules/files.hpp"
#include "modules/controller.hpp"
#include "modules/data.hpp"


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
	int selection;//this is the selection from our user

	do {

		// print out the menu options
		menuOptions();//actually display the various menu options etc for this program

		// grab the integer from our input module
		std::cin >> selection;

		// switch will go here to load in the proper controller functions to operate 
		switch (selection) {

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
	} while (selection != 5);
}


int main(int argc, char ** argv) {

	// menuController();//run the menu controller to initialize our program!	

	// if (argc == 1) controller::menu();// the user wants to use the interactive command line mode
	// else controller::commandLine();//use the controller class to help us parse any application logic that was passed to the program at run time

	controller::test();//run our test suite
	RLE<int> test;
		

}
