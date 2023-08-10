#pragma once
#include <algorithm>
#include "NotImplementedException.h"

class Color
{
public:
    Color(int rgb = 0) { throw NotImplementedException(); }
    Color(unsigned r, unsigned g, unsigned b) { throw NotImplementedException(); }
    unsigned Red() const { throw NotImplementedException(); }
    unsigned Green() const { throw NotImplementedException(); }
    unsigned Blue() const { throw NotImplementedException(); }

    unsigned Rgb() const { throw NotImplementedException(); }

    Color add(const Color &other) const
    {
        throw NotImplementedException();
    }

private:

};
