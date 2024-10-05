#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../main.cpp"
#include <cstddef>


TEST(SimpleTest, byteReverse) {
	std::byte x{ 97 };
	std::byte y{ 67 };
	EXPECT_EQ(
		y,
		byteReverse(x)
	);
	std::byte b{ 30 };
	std::byte c{ 15 };
	EXPECT_EQ(
		y,
		byteReverse(x)
	);
}

TEST(SimpleFalseTest, byteReverse) {
	std::byte x{ 100 };
	std::byte y{ 50 };
	EXPECT_THAT(
		x,
		testing::Not(byteReverse(y))
	);
}