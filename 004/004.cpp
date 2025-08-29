#include <iostream>

using namespace std;

//int choice;
//
//do {
//    cout << "\n Menu" << endl;
//    cout << "1. Calculate rectangle area" << endl;
//    cout << "2. Calculate circle area" << endl;
//    cout << "3. Exit from program" << endl;
//    cout << "Input choice: ";
//    cin >> choice;
//    switch (choice) {
//    case 1:
//
//        break;
//    case 2:
//
//        break;
//    case 3:
//        cout << "Program is closed" << endl;
//        break;
//    default: cout << "Error! your choice is not correct." << endl;
//    }
//} while (choice != 3);

//for (int i = 0; i < 5; i += 2) {
//	cout << "Hello!!!" << endl;
//	cout << "i = " << i + 1 << endl;
//}

//int number;
//cout << "Input number: ";
//cin >> number;
//int k;
//int sum = 0;
//for (int i = 0, k = 5; i <= number && k != 0; k--, i++) {
//	sum += i;
//	cout << k << endl;
//}
//cout << "Result: " << sum << endl;

//int number;
//int a[5];
//int b[3] = { 1,2,3 };
//double c[] = { 1.0, 2.4, 4.5, 5.6, 6.1, 7.0 };
//int d[4] = { 1,3,10 };
//
//int size = sizeof(c) / sizeof(double);
//cout << size << endl;
//
//for (int i = 0; i < 4; i++) {
//	cout << "d[" << i << "] = " << d[i] << endl;
//}
//
//const int SIZE = 5;
//int array[SIZE];
//
//for (int i = 0; i < SIZE; i++) {
//	cout << "Input " << i + 1 << endl;
//	cin >> array[i];
//}
//for (int i = 0; i < SIZE; i++) {
//	cout << "array[" << i << "] = " << array[i] << endl;
//}

int main()
{
	const int M = 6;
    double array[M];
	double sum = 0;
	double max;

	for (int i = 0; i < M; i++) {
		cout << "Input " << i + 1 << endl;
		cin >> array[i];
	}

	max = array[0];
	for (int i = 0; i < M; i++) {
		sum += array[i];
		if (array[i] > max) {
			max = array[i];
		}
	}
	cout << "Sum: " << sum << endl;
	cout << "Max: " << max << endl;
}

	