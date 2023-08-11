#pragma once
#include <algorithm>
#include <iostream>

namespace training::utility
{
    class Color
    {
    public:
        static Color RED;
        static Color GREEN;
        static Color BLUE;
        static Color WHITE;
        static Color BLACK;

        Color(int rgb = 0) { this->rgb = rgb; }
        Color(unsigned r, unsigned g, unsigned b) { rgb = (r << 16) | (g << 8) | b; }
        unsigned Red() const { return (rgb & 0xff0000) >> 16; }
        unsigned Green() const { return (rgb & 0xff00) >> 8; }
        unsigned Blue() const { return rgb & 0xff; }

        void SetRed(int v)
        {
            check_color(v);
            rgb = v << 16 | Green() | Blue();
        }
        void SetGreen(int v)
        {
            check_color(v);
            rgb = v << 8 | Red() | Blue();
        }
        void SetBlue(int v)
        {
            check_color(v);
            rgb = v  | Green() | Red();
        }

        unsigned Rgb() const { return rgb; }

        Color add(const Color& other) const
        {
            return Color(
                std::min(255u, Red() + other.Red()),
                std::min(255u, Green() + other.Green()),
                std::min(255u, Blue() + other.Blue()));
        }
        operator int() const { return Rgb(); }
        Color operator + (const Color& other) const
        {
            return add(other);
        }
        friend std::ostream& operator << (std::ostream& out, const Color& color);
    private:
        void check_color(int v)
        {
            if (v < 0 || v > 255) throw std::invalid_argument("Invalid Color");
        }
        unsigned rgb;
    };
}
