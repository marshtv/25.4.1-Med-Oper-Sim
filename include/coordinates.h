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

bool is_equal(coordinates& sc_coord_1, coordinates& sc_coord_2,
			  coordinates& sut_coord_1, coordinates& sut_coord_2) {
	if (sc_coord_1.x == sut_coord_1.x && sc_coord_1.y == sut_coord_1.y &&
		sc_coord_2.x == sut_coord_2.x && sc_coord_2.y == sut_coord_2.y)
		return true;
	else
		return false;
}