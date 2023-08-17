#include "cubic.cpp"
#include <gtest/gtest.h>

TEST(testMath, myCubeTest)
{
    EXPECT_EQ(1000, cubic(10));
    EXPECT_NE(10, cubic(1));	
}

  int main(int argc, char **argv)

  {

    	testing::InitGoogleTest(&argc, argv);
 	return RUN_ALL_TESTS();
  }
