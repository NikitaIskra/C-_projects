#include <iostream>

using namespace std;
//1
//int n[6] = { 1,3,7,9,23,123 };
//int a[6];
//int* pn = n;
//int* pa = a;
//for (int i = 0; i < 6; i++) {
//    *(pa + i) = *(pn + i);
//    cout << a[i] << endl;
//}
//2
//int n[6] = { 1,3,7,9,23,123 };
//int* pn = n + 5;
//for (int i = 0; i < 6; i++) {
//	cout << *pn << endl;
//	pn--;
//}

int main()
{
	//3
	int n[6] = { 1,3,7,9,23,123 };
	int a[6];
	int* pn = n;
	int* pa = a+5;
	for (int i = 0; i < 6; i++) {
		*pa = *pn;    
		pn++;          
		pa--;
    }
	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
}

