#include "Recursion.h"

int Recursion::Factorial(int num)
{
    if(num == 1 || num == 0)
        return 1;

    return num * Recursion::Factorial(num - 1);
}

int Recursion::Fibonacci(int num)
{
    if(num == 1 || num == 0)
        return num;

    return Recursion::Fibonacci(num - 1) + Recursion::Fibonacci(num - 2);
}

void Recursion::TowerOfHanoi(int disks, int src, int dst, int aux)
{
    if (disks == 1) {
        std::cout << src << " -> " << dst << std::endl;
        return;
    }

    Recursion::TowerOfHanoi(disks - 1, src, aux, dst);
    std::cout << src << " -> " << dst << std::endl;
    Recursion::TowerOfHanoi(disks - 1, aux, dst, src);
}
