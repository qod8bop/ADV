#include <iostream>

class smartarr
{
private:
	
	int pos = 0;
	int amount = 0;
	int filled = 0;
	int* arr;

public:

	
	smartarr(int n)
	{
		arr = new int[n];
		pos = 0;
		amount = n;
		
	}



	smartarr(const smartarr &array )
	{
		
		amount = array.amount;
		filled = array.filled;

		arr = new int[amount];

		for (int i=0; i<filled; i++)
		{
			arr[i] = array.arr[i];
		}
	}



	void add_element(int el)
	{
		if (pos >= amount)
		{
			throw std::runtime_error("Выход за пределы массива");
		}

		else
		{
			arr[pos] = el;
			pos++;
			filled++;
		}
	}

	int get_element(int n)
	{
		if (n<0 || n>pos)
		{
			throw std::runtime_error("Некорректный индекс");
		}
		else { return arr[n]; }
	}




	~smartarr()
	{
		delete[] arr;
	}
};




int main() 
{
	try
	{
	smartarr arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);


	smartarr new_array(2);
	
	new_array.add_element(44);
	new_array.add_element(34);


	arr = new_array;
	}

	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}



	return 0;
}