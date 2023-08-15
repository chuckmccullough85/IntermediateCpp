#pragma once
#include <string>
#include "Color.h"

constexpr double PI = 3.141592653589;

namespace training::geometry
{
	using namespace training::utility;
	class Circle
	{
	public:
		Circle() {}

		Circle(float radius, std::string name, Color color)
			: color(color), name(name)
		{
			SetRadius(radius);
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

		float Area() const
		{
			return Radius() * Radius() * (float)PI;
		}
		float Perimeter() const
		{
			return Radius() * 2 * (float)PI;
		}

	private:
		std::string name;
		Color color;
		float radius;
	};
}