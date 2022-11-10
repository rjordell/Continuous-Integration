#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(RectangleTests, testArea1) {
	Rectangle *RectangleA = new Rectangle(2, 5);
	EXPECT_EQ (RectangleA->area(), 10);
}

TEST(RectangleTests, testArea2) {
	Rectangle *RectangleB = new Rectangle(3, 6);
	EXPECT_EQ (RectangleB->area(), 18);
}

TEST(RectangleTests, testPerimeter1) {
	Rectangle *RectangleC = new Rectangle(8, 8);
	EXPECT_EQ (RectangleC->perimeter(), 32);
}

TEST(RectangleTests, testPerimeter2) {
	Rectangle *RectangleD = new Rectangle(1, 4);
	EXPECT_EQ (RectangleD->perimeter(), 10);
}
