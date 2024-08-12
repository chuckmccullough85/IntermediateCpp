#include <gtest/gtest.h>
#include "../Color.h"



class ColorTest : public testing::Test
{
protected:
    void SetUp() override
    {
        c1 = new Color(255, 0, 255);
        c2 = new Color(0, 255, 150);
    }
    void TearDown() override
    {
        delete c1;
        delete c2;
    }

    Color* c1;
    Color* c2;
};

TEST_F(ColorTest, DISABLED_TestStatics)
{
    // EXPECT_EQ(0xff0000, Color::RED.Rgb());
    // EXPECT_EQ(0x00ff00, Color::GREEN.Rgb());
    // EXPECT_EQ(0xff, Color::BLUE.Rgb());
    // EXPECT_EQ(0xffffff, Color::WHITE.Rgb());
    // EXPECT_EQ(0x00, Color::BLACK.Rgb());
    FAIL();
}
TEST_F(ColorTest, TestRed)
{
    ASSERT_EQ(255, c1->Red());
}

TEST_F(ColorTest, TestGreen)
{
    ASSERT_EQ(0, c1->Green());
    ASSERT_EQ(255, c2->Green());
}

TEST_F(ColorTest, TestBlue)
{
    ASSERT_EQ(255, c1->Blue());
    ASSERT_EQ(150, c2->Blue());
}

TEST_F(ColorTest, TestAdd)
{
    auto c3 = c1->add(*c2);
    EXPECT_EQ(0xffffff, c3.Rgb());
}
