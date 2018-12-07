#pragma once

#include <iostream>
#include <assert.h>
using namespace std;

template<class T,size_t N = 10>
class Array
{
public:
	T& operator[](size_t index)
	{
		assert(index < N);
		return _array[index];
	}

	const T& operator[](size_t index)const
	{
		assert(index < N);
		return _array[index];
	}

	size_t Size()const
	{
		return _size;
	}

	bool Empty()const
	{
		return _size == 0;
	}

private:
	T _array[N];
	size_t _size;

};

void TestArray()
{
	Array<int> arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Array缺点： 数组长度不是可变的，