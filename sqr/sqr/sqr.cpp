#include<iostream>
#include <vector>

template <typename T>
T sqr(T num)
{
	return num * num;
}

template<typename T>
std::vector<T> sqr(std::vector<T> n)
{
	std::cout << "[IN] ";
	for(int i=0; i<size(n); i++)
	{
		std::cout << n[i] << ", ";
		n[i] = sqr(n[i]);
	}

	std::cout << std::endl;

	std::cout << "[OUT] ";
	for(int i=0; i<size(n); i++)
	{
		std::cout << n[i] << ", ";
	}
	return n;
}


int main()
{
	std::cout << sqr(2) << std::endl;

	std::vector<int> V1 = { -1, 4, 8 };

	sqr(V1);
}
