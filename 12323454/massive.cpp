#include "massive.h"
#include <iostream>
using namespace std;


void massive::init (int col, int row) {
	nrow = row;
	ncol = col;

	arr = new int* [nrow];
	for (int i = 0; i < nrow; i++) {
		arr[i] = new int[ncol];
		for (int j = 0; j < ncol; j++) {
			arr[i][j] = 0;
		}
	}

}

void massive::print() {
	for (int i = 0; i < nrow; i++) {
		for (int j = 0; j < ncol; j++) {
			cout << arr[i][j];
		}
	}
}
