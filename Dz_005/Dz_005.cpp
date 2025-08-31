#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//1
//const int row = 3;
//const int col = 3;
//int ms[row][col];
//int start;
//cout << "Enter a number: ";
//cin >> start;
//ms[0][0] = start;
//for (int i = 0; i < row; i++) {
//    for (int j = 0; j < col; j++) {
//        if (i == 0 && j == 0) continue;
//        if (j == 0) {
//            ms[i][j] = ms[i - 1][col - 1] * 2;
//        }
//        else {
//            ms[i][j] = ms[i][j - 1] * 2;
//        }
//    }
//}
//for (int i = 0; i < row; i++) {
//    for (int j = 0; j < col; j++) {
//        cout << ms[i][j] << "\t";
//    }
//    cout << endl;
//}

//2
//const int row = 3;
//const int col = 3;
//int ms[row][col];
//int start;
//cout << "Enter a number: ";
//cin >> start;
//ms[0][0] = start;
//for (int i = 0; i < row; i++) {
//    for (int j = 0; j < col; j++) {
//        if (i == 0 && j == 0) continue;
//        if (j == 0) {
//            ms[i][j] = ms[i - 1][col - 1] + 1;
//        }
//        else {
//            ms[i][j] = ms[i][j - 1] + 1;
//        }
//    }
//}
//for (int i = 0; i < row; i++) {
//    for (int j = 0; j < col; j++) {
//        cout << ms[i][j] << "\t";
//    }
//    cout << endl;
//}

int main()
{
	//3
	char choice;
	int s;
	cout << "Select an offset(r,l,u,d): " << endl;
	cin >> choice;
	cout << "Number: " << endl;
	cin >> s;
	const int row = 3;
	const int col = 3;
	int mr[row][col];
	int result[row][col] = {};

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			mr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			int new_i = i, new_j = j;
			if (choice == 'r') new_j = (j + s) % col;
			if (choice == 'l') new_j = (j - s + col) % col;
			if (choice == 'd') new_i = (i + s) % row;
			if (choice == 'u') new_i = (i - s + row) % row;

			result[new_i][new_j] = mr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << result[i][j] << " ";
		}
	}
	    cout << "\n\n";
}

