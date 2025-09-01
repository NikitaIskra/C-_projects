#include <iostream>

using namespace std;
//#define AREA_RECTANGLE(l,w) ((l)*(w))
//#define IS_EVEN(n) ((n)%2 == 0 ? 1:0)
//#define IS_MIN(a,b) ((a)<(b)? (a):(b))
//int length = 10;
//int width = 5;
//int number = 5;
//int a = 1;
//int b = 5;
//cout << "Rectangle area is " << AREA_RECTANGLE(length, width) << endl;
//cout << "This is Number even ?" << IS_EVEN(number) << endl;
//cout << "Is this number minimal ?" << IS_MIN(a, b) << endl;

//int summa(int a, int b) {
//	return a + b;	
//}
//
//int summa(int a, int b, int c) {
//	return a + b;
//}
//
//double summa(double a, double b) {
//	return a + b;
//}
//
//template <typename T>
//T summa(T a, T b) {
//	return a + b;
//}

//int x = 10;
//int y = 20;

//double a = 10.5;
//double b = 20.3;

//cout << "Sum " << summa(x, y) << endl;
//cout << "Sum_2 " << summa(a, b) << endl;
//template <typename T>
//T universal(T& a, T& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    return a, b;
//}
//int a, b;
//cout << "Enter two numbers: " << endl;
//cin >> a >> b;
//universal(a, b);
//cout << a << " " << b << endl;

//template <typename T>
//string summa(string a, string b) {
//	return a + b;
//}
//string s1 = "hello_";
//string s2 = "user";
//cout << summa(s1, s2) << endl;

//int factorial(int n) {
//	if (n <= 1) return 1;
//	return n * factorial(n - 1);
//}
//int number;
//cout << "Input number: ";
//cin >> number;
//cout << "Factorial number " << number << " = " << factorial(number) << endl;

//n - качки перетинають озеро

void crossLake(int duckNumber) {
	if (duckNumber == 0) {
		cout << "Last duck cross lake" << endl;
		return;
	}
	cout << "Duck #" << duckNumber << "wait..." << endl;
	crossLake(duckNumber - 1);
	cout << "Duck #" << duckNumber << "now swim accross lake" << endl;
}

int main()
{
	int totalDucks = 5;
	crossLake(totalDucks);
}


