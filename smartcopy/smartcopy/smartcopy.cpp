#include <iostream>

class smartarr
{
private:
	
	int pos;
	int am;
public:
	int* arr;

	smartarr(int n)
	{
		arr = new int[n];
		pos = 0;
		am = n;
	}



	smartarr(const smartarr &array )
	{


		arr = array.arr;
		pos = array.pos;
		am = array.am;
	}



	void add_element(int el)
	{
		if (pos >= am)
		{
			throw std::runtime_error("Выход за пределы массива");
		}

		else
		{
			arr[pos] = el;
			pos++;
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

	smartarr arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	std::cout << arr.arr;

	smartarr new_array(2);
	new_array.add_element(44);
	new_array.add_element(34);
	std::cout << "\n" << new_array.arr;

	arr = new_array;




	return 0;
}