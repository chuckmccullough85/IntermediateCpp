#pragma once
#include <string>
#include "Color.h"
#include "NotImplementedException.h"


class Rectangle
{
public:
	Rectangle() {}
	Rectangle(float width, float height, std::string name, Color color)
	{
		SetColor(color);
		SetDimension(width, height);
		SetName(name);
	}

	float Width() const { return width; }
	float Height() const { return height; }
	std::string Name() const { return name; }
	Color GetColor() const { return color; }
	void SetDimension(float width, float height)
	{
		this->height = height;
		this->width = width;
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
		return Width() * Height();
	}
	float Perimeter()
	{
		return 2 * (Width() + Height());
	}

private:
    float width;
    float height;
    std::string name;
    Color color;

};

