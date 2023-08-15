#include <stdexcept>
#include "gtest/gtest.h"
#include "../Landscape.h"
#include "../Circle.h"

namespace training::landscape::test
{
    using namespace training::geometry;
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
        }
        Landscape sut;
        Circle c1;
        Circle c2;
    };

    TEST_F(LandscapeTest, Name)
    {
        ASSERT_EQ("Test", sut.Name());
    }

    TEST_F(LandscapeTest, Area)
    {
        ASSERT_NEAR(1570, sut.Area(), 1.0f);
    }

    TEST_F(LandscapeTest, Perimeter)
    {
        ASSERT_NEAR(188, sut.Perimeter(), 1.0f);
    }
}