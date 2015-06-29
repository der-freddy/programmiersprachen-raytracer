#include "shape.hpp"
#include <string>
#include <iostream>

Shape::Shape():_name{"untitled"} ,_color{1.0f, 1.0f, 1.0f}
{}

Shape::Shape(std::string name, Color const& color): _name{name}, _color{color}
{
	std::cout << "Object created\n";
}

Shape::~Shape()
{
	std::cout << "Object destroyed\n";
}

Color Shape::color() const
{
	return _color;
}

std::string Shape::name() const
{
	return _name;
}

std::ostream& Shape::print(std::ostream& os) const
{
	os << "Shape:[Name: " << _name << "][Color: " << _color << "]\n";
	return os;
}

std::ostream& operator<<(std::ostream& os , Shape const& s)
{
	return s.print(os);
}
