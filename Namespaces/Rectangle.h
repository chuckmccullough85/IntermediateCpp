#pragma once
#include <string>
#include "Color.h"

class Rectangle
{
public:
	Rectangle() {}
	Rectangle(float width, float height, std::string name, Color color)
		: color(color), name(name)
	{
		SetDimension(width, height);
	}

	float Width() const { return width; }
	float Height() const { return height; }
	std::string Name() const { return name; }
	Color GetColor() const { return color; }
	void SetDimension(float width, float height)
	{
		this->width = width;
		this->height = height;
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
		return (Width() + Height()) * 2;
	}

private:
	Color color;
	std::string name;
	float width;
	float height;
};
