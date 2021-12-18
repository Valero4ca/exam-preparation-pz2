#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    const float pi = 3.14;
    float a=-0.4*pi, b= 0.4*pi, h=0.5;
    while (a<=b) {
        std::cout << "y("<< a <<"): " << pow(a, 2) * sqrt(15 + 10 * sin(a + pi)) << std::endl;
        a += h;
    }
    return 0;
}

