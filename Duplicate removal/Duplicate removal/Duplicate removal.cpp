#include <iostream>
#include <list>

int main()
{
	std::list<int> list;
	int num;

	std::cout << "Вводите числа, когда надоест, введите 0\n";

	while(true)
	{
		std::cout << "Число: ";
		std::cin >> num;
		std::cout << std::endl;

		if (num == 0) { break; }

		list.push_front(a);

	}

	list.unique();
	list.sort();

	for(auto it = list.begin(); it!=list.end(); it++)
	{
		std::cout << *it << std::endl;
	}


	return 0;
}