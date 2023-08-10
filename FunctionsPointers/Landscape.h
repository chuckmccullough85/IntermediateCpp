#pragma once
#include <string>
#include "Circle.h"
#include "NotImplementedException.h"

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
            throw NotImplementedException();
        }
        float Area() const
        {
            throw NotImplementedException();
        }
        float Perimeter() const
        {
            throw NotImplementedException();
        }

    private:
        std::string name;
    };
