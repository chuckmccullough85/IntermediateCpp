#include "gtest/gtest.h"
#include "../Rectangle.h"
#include "../Color.h"

class RectangleTest : public ::testing::Test {
  public:
    RectangleTest() : name("Randy"), color(20, 50, 20) {}

  protected:
    
    void SetUp() override {
      r1.SetName(name);
      r1.SetColor(color);
      r1.SetDimension(width, height);

    }
    float width = 10;
    float height = 5;
    std::string name;
    Color color;
    Rectangle r1;

};

TEST_F(RectangleTest, Name) {
  ASSERT_EQ(name, r1.Name());
}

TEST_F(RectangleTest, Size) {
  ASSERT_DOUBLE_EQ(width, r1.Width());
  ASSERT_DOUBLE_EQ(height, r1.Height());
}

TEST_F(RectangleTest, Color)
{
  ASSERT_EQ(color.Rgb(), r1.GetColor().Rgb());
}
TEST_F(RectangleTest, Area)
{
  ASSERT_DOUBLE_EQ(50, r1.Area());
}
TEST_F(RectangleTest, Perimeter)
{
  ASSERT_DOUBLE_EQ(30, r1.Perimeter());
}