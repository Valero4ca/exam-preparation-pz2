#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double  fraction, integer;
	int add=0;
	double number;
	std::cin >> number;
	while (number > 0) {
		number/= 10;
		fraction = modf(number, &integer); 
		fraction *= 10;
		if (std::lround(fraction) == 2) {
			add++;
		}
		number = integer;

	}
	std::cout << "Количество двоек в числе : "<< add;
}

