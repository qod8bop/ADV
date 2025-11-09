#include <iostream>

int main()
{

	int a = 10;

	std::unique_ptr<int> stas(&a);


	std::cout << stas;

	return 0;
}