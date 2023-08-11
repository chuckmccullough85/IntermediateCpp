#pragma once
#include <string>
#include "Circle.h"
#include "CircleList.h"

namespace training::landscape
{
    using namespace training::geometry;
    using namespace training::utility;

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
        void Add(const Circle* circle)
        {
            shapes.AddCircle(circle);
        }
        float Area() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Circle* c = nullptr;
            while ((c = it.next()) != nullptr)
                total += c->Area();
            return total;
        }
        float Perimeter() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Circle* c = nullptr;
            while ((c = it.next()) != nullptr)
                total += c->Perimeter();
            return total;
        }

    private:
        std::string name;
        CircleList shapes;
    };

}