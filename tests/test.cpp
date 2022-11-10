#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTests, testArea) {
    Rectangle *aRectangle = new Rectangle(4,5);
    EXPECT_EQ (aRectangle->area(),20);
}

TEST(AreaTests, testArea) {
    Rectangle *aRectangle = new Rectangle(4,5);
    EXPECT_EQ (aRectangle->area(),20);
}

TEST(PerimeterTests, testPerimeter) {
    Rectangle *aRectangle = new Rectangle(4,4);
    EXPECT_EQ (aRectangle->area(),16);
}
