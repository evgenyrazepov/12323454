// 12323454.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "massive.h"


int main()
{
	setlocale(LC_ALL, "ru");
	
	int row;
	cin >> row;
	int col;
	cin >> col;
	massive arr(row, col);
	void print();
}

