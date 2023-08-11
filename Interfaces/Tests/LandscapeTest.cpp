#include <stdexcept>
#include "gtest/gtest.h"
#include "../Landscape.h"
#include "../Circle.h"
#include "../Rectangle.h"

namespace training::landscape::tests
{
    class LandscapeTest : public ::testing::Test
    {
    public:
        LandscapeTest() : sut("Test") {}

    protected:
        void SetUp() override
        {
            c1.SetRadius(10);
            c2.SetRadius(20);
            sut.Add(&c1);
            sut.Add(&c2);
            sut.Add(&r1);
        }
        Landscape sut;
        Circle c1;
        Circle c2;
        Rectangle r1={10, 10, "Ricky", Color::GREEN};
    };


    TEST_F(LandscapeTest, Name)
    {
        ASSERT_EQ("Test", sut.Name());
    }

    TEST_F(LandscapeTest, Area)
    {
        ASSERT_NEAR(1670, sut.Area(), 1.0f);
    }

    TEST_F(LandscapeTest, Perimeter)
    {
        ASSERT_NEAR(228, sut.Perimeter(), 1.0f);
    }

}