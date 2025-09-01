#include <iostream>

using namespace std;

//int* ptr_int = new int(1204);
//cout << *ptr_int << endl;
//*ptr_int = 10;
//cout << *ptr_int << endl;
//delete ptr_int;

//int* a_int = new int[3] {1, 2, 3};
//int* b_int = new int[3] {4, 5, 6};
//int count = 0;
//for (int i = 0; i < 3; i++) {
//	if (a_int[i] % 2 == 0) {
//		count++;
//	}
//	if (b_int[i] % 2 == 0) {
//		count++;
//	}
//}
//int k = 0;
//int* c_int = new int[count] {};
//for (int i = 0; i < 3; i++) {
//	if (a_int[i] % 2 == 0) {
//		c_int[k++] = a_int[i];
//	}
//	if (b_int[i] % 2 == 0) {
//		c_int[k++] = b_int[i];
//	}
//}
//
//for (int i = 0; i < 3; i++) {
//	cout << c_int[i] << " ";
//}
//delete[] c_int;

//int M = 0;
//int N = 0;
//cout << "Input size A:" << endl;
//cin >> M;
//cout << "Input size B:" << endl;
//cin >> N;
//int* A = new int[M];
//int* B = new int[N];
//cout << "Enter element A: " << endl;
//for (int i = 0; i < M; i++) {
//	cin >> A[i];
//}
//cout << "Enter element B: " << endl;
//for (int i = 0; i < N; i++) {
//	cin >> B[i];
//}
//int D = M + N;
//int* C = new int[D];
//for (int i = 0; i < M; i++) {
//	C[i] = A[i];
//}
//for (int i = 0; i < N; i++) {
//	C[M + i] = B[i];
//}
//for (int i = 0; i < D; i++) {
//	cout << C[i] << " ";
//}
//delete[] C;
//delete[] A;
//delete[] B;

//int videmnuy(int** A, int B, int C) {
//	int vid = 0;
//	for (int i = 0; i < B; i++) {
//		for (int j = 0; j < C; j++) {
//			if (A[i][j] < 0) {
//				vid++;
//			}
//		}
//	}
//	return vid;
//}

//int B = 0;
//int C = 0;
//cout << "Enter size B: " << endl;
//cin >> B;
//cout << "Enter size C: " << endl;
//cin >> C;
//int** A = new int* [B];
//for (int i = 0; i < B; i++) {
//	A[i] = new int[C];
//}
//cout << "Enter numbers: " << endl;
//for (int i = 0; i < B; i++) {
//	for (int j = 0; j < C; j++) {
//		cin >> A[i][j];
//	}
//}
//cout << videmnuy(A, B, C);
//delete[] A;

void kratne5(int A[], int B) {
	for (int i = 0; i < B; i++) {
		if (A[i] % 5 == 0) {
			A[i] = 0;
			cout << A[i] << endl;
		}
	}
}

int main()
{
	int B = 0;
	cout << "Enter a size: " << endl;
	cin >> B;
	int* A = new int[B];
	for (int i = 0; i < B; i++) {
		cout << "enter A:" << endl;
		cin >> A[i];
	}
	kratne5(A, B);
}

