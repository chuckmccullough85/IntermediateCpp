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