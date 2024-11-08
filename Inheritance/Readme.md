## Overview

We will implement an inheritance hierarchy for shapes.

| | |
| --------- | --------------------------- |
| Exercise Folder | Inheritance |
| Builds On | SmartPointers |
| Time to complete | 30 minutes

> Note - if  you did not complete the *SmartPointers* lab, you can start with the *Inheritance* project.

- Create a new class in the geometry namespace called *Shape* 
- Modify *Circle* to inherit from *Shape*
- Promote members common to both *Rectangle* and *Circle* to *Shape*
- Modify *Rectangle* to inherit from *Shape*
- Re-run tests
- Modify *Landscape* to accept *Shapes* rather than Circles
- Modify *LandscapeTest* to add both Circle and Rectangle to the landscape

---

:::spoiler
*Shape.h*
```c++
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
```

*Circle.h*
```c++
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
			:Shape(name, color), radius(radius)
		{}

		float Radius() const { return radius; }
		void SetRadius(float radius)
		{
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
```

*Landscape.h*
```c++
#pragma once
#include <string>
#include "Shape.h"
#include "LinkedList.h"

namespace training::landscape
{
    using namespace training::geometry;

    class Landscape
    {
    public:
        Landscape(const std::string& name)
        {
            this->name = name;
        }
        std::string Name() const { return name; }
        void SetName(const std::string& name)
        {
            this->name = name;
        }
        void Add(const Shape* shape)
        {
            shapes.add(shape);
        }
        float Area() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Shape* s;
            while ((s = it.next()) != nullptr)
                total += s->Area();
            return total;
        }
        float Perimeter() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Shape* s;
            while ((s = it.next()) != nullptr)
                total += s->Perimeter();
            return total;
        }

    private:
        std::string name;
        training::templates::LinkedList<Shape> shapes;
    };

}
```

:::