#include<iostream>
 
#include "squares.h"

int main()
{
    int n = 0;
    std::cout << "Enter grid size: ";
    std::cin >> n;
    std::cout << "Total squares in " << n << " x " << n << " grid is: " << totalSquares(n);
}