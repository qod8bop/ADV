#include <iostream>
#include <vector>

class Counter
{

private:

	int counter = 0;
	int sum = 0;

public:

	void operator()(std::vector<int> V)
	{

		std::cout << "[IN] : ";

		for(int i=0; i< V.size(); i++)
		{
			std::cout << V[i] << "  ";
			if((V[i]%3) == 0)
			{
				sum += V[i];
				counter++;
			}
		}
		std::cout << std::endl;
	}

	void get_sum()
	{
		std::cout << "[OUT]: get_sum() = " << sum << std::endl;
	}

	void get_count()
	{
		std::cout << "[OUT]: get_count() = " << counter << std::endl;
	}

};


int main()
{
	std::vector<int> V1 = { 4, 1, 3, 6, 25, 54 };

	Counter sf;

	sf(V1);
	sf.get_sum();
	sf.get_count();

	return 0;
}