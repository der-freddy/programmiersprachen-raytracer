#ifndef BUW_BOX_HPP
#define BUW_BOX_HPP
#include <string>
#include <glm/vec3.hpp>
#include "shape.hpp"
#include <stdlib.h>

class Box : public Shape
{	
	public:
	//Constructor
	Box();
	Box(glm::vec3 const& max, glm::vec3 const& min);
	Box(glm::vec3 const& max, glm::vec3 const& min, std::string name, Color color);
	~Box();
	glm::vec3 max() const;

	glm::vec3 min() const;

	double volume() const override;

	double area() const override;

	std::ostream& print(std::ostream & os) const override;

	private:
		glm::vec3 _max;
		glm::vec3 _min;
};

#endif // BUW_BOX_HPP
