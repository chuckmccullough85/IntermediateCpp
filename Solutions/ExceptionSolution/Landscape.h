#pragma once
#include <string>
#include "Measurable.h"
#include "LinkedList.h"

namespace training::landscape
{
    class Landscape : public Measurable
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
        void Add(const Measurable* measurable)
        {
            shapes.add(measurable);
        }
        float Area() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Measurable* s;
            while ((s = it.next()) != nullptr)
                total += s->Area();
            return total;
        }
        float Perimeter() const
        {
            float total = 0;
            auto it = shapes.begin();
            const Measurable* s;
            while ((s = it.next()) != nullptr)
                total += s->Perimeter();
            return total;
        }

    private:
        std::string name;
        training::templates::LinkedList<Measurable> shapes;
    };

}