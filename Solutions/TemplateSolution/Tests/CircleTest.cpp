#include "gtest/gtest.h"
#include "../Circle.h"
#include "../Color.h"

namespace training::geometry::tests
{
    class CircleTest : public ::testing::Test
    {
    public:
        CircleTest() : name("Cindy"), color(30, 30, 10) {}

    protected:
        void SetUp() override
        {
            c1.SetName(name);
            c1.SetColor(color);
            c1.SetRadius(radius);
        }
        double radius = 10;
        std::string name;
        Color color;
        Circle c1;
    };

    TEST_F(CircleTest, Name)
    {
        ASSERT_EQ(name, c1.Name());
    }

    TEST_F(CircleTest, Size)
    {
        ASSERT_FLOAT_EQ(radius, c1.Radius());
    }

    TEST_F(CircleTest, Color)
    {
        ASSERT_EQ(color.Rgb(), c1.GetColor().Rgb());
    }

    TEST_F(CircleTest, SetColor)
    {
        Circle c1;
        c1.SetColor(202);
        ASSERT_EQ(202, c1.GetColor().Rgb());
    }
    TEST_F(CircleTest, Area)
    {
        ASSERT_NEAR(314, c1.Area(), .2f);
    }

    TEST_F(CircleTest, Perimeter)
    {
        ASSERT_NEAR(62.8f, c1.Perimeter(), .2f);
    }
    TEST_F(CircleTest, InvalidRadius)
    {
        ASSERT_THROW(c1.SetRadius(-1), std::invalid_argument);
    }

    TEST_F(CircleTest, DISABLED_CircleAdd)
    {
        // auto c2 = c1 + c1;
        // ASSERT_NEAR(c2.Area(), c1.Area() * 2, .01);
    }

    TEST_F(CircleTest, DISABLED_CircleIncrement)
    {
        auto area = c1.Area();
 //       ++c1;
        ASSERT_NEAR(c1.Area(), area + 1, .01);
    }

    TEST_F(CircleTest, DISABLED_CirclePlusEqual)
    {
        auto area = c1.Area();
//        c1 += 20;
        ASSERT_NEAR(c1.Area(), area + 20, .01);
    }

    TEST_F(CircleTest, DISABLED_ostream)
    {
        //    cout << c1 << endl;
    }
}