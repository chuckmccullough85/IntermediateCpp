#include <stdexcept>
#include "gtest/gtest.h"
#include "../Landscape.h"

namespace training::landscape::tests
{
    class dummy : public Measurable
    {
    public:
        float Area() const override { return 5; }
        float Perimeter() const override { return 3; }
    };
    class LandscapeTest : public ::testing::Test
    {
    public:
        LandscapeTest() : sut("Test") {}

    protected:
        void SetUp() override
        {
            sut.Add(&d1);
            sut.Add(&d2);
            sut.Add(&d3);
        }
        Landscape sut;
        dummy d1;
        dummy d2;
        dummy d3;
    };

    TEST_F(LandscapeTest, CompositeTest)
    {
        Landscape neighborhood("");
        neighborhood.Add(&sut);
        neighborhood.Add(&d3);
        ASSERT_EQ(20.0f, neighborhood.Area());
    }

    TEST_F(LandscapeTest, Name)
    {
        ASSERT_EQ("Test", sut.Name());
    }

    TEST_F(LandscapeTest, Area)
    {
        ASSERT_NEAR(15, sut.Area(), .01f);
    }

    TEST_F(LandscapeTest, Perimeter)
    {
        ASSERT_NEAR(9, sut.Perimeter(), .01f);
    }

}