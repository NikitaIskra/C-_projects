#include <iostream>

using namespace std;

//int a = 5;
//int b;
//int* pa = nullptr;
//cout << pa << endl;
//pa = &a;
//pa = &b;
//*pa = 10;
//cout << pa << endl;
//cout << *pa << endl;
//cout << b << endl;

//int a = 10;
//int* pa = nullptr;
//int b = 20;
//int* pb = nullptr;
//pa = &a;
//pb = &b;
//int max = 0;
//if (*pa > *pb) {
//	max += *pa;
//	cout << max << endl;
//}
//else {
//	max += *pb;
//	cout << max << endl;
//}

//int a;
//cout << "Enter a number: " << endl;
//cin >> a;
//int* pa = nullptr;
//pa = &a;
//if (*pa > 0) {
//	cout << "A number greater than zero" << endl;
//}
//else {
//	cout << "A number less than zero" << endl;
//}

//int mas[5] = { 1,2,3,4,5 }; // mas = &mas[0]
//int* ptr = nullptr;
//ptr = mas;
//for (int i = 0; i < 5; i++) {
//	cout << *ptr + i << '\t';
//	cout << ptr[i] << '\t';
//}

void swap_numbers(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

	void swap1_numbers(int* a, int* b) {
		int temp = *a;
		*a = *b;
		*b = temp;
}


int main()
{
	int b = 2;
	int c = 7;
	swap_numbers(b, c); // int& a = b
	cout << b << endl;
	cout << c << endl;
	swap1_numbers(&b, &c); // int* a = &b
	cout << b << endl;
	cout << c << endl;
}

