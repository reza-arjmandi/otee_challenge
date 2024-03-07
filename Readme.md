# How many squares?

## Description

Solves the "How many squares?" problem on an infinite lattice with an n x n square.

This project calculates the number of squares that can be formed within an n x n grid. 
It's important to understand that the total number of squares is not limited to the n^2 
individual 1 x 1 squares. It also includes larger squares formed by combining these smaller squares.

For example:
- For n = 1, there's exactly 1 square.
- For n = 2, there are 4 (1x1) squares and 1 (2x2) square, totaling 5 squares.
- For n = 3, there are 9 (1x1) squares, 4 (2x2) squares, and 1 (3x3) square, totaling 14 squares.

To generalize, the number of k x k squares in an n x n grid can be calculated by considering
how many positions a k x k square can occupy, which is (n-k+1)^2, since a k x k square can be
placed in any corner of an (n-k+1) x (n-k+1) area.

Therefore, the total number of squares in an n x n grid is the sum of the squares of the
integers from 1 up to n. This sum can be calculated using the formula:
n(n + 1)(2n + 1)/6

This formula accurately calculates the total number of squares that can be formed within an
n x n square on an infinite lattice. You can use this project to find the total number of
squares for any arbitrary value of n.

## Prerequisites

Before building and running this project, ensure you have the following installed:

- **CMake** (version 3.1 or higher)
- A **C++ compiler** (GCC, Clang, MSVC, etc.) supporting C++17 or higher

### Build

To build the project:

```bash
cmake -S . -B build
cmake --build build
```

### Run

```bash
# Run console app
./build/app

# Run tests
./build/tests

# on Windows:
./build/Debug/app.exe       
./build/Debug/tests.exe
