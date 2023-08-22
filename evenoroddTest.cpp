#include <gtest/gtest.h>
#include"evenorodd.cpp"

// Test case
TEST(IsEvenTest, EvenNumbers) {
    EXPECT_TRUE(IsEven(2));
    EXPECT_TRUE(IsEven(10));
    EXPECT_TRUE(IsEven(100));
}

TEST(IsEvenTest, OddNumbers) {
    EXPECT_FALSE(IsEven(3));
    EXPECT_FALSE(IsEven(15));
    EXPECT_FALSE(IsEven(101));
}

// Main function
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
