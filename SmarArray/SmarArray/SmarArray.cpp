#include <iostream>

class smartarr
{
private:
	int* arr;
	int pos;
	int amount;
public:
	smartarr(int n)
	{
		arr = new int[n];
		pos = 0;
		amount = n;
	}

	void add_element(int el)
	{
		if(pos >= amount)
		{
			throw std::runtime_error("Выход за прелы массива");
		}

		else 
		{
			arr[pos] = el;
			pos++;
		}
	}

	int get_element(int n)
	{
		if(n<0 || n>pos)
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
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(6) << std::endl;
	}

	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}