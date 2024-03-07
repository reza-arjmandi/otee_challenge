#include <gtest/gtest.h>
#include "squares.h"

TEST(TotalSquaresTest, PositiveNumbers) { 
    EXPECT_EQ(1, totalSquares(1));
    EXPECT_EQ(5, totalSquares(2));
    EXPECT_EQ(14, totalSquares(3));
    EXPECT_EQ(30, totalSquares(4));
    EXPECT_EQ(55, totalSquares(5));
}

TEST(TotalSquaresTest, Zero) {
    EXPECT_EQ(0, totalSquares(0));
}
