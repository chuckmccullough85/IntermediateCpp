#pragma once
#include <string>
#include "Color.h"
#include "NotImplementedException.h"

class Circle
{
public:
	Circle() {}

	Circle(float radius, std::string name, Color color)
	{
		throw NotImplementedException();
	}

	float Radius() const { throw NotImplementedException(); }
	std::string Name() const { throw NotImplementedException(); }
	Color GetColor() const { throw NotImplementedException(); }
	void SetRadius(float radius)
	{
		throw NotImplementedException();
	}
	void SetName(std::string name)
	{
		throw NotImplementedException();
	}
	void SetColor(Color color)
	{
		throw NotImplementedException();
	}

	float Area()
	{
		throw NotImplementedException();
	}
	float Perimeter()
	{
		throw NotImplementedException();
	}

private:

};
