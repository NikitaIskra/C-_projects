#include <iostream>

using namespace std;

//1
//int a;
//int i = 0;
//cout << "Enter a number up to 500: " << endl;
//cin >> a;
//while (a <= 500) {
//    i += a;
//    a++;
//}
//cout << i << endl;
//return 0;
//2
//int x;
//int y;
//cout << "Enter num x: " << endl;
//cin >> x;
//cout << "Enter num y: " << endl;
//cin >> y;
//int i = 0;
//int res = 1;
//while (i < y) {
//	i++;
//	res *= x;
//}
//cout << res << endl;
//3
//int i = 1;
//double sum = 0;
//int count = 0;
//while (i <= 1000) {
//	i++;
//	count++;
//	sum += i;
//}
//double avg = sum / count;
//cout << avg << endl;
//4
//int a;
//int i = 1;
//cout << "Enter number up to 20: " << endl;
//cin >> a;
//while (a <= 20) {
//	i *= a;
//	a++;
//}
//cout << i << endl;
//return 0;

	int main()
	{
		//5
		int k;
		int i = 0;
		cout << "Enter a number from 1 to 10: " << endl;
		cin >> k;
		while (i < 10) {
			i++;
			int res = k * i;
			cout << k << " * " << i << " = " << res << endl;
		}
		return 0;
	}
