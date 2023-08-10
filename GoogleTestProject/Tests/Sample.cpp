#include "gtest/gtest.h"

class SampleTest : public ::testing::Test
{
public:
 
protected:
  void SetUp() override
  {
  }
};

TEST_F(SampleTest, Sample)
{
  ASSERT_EQ(1, 1);
}
