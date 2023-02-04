#pragma once


#include <string>


class Figure {
public:
	Figure() : sides{} {}

	virtual std::string getName() { return "Фигура"; }

	int getSides() { return sides; }

protected:
	Figure(const int _sides) { sides = _sides; }

private:
	int sides;
};

