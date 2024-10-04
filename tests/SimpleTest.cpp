#include <gtest/gtest.h>
#include "../main.cpp"
#include <cstddef>


TEST(SimpleTest, byteReverse) {
	std::byte x{ 97 };
	std::byte y{ 67 };
	EXPECT_EQ(
		y,
		byteReverse(x)
	);
}