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
		throw NotImplementedException();
	}

	float Width() const { throw NotImplementedException(); }
	float Height() const { throw NotImplementedException(); }
	std::string Name() const { throw NotImplementedException(); }
	Color GetColor() const { throw NotImplementedException(); }
	void SetDimension(float width, float height)
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

