#include <gtest/gtest.h>
#include "../Color.h"

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

}