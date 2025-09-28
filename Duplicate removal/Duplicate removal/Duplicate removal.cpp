#include <iostream>
#include <list>

int main()
{
	std::list<int> zalupa;
	int a;

	std::cout << "Вводите числа, когда надоест, введите 0\n";

	while(true)
	{
		std::cout << "Число: ";
		std::cin >> a;
		std::cout << std::endl;

		if (a == 0) { break; }

		zalupa.push_front(a);

	}

	zalupa.unique();
	zalupa.sort();

	for(auto it = zalupa.begin(); it!=zalupa.end(); it++)
	{
		std::cout << *it << std::endl;
	}


	return 0;
}