#include <iostream>

using namespace std;

//1
//int** addRow(int** array, int rows, int cols, int* newRow, int index) {
//    int** newArray = new int* [rows + 1];
//
//    for (int i = 0; i < rows + 1; i++) {
//        newArray[i] = new int[cols];
//        if (i == index) {
//            for (int j = 0; j < cols; j++) {
//                newArray[i][j] = newRow[j];
//            }
//        }
//        else {
//            for (int j = 0; j < cols; j++) {
//                newArray[i][j] = array[i][j];
//            }
//        }
//    }
//    for (int i = 0; i < rows; i++) {
//        delete[] array[i];
//    }
//    delete[] array;
//    return newArray;
//}
//2
//int** deleteRow(int** array, int rows, int cols, int* newRow, int del) {
//    int** newArray = new int* [rows - 1];
//
//    for (int i = 0; i < rows; i++) {
//        if (i == del) {
//            continue;
//        }
//        else {
//                newArray[i] = new int[cols];
//                for (int j = 0; j < cols; j++) {
//                    newArray[i][j] = array[i][j];
//                }
//        }
//    }
//    for (int i = 0; i < rows; i++) {
//        delete[] array[i];
//    }
//    delete[] array;
//    return newArray;
//}
//3
int** PosRow(int** array, int M, int N, int* newRow, int pos) {
    int** newArray = new int* [M + 1];

    for (int i = 0; i < M + 1; i++) {
        newArray[i] = new int[N];
        if (i == pos) {
            for (int j = 0; j < N; j++) {
                newArray[i][j] = newRow[j];
            }
        }
        else if (i > pos) {
            for (int j = 0; j < N; j++) {
                newArray[i][j] = array[i - 1][j];
            }
        }
        else {
                for (int j = 0; j < N; j++) {
                    newArray[i][j] = 0;
                }
        }
    }
    for (int i = 0; i < M; i++) {
        delete[] array[i];
    }
    delete[] array;
    return newArray;
}

int main()
{
    //1
    //int index;
    //cout << "Enter num: ";
    //cin >> index;
    //int rows = 2;
    //int cols = 3;
    //int** array = new int* [rows];
    //for (int i = 0; i < rows; ++i) {
    //    array[i] = new int[cols];
    //    for (int j = 0; j < cols; ++j) {
    //        array[i][j] = i + j;
    //    }
    //}

    //int newRow[] = { 7, 7, 7 };
    //array = addRow(array, rows, cols, newRow, index);
    //rows++;

    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //for (int i = 0; i < rows; ++i) {
    //    delete[] array[i];
    //}
    //delete[] array;
    //2
//    int del;
//    cout << "Enter num: ";
//    cin >> del;
//    int rows = 2;
//    int cols = 3;
//    int** array = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = i + j;
//        }
//    }
//
//    int newRow[] = { 7, 7, 7 };
//    array = deleteRow(array, rows, cols, newRow, del);
//    rows--;
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//3
    int pos;
    cout << "Enter num: ";
    cin >> pos;
    int M = 3;
    int N = 3;
    int** array = new int* [M];
    for (int i = 0; i < M; ++i) {
        array[i] = new int[N];
        for (int j = 0; j < N; ++j) {
            array[i][j] = i + j;
        }
    }

    int newRow[3] = {};
    array = PosRow(array, M, N, newRow,pos);
    M++;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < M; ++i) {
        delete[] array[i];
    }
    delete[] array;
}
