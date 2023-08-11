#pragma once
#include <string>
#include "Circle.h"

class Landscape
{
public:
    Landscape(const std::string &name)
    {
        this->name = name;
        shapes = new const Circle *[10];
        count = 0;
    }
    std::string Name() const { return name; }
    void SetName(const std::string &name)
    {
        this->name = name;
    }
    void Add(const Circle *circle)
    {
        shapes[count++] = circle;
    }
    float Area() const
    {
        float total = 0;
        for (int i = 0; i < count; i++)
            total += shapes[i]->Area();
        return total;
    }
    float Perimeter() const
    {
        float total = 0;
        for (int i = 0; i < count; i++)
            total += shapes[i]->Perimeter();
        return total;
    }

private:
    std::string name;
    const Circle **shapes;
    int count;
};
