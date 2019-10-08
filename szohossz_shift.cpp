#include "std_lib_facilities.h"

int main()
{
	int a = 1;
	int b = 0;

	while(a != 0)
	{
		a = a << 1;
		b++;
	}
	std::cout << b;
	return 0;
}
