#define GLM_FORCE_RADIANS
#include "shape.hpp"
#include "box.hpp"
#include <cmath>
#include "glm/ext.hpp"


//Constructor
Box::Box(): _max{1.0f}, _min{0.0f}
{}

Box::Box(glm::vec3 const& max, glm::vec3 const& min): _max{max}, _min{min}
{}

Box::Box(glm::vec3 const& max, glm::vec3 const& min, std::string name, Color color): _max{max}, _min{min}, Shape(name, color)
{}

Box::~Box()
{}

glm::vec3 Box::max() const
{
	return _max;
}

glm::vec3 Box::min() const
{
	return _min;
}

double Box::volume() const
{
	glm::vec3 vec = _max - _min;

	return fabs(vec.x * vec.y * vec.z);
}

double Box::area() const
{	
	glm::vec3 vec = _max - _min;

	return 2*fabs((vec.x * vec.y) + (vec.x * vec.z) + (vec.y * vec.z));
}

std::ostream& Box::print(std::ostream& os) const
{
	os << "[Box: " << _name << "]\n[Color: " << _color << "]\n[Min: " << glm::to_string(_min) << "]\n[Max: " << glm::to_string(_max) << "]\n";
	return os;
}