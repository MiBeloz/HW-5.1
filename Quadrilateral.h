#pragma once


#include "Figure.h"


class Quadrilateral : public Figure {
public:
	Quadrilateral() : Figure(4) {}

	std::string getName() override { return "Четырехугольник"; };
};

