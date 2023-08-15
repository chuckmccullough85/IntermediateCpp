#include <iostream>
#include <gtest/gtest.h>
#include <stdexcept>
#include "../Color.h"

using namespace std;
namespace training::utility::tests
{
    class ColorTest : public ::testing::Test
    {
    public:
        ColorTest() : c1(0x80, 0x60, 0x30) {}
        void SetUp() override
        {
        }
        Color c1;
    };

    TEST_F(ColorTest, Color)
    {
        ASSERT_EQ(0x806030, c1.Rgb());
    }
    TEST_F(ColorTest, RGB)
    {
        ASSERT_TRUE(c1.Red() == 0x80 &&
                    c1.Green() == 0x60 &&
                    c1.Blue() == 0x30);
    }

    void func(int rgb) {}
    void anotherfunc(Color c) {}

    TEST_F(ColorTest, IntConversion)
    {
        Color color(2, 3, 6);
        func(color);
        anotherfunc(33);
    }

    TEST_F(ColorTest, ColorAddition)
    {
        Color c1(1, 2, 250);
        Color c2(3, 2, 20);
        Color result;
        result = c1 + c2; //  c1 -> int,  c2 -> int  add the ints,  create a color(int)
        ASSERT_EQ(result.Rgb(), 0x0404FF);
    }

    TEST_F(ColorTest, ColorStream)
    {
        cout << c1 << endl;
    }


}