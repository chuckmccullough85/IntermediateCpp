#pragma once
#include <string>
#include <numbers>
#include <cmath>
#include "Color.h"
#include "Shape.h"

constexpr double PI = std::numbers::pi;

namespace training::geometry
{
	using namespace training::utility;
	class Circle : public Shape
	{
	public:
		Circle() : Circle(0, "", Color::BLACK) {}

		Circle(float radius, std::string name, Color color)
			:Shape(name, color)
		{
			SetRadius(radius);
		}

		float Radius() const { return radius; }
		void SetRadius(float radius)
		{
			if (radius < 0)
				throw std::invalid_argument("Radius cannot be negative");
			this->radius = radius;
		}

		float Area()  const override
		{
			return Radius() * Radius() * PI;
		}
		float Perimeter() const override
		{
			return 2 * PI * Radius();
		}

		Circle operator + (const Circle& c2) const   // c1 + c2
		{
			float area = Area() + c2.Area();
			float radius = (float)std::sqrt(area / PI);
			return Circle(radius, "Result", 0);
		}
		Circle& operator += (int value)
		{
			SetRadius((float)std::sqrt((Area() + value) / PI));
			return *this;
		}
		Circle& operator ++()
		{
			return operator +=(1); // (*this) += 1;
		}
		void operator ++(int) // postfix
		{
			++(*this);  // or this->operator++();
		}
		friend std::ostream& operator << (std::ostream& out, const Circle& c);
	private:
		float radius;
	};
	
	inline std::ostream& operator << (std::ostream& out, const Circle& c)
	{
		out << "A circle with an area of " << c.Area()
			<< " and a radius of " << c.radius;
		return out;
	}
}