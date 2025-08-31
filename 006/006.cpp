#include <iostream>
#include "Calculatesum.h"

using namespace std;

//void print() {
//    hello();
//}
//for (int i = 0; i < 4; i++) {
//    hello();
//}
//print();

//void hello() {
//    cout << "Hello user" << endl;
//}
//void print();

    //int a = 1;
    //int b = 2;
    //cout << sum_numbers(a, b) << endl;
//int sum_numbers(int a, int b) {
//    int sum = a + b;
//    return sum;
//}

//void sumr(int a, int b) {
//    if (a > 0 && b > 0) {
//        int sum = a + b;
//        cout << sum << endl;
//    }
//    else {
//        int sumr = a - b;
//        cout << sumr << endl;
//    }
//}

//int sumr2(int a, int b) {
//    if (a > 0 && b > 0) {
//        int sum = a + b;
//        return sum;
//    }
//    else {
//        int sumr = a - b;
//        return sumr;
//    }
//}

//int a = 2;
//int b = 3;
////sumr(a, b);
//cout << sumr2(a, b) << endl;

    //int size;
    //cout << "Enter a size: " << endl;
    //cin >> size;
    //int a[9];
    //cout << "Enter elements: " << endl;
    //for (int i = 0; i < size; i++) {
    //    cin >> a[i];
    //}
    //reverse_elements(a, size);
//void reverse_elements(int a[], int size) {
//    for (int i = size - 1; i >= 0; i--) {
//        cout << a[i] << " ";
//    }
//}

void max_min_numbers(int a[], int min, int max, int size) {
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main()
{
    int size;
    cout << "Enter a size: " << endl;
    cin >> size;
    int a[5];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    max_min_numbers(a,min,max,size);
}

//int a = 2;
//int b = 3;
//int calculate_sum(int a, int b) {
//    int sum = a + b;
//    return sum;
//}
//
//int calculate_mult(int a, int b) {
//    int mult = a * b;
//    return mult;
//}

