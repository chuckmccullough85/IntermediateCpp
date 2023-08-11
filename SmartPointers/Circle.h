#pragma once
#include <string>
#include <numbers>
#include <cmath>
#include "Color.h"

constexpr double PI = std::numbers::pi;

namespace training::geometry
{
	using namespace training::utility;
	class Circle
	{
	public:
		Circle() : Circle(0, "", Color::BLACK) {}

		Circle(float radius, std::string name, Color color)
			:radius(radius), name(name), color(color)
		{
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

		float Area()  const
		{
			return (float)(Radius() * Radius() * PI);
		}
		float Perimeter() const
		{
			return (float)(2 * PI * Radius());
		}

		Circle operator + (const Circle& c2) const   // c1 + c2
		{
			float area = Area() + c2.Area();
			float radius = std::sqrt(area / PI);
			return Circle(radius, "Result", 0);
		}
		Circle& operator += (int value)
		{
			SetRadius((float)std::sqrt((Area() + value) / PI));
			return *this;
		}
		Circle& operator ++()		// func (++c)
		{
			return operator +=(1); // (*this) += 1;
		}
		void operator ++(int) // postfix   func(c++);
		{
			++(*this);  // or this->operator++();
		}
		friend std::ostream& operator << (std::ostream& out, const Circle& c);
	private:
		std::string name;
		Color color;
		float radius;
	};
	inline std::ostream& operator << (std::ostream& out, const Circle& c)
	{
		out << "A circle with an area of " << c.Area()
			<< " and a radius of " << c.radius;
		return out;
	}
}