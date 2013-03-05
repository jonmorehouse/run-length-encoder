// include all project libraries	
// #include "modules/files.hpp"
#include "/Users/MorehouseJ09/Documents/courses/itp_499/assignments/assignment_1/include/modules/files.hpp"


// include project dependencies
#include <iostream>

void menuOptions() {

	std::cout << "1.) -- Run Tests.\n";
	std::cout << "2.) -- Compress File.\n";
	std::cout << "3.) -- Compress Directory.\n";
	std::cout << "4.) -- Decompress File.\n"; 
	std::cout << "5.) -- Exit.\n";
}

void menuController() {

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

	} while (input != 'q');

}


int main() {

	menuController();//run the menu controller to initialize our program!	


}