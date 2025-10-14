#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <algorithm>

template<typename C>
void  print_container (C cont)
{
	C::iterator i = cont.begin(); 
	while (i != cont.end()) 
	{
		std::cout << *i << std::endl; 
		i++; 
	}
}

int main()
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };

	print_container(test_set);
	std::cout << std::endl;

	print_container(test_list);
	std::cout << std::endl;

	print_container(test_vector);
	std::cout << std::endl;

	return 0;
}