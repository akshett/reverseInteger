#include <iostream>
#include <math.h>

int reverseInteger(int x)
{
	int a = x;
	int sol = 0;
	while (a != 0)
	{
		if (abs(sol) < (pow(2,31)/10)){
			sol = (sol*10) + (a%10);
			a = a/10;

		}
		else if(abs(sol) == (pow(2,31)/10) && a%10 < 8)
		{
			sol = (sol*10) + (a%10);
			a = a/10;
		}
		else
		{
			return 0;
		}

	}
	return sol;
}

int main()
{
	int ip;
	std::cout << "Enter integer: " << '\n';
	std::cin >> ip;

	std::cout << "Reverse is: " << reverseInteger(ip) << '\n';

	return 0;
}
