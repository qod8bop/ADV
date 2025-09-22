#include <iostream>

template<class T> class table
{
private:
	T** tablo;
	int rows;
	int cols;
public:

	T* operator[](int index) 
	{
		return tablo[index];
	}

	T* operator[](int index) const
	{
		return tablo[index];
	}

	table(int rows, int cols)
	{
		this->cols = cols;
		this->rows = rows;

		tablo = new T*[rows];
		for(int i=0; i< rows; i++)
		{
			tablo[i] = new T[cols];
		}
	}

	void Size()
	{
		std::cout << "[SIZE]: " << rows << " x " << cols;
	}
};






int main()
{

	auto test = table<int>(2, 3);
	test[0][0] = 4;
	std::cout << test[0][0];

	test.Size();

	return 0;
}