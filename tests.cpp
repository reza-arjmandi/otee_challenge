#include <gtest/gtest.h>
#include "squares.h"

TEST(CalculateTotalSquaresTest, PositiveNos) { 
    EXPECT_EQ(1, calculateTotalSquares(1));
    EXPECT_EQ(5, calculateTotalSquares(2));
    EXPECT_EQ(14, calculateTotalSquares(3));
    EXPECT_EQ(30, calculateTotalSquares(4));
    EXPECT_EQ(55, calculateTotalSquares(5));
}

TEST(CalculateTotalSquaresTest, Zero) {
    EXPECT_EQ(0, calculateTotalSquares(0));
}
