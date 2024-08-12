#pragma once
#include <algorithm>
#include "NotImplementedException.h"

class Color
{
public:
    Color(int rgb = 0) { this->rgb = rgb; }
    Color(unsigned r, unsigned g, unsigned b) { setRgb(r, g, b); }
    unsigned Red() const { return rgb >> 16; }
    unsigned Green() const { return (rgb >> 8) & 0x00ff; }
    unsigned Blue() const { return rgb & 0xff; }

    unsigned Rgb() const { return rgb; }

    Color add(const Color &other) const
    {
       return Color (std::min(255u, Red() + other.Red()),
                    std::min(255u, Green() + other.Green()),
                    std::min(255u, Blue() + other.Blue()));
    }

private:
    void setRgb(unsigned r, unsigned g, unsigned b) { 
        rgb = (r << 16) | (g << 8) | b;
    
    }
    unsigned rgb;

};
