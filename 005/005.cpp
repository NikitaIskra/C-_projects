#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//srand(time(NULL));
//int a;
//a = rand();
//cout << a << "\n";
//a = rand();
//cout << a << "\n";

//srand(time(NULL));
//int a;
//a = rand()%21 -10;
//cout << a << endl;

//const int row = 3;
//const int col = 3;
//int mr[row][col];
//for (int i = 0; i < row; i++) {
//	for (int j = 0; j < col; j++) {
//		mr[i][j] = rand() % 100;
//		cout << mr[i][j] << " ";
//	}
//	cout << "\n\n";
	//}

	//	int min = mr[0][0];
	//	for (int j = 0; j < col; j++) {
	//		if (mr[0][j] < min) {
	//			min = mr[0][j];
	//		}
	//	}
	//	cout << "Min: " << min << endl;

//const int row = 3;
//const int col = 3;
//double sum = 0.0;
//int mr[row][col];
//for (int i = 0; i < row; i++) {
//	for (int j = 0; j < col; j++) {
//		mr[i][j] = rand() % 100;
//		sum += mr[i][j];
//		cout << mr[i][j] << " ";
//	}
//	cout << "\n\n";
//}
//int average = sum / (row * col);
//cout << "Average: " << average << endl;

int main()
{
	const int row = 20;
	const int col = 20;
	char rectangle[row][col];
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
				rectangle[i][j] = '*';
			}
			else {
				rectangle[i][j] = ' ';
			}

		}
	}

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			cout << rectangle[i][j];

		}
		cout << endl;
	}
	return 0;
}


