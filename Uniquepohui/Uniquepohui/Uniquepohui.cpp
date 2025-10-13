#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };
	std::sort(v.begin(), v.end());
	std::unique(v.begin(), v.end());
	std::vector<int>::iterator i = v.begin(); 
	while (i != v.end()) 
	{
		std::cout << *i << "  ";
		i++; 
	}
	return 0;
}