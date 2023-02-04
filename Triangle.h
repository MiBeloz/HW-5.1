#pragma once


#include "Figure.h"


class Triangle : public Figure {
public:
	Triangle() : Figure(3) {}

	std::string getName() override { return "Треугольник"; }
};

