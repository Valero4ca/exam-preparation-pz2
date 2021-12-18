
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, bin = 0, k = 1;
    std::cin >> a;
    
    while (a != 0) {
        bin += (a % 2) * k;
        k *= 10;
        a /= 2;
    }

    std::cout << bin;
    return 0;
}

