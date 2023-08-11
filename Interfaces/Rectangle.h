#pragma once
#include <string>
#include "Shape.h"

namespace training::geometry
{
	using namespace training::utility;

	class Rectangle : public Shape
	{
	public:
		Rectangle() : Rectangle(1, 1, "Noname", Color::BLUE) {}
		Rectangle(float width, float height, std::string name, Color color)
			:Shape (name, color), width(width), height(height)
		{}

		float Width() const { return width; }
		float Height() const { return height; }
		void SetDimension(float width, float height)
		{
			this->width = width;
			this->height = height;
		}

		float Area() const override
		{
			return Width() * Height();
		}
		float Perimeter() const override
		{
			return (Width() + Height()) * 2;
		}

	private:
		float width;
		float height;
	};

}