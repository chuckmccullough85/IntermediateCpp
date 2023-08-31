#pragma once
#include <string>
#include <list>
#include <vector>
#include <concepts>
#include <numeric>
#include "Measurable.h"

namespace training::landscape
{
    using MeasurableList = std::list<const Measurable *>;

    class Landscape : public Measurable
    {
    public:
        Landscape(const std::string &name)
        {
            this->name = name;
        }
        std::string Name() const { return name; }
        void SetName(const std::string &name)
        {
            this->name = name;
        }
        void Add(const Measurable *measurable)
        {
            shapes.push_back(measurable);
        }

        float Area() const
        {
            float total = 0;
            for_each(shapes.begin(), shapes.end(), 
                [&](const Measurable *m) {
                    total += m->Area();
            });
            return total;
        }
        
        float Perimeter() const
        {
            return std::accumulate(shapes.begin(), shapes.end(), 0.0f,
                [](float total, const Measurable *m) {
                    return total + m->Perimeter();
            });
        }

    private:
        std::string name;
        MeasurableList shapes;
    };

}