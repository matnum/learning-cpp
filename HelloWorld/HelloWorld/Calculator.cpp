#include <iostream>

double add(int x, int y)
{
	return x + y;
}

double subtract(int x, int y)
{
	return x - y;
}

double multiply(int x, int y)
{
	return x * y;
}

double devide(int x, int y)
{
	return x / y;
}

double req1()
{
	double a;
	std::cout << "Enter the first variable: " << std::endl;
	std::cin >> a;
	return a;
}

double req2()
{
	double b;
	std::cout << "Enter the second variable: " << std::endl;
	std::cin >> b;
	return b;
}

double req3()
{
	double op;
	std::cout << "Enter the mathematical operator: (1 = + , 2 = - , 3 = * , 4 = /) " << std::endl;
	std::cin >> op;
	return op;
}

void calculate() {
	int p, q, r;
	p = req1();
	q = req2();
	r = req3();
	if (r == 1) {
		std::cout << p << " + " << q << " = " << add(p, q) << std::endl;
	}
	else if (r == 2) {
		std::cout << p << " - " << q << " = " << subtract(p, q) << std::endl;
	}
	else if (r == 3) {
		std::cout << p << " * " << q << " = " << multiply(p, q) << std::endl;
	}
	else if (r == 4) {
		std::cout << p << " / " << q << " = " << devide(p, q) << std::endl;
	}
	else {
		std::cout << "Enter a valid operator..." << std::endl;
	}
}


int main()
{
	calculate();
}