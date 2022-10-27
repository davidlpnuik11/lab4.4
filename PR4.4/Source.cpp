#include<iostream>
#include<iomanip>
#include<cmath>
#define vidstup std::setw
#define nuli std::setprecision

int main()
{
	double xp, xk, dx, x, i;
	// double F1 = -2, F2 = 1. * x/4, F3 = x * x, F4 = -x * (1. / 2) + 5;
	std::cout << "xp = "; std::cin >> xp;
	std::cout << "xk = "; std::cin >> xk;
	std::cout << "dx = "; std::cin >> dx;
	std::cout << std::fixed;
	std::cout << "---------------------------" << '\n';
	std::cout << "|" << std::setw(6) << "x" << std::setw(5) << " |"
		<< std::setw(8) << "F" << std::setw(7) << " |" << '\n';
	std::cout << "---------------------------" << '\n';
	x = xp;
	std::cout << std::setprecision(2);
	for (i = xp; i <= xk; i += dx)
	{
		if (i <= -4)
			std::cout << nuli(1) << "| " << vidstup(5) << i << vidstup(5) << "|" << vidstup(8) << -2 << nuli(2) << vidstup(7) << "|" << '\n';
		else
			if(i > -4 && i <= 0)
			std::cout << nuli(1) << "| " << vidstup(5) << i << vidstup(5) << "|" << vidstup(9) << nuli(2) << 1. * i / 4 << vidstup(6) << "|" << '\n';
		else
				if(i > 0 && i < 2)
			std::cout << nuli(1) << "| " << vidstup(5) << i << vidstup(5) << "|" << vidstup(9) << nuli(2) << i * i << vidstup(6) << "|" << '\n';
		else
					if(i >= 2)
			std::cout << nuli(1) << "| " << vidstup(5) << i << vidstup(5) << "|" << vidstup(9) << nuli(2) << vidstup(9) << -i * (1. / 2) + 5 << vidstup(6) << "|" << '\n';
	}
	std::cout << "---------------------------" << '\n';

}
