#include <gtest/gtest.h>
#include "sumof.cpp"

// Test case
TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(Sum(2, 3), 5);
    EXPECT_EQ(Sum(100, 200), 300);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(Sum(-5, -10), -15);
    EXPECT_EQ(Sum(-100, -200), -300);
}

TEST(SumTest, ZeroNumbers) {
    EXPECT_EQ(Sum(0, 0), 0);
    EXPECT_EQ(Sum(0, 10), 10);
    EXPECT_EQ(Sum(10, 0), 10);
}

// Main function
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
