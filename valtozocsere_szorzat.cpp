#include "std_lib_facilities.h"

int main()
{

	int a;
	int b;
	std::cout << "Add meg 'a' és 'b' értékét (szóközzel válaszd őket el egymástól, majd nyomj egy Enter-t)\n";
	std::cin >> a >> b;

	a = a * b;
	b = a / b;
	a = a / b;

	std::cout << "Cserélt 'a': " << a << "\nCserélt 'b': " << b << "\n";

	return 0;

}
