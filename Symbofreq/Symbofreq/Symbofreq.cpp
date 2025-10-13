#include <iostream>
#include <vector>
#include <map>


int main()
{
	std::string line = "Hello World!!";	
	int size = line.length();

	std::map<char, int> map; 

	for(int i=0; i<size; i++)
	{

		std::cout << line[i] << " - ";
		map[line[i]] = 1;

		for(int j=0; j<size; j++)
		{
			if (line[j] == line[i] && j !=i) { map[line[i]] += 1; }
		}

		std::cout << map[line[i]] << std::endl;
	}
	
	//Реализацию получше придумать не могу

	return 0;
}
