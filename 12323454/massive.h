#pragma once
#include <iostream>
using namespace std;
class massive
{
public:
	int** arr = nullptr;
	int nrow = 0;
	int ncol = 0;
	void init( int col, int row);
	void print();

};

