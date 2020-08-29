#pragma once
#include <iostream>
using namespace std;
class Array
{
public:
	void setCount(int _count);
	int getCount();
	Array(int _count);
	Array(const Array& arr);
	~Array();
	void printAddr();
	void printArr();
private :
	int m_iCount;
	int* m_pArr;
};

