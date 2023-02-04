#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "Фигуры. Количество сторон.\n" << std::endl;

	Figure* figure = new Figure;
	std::cout << figure->getName() << ": " << figure->getSides() << std::endl;
	delete figure;

	figure = new Triangle;
	std::cout << figure->getName() << ": " << figure->getSides() << std::endl;
	delete figure;

	figure = new Quadrilateral;
	std::cout << figure->getName() << ": " << figure->getSides() << std::endl;
	delete figure;
	
	figure = nullptr;

	system("pause > nul");

	return 0;
}