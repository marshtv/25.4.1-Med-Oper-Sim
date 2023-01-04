#pragma once

struct coordinates {
	double x = 0.00;
	double y = 0.00;
};

void input_coord(coordinates& coord) {
	std::cout << "Input coordinates (x y):";
	std::cin >> coord.x >> coord.y;
}

void output_coord(coordinates& coord) {
	std::cout << "(" << coord.x << ", " << coord.y << ")";
}

void reset_coord(coordinates& coord) {
	coord.x = 0;
	coord.y = 0;
}

bool is_equal(coordinates& coord_1, coordinates& coord_2) {
	if (coord_1.x == coord_2.x && coord_1.y == coord_2.y)
		return true;
	else
		return false;
}