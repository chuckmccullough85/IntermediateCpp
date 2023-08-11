#include <iostream>
#include "color.h"
namespace training::utility
{
    Color Color::RED(255, 0, 0);
    Color Color::GREEN(0, 255, 0);
    Color Color::BLUE(0, 0, 255);
    Color Color::WHITE(255, 255, 255);
    Color Color::BLACK(0, 0, 0);


    std::ostream& operator << (std::ostream& out, const Color& color)
    {
        out << "Color (" << std::hex << color.Red()
            << ", " << color.Green()
            << ", " << color.Blue() << ")" << std::dec;
        return out;
    }
}