#include <iostream>

using namespace std;

#define TOTAL_MARKS 10
//int marks[TOTAL_MARKS] = { 3, 2, 5 };
//int del_index = 2;

//for (int i = 0; i < TOTAL_MARKS; i++) {
//    cout << marks[i] << " ";
//}
//cout << endl;
//for (int i = del_index; i < TOTAL_MARKS; i++) {
//    marks[i] = marks[i - 1];
//    cout << "marks [" << i << "]" << " = marks [" << i + 1 << "]" << endl;
//}
//marks[del_index] = 10;

//for (int i = 0; i < TOTAL_MARKS; i++) {
//    cout << marks[i] << " ";
//}

void printArray(int array[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}	

void bubbleSort(int array[], int n, int& k) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (array[j] < array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
		k++;
	}
}

void choiceSort(int array[], int n) {
	int pos;
	for (int i = 0; i < n - 1; ++i) {
		pos = i;
		for (int j = i + 1; j < n; ++j) {
			if (array[pos] < array[j + 1]) {
				pos = j;
			}
		}
		if (pos != i) {
			int t = array[i];
			array[i] = array[pos];
			array[pos] = t;
		}
	}
}

bool hasZero(int* row, int N) {
	for (int j = 0; j < N; j++) {
		if (row[j] == 0) return true;
	}
	return false;
}

void choicezero(int** ptr, int M, int N) {
	for (int i = 0; i < M; i++) {
		if (!hasZero(ptr[i], N)) { 
			for (int j = 0; j < N; j++) {
				cout << ptr[i][j] << " ";
			}
			cout << endl;
		}
	}
}

int main()
{
	int count = 0;
	const int M = 3;
	const int N = 3;
	int data[M][N] = { { 8, 0, -2, }, {5, 10, 0,}, {88, 9, 72 } };
	int** ptr = new int* [M];
	for (int i = 0; i < M; i++) {
		ptr[i] = new int [N];
	}
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			ptr[i][j] = data[i][j];

	cout << "After: ";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << ptr[i][j] << " ";
		}
	}
	cout << "Before: ";
	choicezero(ptr,M,N);

	//cout << "Array: " << endl;
	//cout << endl;
	//printArray(data, size);
	//bubbleSort(data, size, count);
	//cout << "Count: " << count << endl;
	//cout << "Array after sort: " << endl;
	//cout << endl;
	//printArray(data, size);

	//cout << "Array after sort2: " << endl;
	//choiceSort(data, size);
	//cout << endl;
	//printArray(data, size);
}

