#include <iostream>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Russian");
	double x = 0, s = 0, add, eps;
	int i = 0;
	while (!(x > 1))
	{
		std::cout << "Введите х>1: ";
		std::cin >> x;

	}
	std::cout << "Введите eps: ";
	std::cin >> eps;
	do {
		add = 1 / ((1 + 2 * (double)i) * pow(x, (i + 1)));
		s += add;
	} while (abs(s) != 0 && abs(add) < eps);
	std::cout << "Результат: "<< s;
}

