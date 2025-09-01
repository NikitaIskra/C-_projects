#include <iostream>

using namespace std;

//1
//void stepin(int a, int b) {
//	int sum = 1;
//	for (int i = 0; i < b; i++) {
//		sum *= a;
//	}
//	cout << sum << endl;
//}
//int a = 2;
//int b = 3;
//stepin(a, b);
//2
//int diapason(int a, int b) {
//	int sum = 0;
//	for (int i = a; i <= b; i++) {
//		sum += i;
//	}
//	return sum;
//}
//int a = 2;
//int b = 8;
//cout << diapason(a, b) << endl;
//3
//int dosk(int n) {
//	int sum = 0;
//	for (int i = 1; i <= n / 2; i++) {
//		if (n % i == 0) {
//			sum += i;
//		}
//	}
//	return sum == n;
//}
	//int a[5];
	//cout << "Enter a number: " << endl;
	//for (int i = 0; i < 5; i++) {
	//	cin >> a[i];
	//}
	//for (int i = 0; i < 5; i++) {
	//	if (dosk(a[i])) {
	//		cout << a[i] << " is perfect" << endl;
	//	}
	//	else {
	//		cout << a[i] << " is not perfect" << endl;
	//	}
	//}
//4
//void playingcard(string card) {
//	cout << "Your card: " << card << endl;
//}
	//string card;
	//cout << "Enter playing card: " << endl;
	//cin >> card;
	//playingcard(card);

int chasluve(int n) {
	int a[6];
	for (int i = 5; i >= 0; i--) {
		a[i] = n % 10;
		n /= 10;
	}
	int sum1 = a[0] + a[1] + a[2];
	int sum2 = a[3] + a[4] + a[5];

	return sum1 == sum2;
}

int main()
{
	int n;
	cout << "Enter a 6-digit number: ";
	cin >> n;

	if (chasluve(n)) {
		cout << n << " - Shasluve!" << endl;
	}
	else {
		cout << n << " - NeShasluve!" << endl;
	}
}


