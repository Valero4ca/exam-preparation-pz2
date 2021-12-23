#include <iostream>
#include<math.h>

int main()
{ 
    double a=-2, b=0.8, h=0.2;
    const double p = 3.14;
    while (a <= b) {
        std::cout << "y["<< a << "]" << (a * cos(p / 4) - pow(a, 2)) / (1 - 2 * a * cos(p / 4) + pow(a, 2))<<std::endl;
        a += h;
    }
    
}

