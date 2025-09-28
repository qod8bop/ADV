#include <iostream>
#include <vector>
#include <map>


int main()
{
	std::string line = "Hello World!!";	
	int size = line.length();

	std::map<char, int> map;


	for(int i=0; i++; i<size)
	{

		std::cout << line[i] << std::endl; // Я понятия не имею, почему эта строка просто игнорируется
		map[line[i]] = 1;

		for(int j=0; j ++; j<size)
		{
			if (line[j] == line[i]) { map[line[i]]++; }
		}

		std::cout << map[line[i]];
	}
	


	return 0;
}
