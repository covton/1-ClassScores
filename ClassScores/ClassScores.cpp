// ClassScores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Please enter your score (enter 0 to exit program) \n"; //ask for score
	int a=1; //create an integer and initialise it to 1

		while (a != 0) { //while a !0, keep looping around (so we can use 0 to exit)
			std::cin >> a;

			if (a >= 80 && a<= 100) {
				std::cout << "You got an A\n"; // if score is between 80 and 100, they scored an A
			}
			else if (a >= 70 && a <80) {
				std::cout << "You got a B\n";
			}
			else if (a >= 60 && a <70) {
				std::cout << "You got a C\n";
			}
			else if (a >= 50 && a <60) {
				std::cout << "You got a D\n";
			}
			else if (a >= 40 && a <50) {
				std::cout << "You got an E\n";
			}
			else if (a > 100 || a <0) {
				std::cout << "You can't score more than 100\% or less than 0\%\n";
			}
			else {
				std::cout << "You failed\n";
			}
		}
		system("PAUSE"); // pause to look at the results
	return 0;
}

