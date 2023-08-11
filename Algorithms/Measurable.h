#pragma once

namespace training::landscape  // because this class belongs to the landscape team
{
    class Measurable {          // a lot of interfaces end with -able (capable-of instead of kind-of)
    public:
        virtual float Area() const = 0;
        virtual float Perimeter() const = 0;
        virtual ~Measurable() = default;
    };
}