#include <iostream>
#include "../include/coordinates.h"

void start_input(int& command) {
	std::cout << "================================================" << std::endl;
	std::cout << "Input command (0 - 3) or (-1):";
	std::cin >> command;
	while (command < -1 || command > 3) {
		std::cout << "Input ERROR. Try again." << std::endl;
		std::cout << "Input command (0-3):" << std::endl;
		std::cin >> command;
	}
}

void scalpel(coordinates& coord_1, coordinates& coord_2) {
	input_coord(coord_1);
	input_coord(coord_2);
	std::cout << "We make a cut or clipping line by scalpel form: " << std::endl;
	output_coord(coord_1);
	std::cout << " to ";
	output_coord(coord_2);
	std::cout << std::endl;
	reset_coord(coord_1);
	reset_coord(coord_2);
}

void hemostat(coordinates coord_1) {
	input_coord(coord_1);
	std::cout << "We make a clamp by hemostat in coordinates:" << std::endl;
	output_coord(coord_1);
	std::cout << std::endl;
	reset_coord(coord_1);
}

void tweezers(coordinates coord_1) {
	input_coord(coord_1);
	std::cout << "We make a clamp by tweezers in coordinates:" << std::endl;
	output_coord(coord_1);
	std::cout << std::endl;
	reset_coord(coord_1);
}

void suture(coordinates& coord_1, coordinates& coord_2) {
	input_coord(coord_1);
	input_coord(coord_2);
	std::cout << "We make a suture by surgical needle form:" << std::endl;
	output_coord(coord_1);
	std::cout << " to ";
	output_coord(coord_2);
	std::cout << std::endl;
	reset_coord(coord_1);
	reset_coord(coord_2);
}

int main() {
	coordinates coord_1, coord_2;
	int command;

	std::cout << "You have four commands to assistant:" << std::endl;
	std::cout << "0 - (scalpel) - to make cut or clipping line," << std::endl;
	std::cout << "1 - (hemostat) - to make a clamp," << std::endl;
	std::cout << "2 - (tweezers) - also, to make a clamp," << std::endl;
	std::cout << "3 - (suture) - surgical needle to make a suture," << std::endl;
	std::cout << "-1 - (exit) - to exit program." << std::endl;
	start_input(command);
	while (command != -1) {
		switch (command) {
			default:
				break;
			case 0:
				scalpel(coord_1, coord_2);
				break;
			case 1:
				hemostat(coord_1);
				break;
			case 2:
				tweezers(coord_1);
				break;
			case 3:
				suture(coord_1, coord_2);
				break;
		}
		start_input(command);
	}
	std::cout << "================================================" << std::endl;
	std::cout << "Good by." << std::endl;
	return 0;
}
