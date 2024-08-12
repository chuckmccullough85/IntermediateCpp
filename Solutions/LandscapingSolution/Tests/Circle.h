#pragma once
#include <string>
#include "Color.h"
#include "NotImplementedException.h"

constexpr double PI = 3.141592653589;


class Circle
{
public:
	Circle() {}

	Circle(float radius, std::string name, Color color)
    {
        SetRadius(radius);
        SetName(name);
        SetColor(color);
    }

	float Radius() const { return radius; }
	std::string Name() const { return name; }
	Color GetColor() const { return color; }
	void SetRadius(float radius)
	{
		this->radius = radius;
	}
	void SetName(std::string name)
	{
		this->name = name;
	}
	void SetColor(Color color)
	{
		this->color = color;
	}

	float Area()
	{
		return Radius() * Radius() * PI;
	}
	float Perimeter()
	{
		return 2 * PI * Radius();
	}

private:
    float radius;
    std::string name;
    Color color;

};
