#include <gtest/gtest.h>
#include "reversestring.cpp"

// Test case
TEST(ReverseStringTest, NonEmptyString) {
    std::string str = "Hello, World!";
    EXPECT_EQ("!dlroW ,olleH", ReverseString(str));
}

TEST(ReverseStringTest, EmptyString) {
    std::string str;
    EXPECT_EQ("", ReverseString(str));
}

// Main function
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
