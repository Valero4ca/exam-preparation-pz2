#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    double x=0, eps,s=0,add;
    int i=1;
   
    while (!(x>0.5)){
        std::cout << "Введите значение x > 1/2: ";
        std::cin >> x;
    }
    std::cout << "Введите значение точность вычисления: ";
    std::cin >> eps;
    do {
        add = pow(x - 1, i) / (i * pow(x, i));
        s+=add ;
        i++;

    } while (fabs(s)<eps && fabs(add)<eps);
    std::cout << "Результат"<< s;
    return 0;
}
