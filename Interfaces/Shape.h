#pragma once
#include <string>
#include "Color.h"

namespace training::geometry {
	using namespace training::utility;

	class Shape
	{
	public:
		Shape(std::string name, Color c) : name(name), color(c) {}
		std::string Name() const { return name; }
		Color GetColor() const { return color; }
		void SetName(std::string name)
		{
			this->name = name;
		}
		void SetColor(Color color)
		{
			this->color = color;
		}

		virtual float Area()  const = 0;
		virtual float Perimeter() const = 0;

	private:
		std::string name;
		Color color;
	};

}