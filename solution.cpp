#include<iostream>
 
#include "squares.h"

int main()
{
    int n = 4;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Total squares: " << calculateTotalSquares(n);
}