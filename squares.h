#pragma once

/**
 * Solves the "How many squares?" problem on an infinite lattice with an n x n square.
 * 
 * This function addresses the problem by recognizing the pattern in the number of squares
 * that can be formed within an n x n grid. It's important to understand that the total
 * number of squares is not limited to the n^2 individual 1 x 1 squares. It also includes
 * larger squares formed by combining these smaller squares.
 * 
 * For example:
 * - For n = 1, there's exactly 1 square.
 * - For n = 2, there are 4 (1x1) squares and 1 (2x2) square, totaling 5 squares.
 * - For n = 3, there are 9 (1x1) squares, 4 (2x2) squares, and 1 (3x3) square, totaling 14 squares.
 * 
 * To generalize, the number of k x k squares in an n x n grid can be calculated by considering
 * how many positions a k x k square can occupy, which is (n-k+1)^2, since a k x k square can be
 * placed in any corner of an (n-k+1) x (n-k+1) area.
 * 
 * Therefore, the total number of squares in an n x n grid is the sum of the squares of the
 * integers from 1 up to n. This sum can be calculated using the formula:
 * ∑_{k=1}^{n} k^2 = n(n + 1)(2n + 1)/6
 * 
 * This formula accurately calculates the total number of squares that can be formed within an
 * n x n square on an infinite lattice. You can use this function to find the total number of
 * squares for any arbitrary value of n.
 * 
 * @param n The size of the grid (n x n), where n is a positive integer.
 * @return The total number of squares that can be formed within the grid.
 */
int calculateTotalSquares(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}