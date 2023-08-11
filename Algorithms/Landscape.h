#pragma once
#include <string>
#include <list>
#include "Measurable.h"


namespace training::landscape
{
    using MeasurableList = std::list<const Measurable*>;

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
            measurables.push_back(measurable);
        }
        float Area() const
        {
            float total = 0;
            for (auto m : measurables)
                total += m->Area();
            return total;
        }
        float Perimeter() const
        {
            float total = 0;
            for (auto m : measurables)
                total += m->Perimeter();
            return total;
        }

    private:
        std::string name;
        MeasurableList measurables;
    };

}