#include "squareroot.cpp"
#include "gtest/gtest.h"

TEST(SquareRootTest, PositiveNos) 
{ 
    ASSERT_EQ (18.0, squareRoot(324.0));
    ASSERT_EQ (5.5, squareRoot(30.25));
    ASSERT_EQ (2, squareRoot(4));
}

TEST (SquareRootTest, ZeroAndNegativeNos) 
{ 
    ASSERT_EQ (-1.0, squareRoot(-14.0));
    ASSERT_EQ (-1.0, squareRoot(-0.2));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
