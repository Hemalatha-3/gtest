#include <gtest/gtest.h>
#include "stringconcat.cpp"

// Test case
TEST(ConcatenateStringsTest, ValidStrings) {
    std::string result = ConcatenateStrings("Hello, ", "World!");
    EXPECT_EQ(result, "Hello, World!");

    result = ConcatenateStrings("Open", "AI");
    EXPECT_EQ(result, "OpenAI");
}

TEST(ConcatenateStringsTest, EmptyStrings) {
    std::string result = ConcatenateStrings("", "");
    EXPECT_EQ(result, "");

    result = ConcatenateStrings("Hello", "");
    EXPECT_EQ(result, "Hello");

    result = ConcatenateStrings("", "World");
    EXPECT_EQ(result, "World");
}

// Main function
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
