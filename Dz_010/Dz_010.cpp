#include <iostream>

using namespace std;

int max(int A[3], int B[3]) {
    int max = A[0];
    for (int i = 0; i < 3; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        if (B[i] > max) {
            max = B[i];
        }
    }
    return max;
}

int min(int A[3], int B[3]) {
    int min = A[0];
    for (int i = 0; i < 3; i++) {
        if (A[i] < min) {
            min = A[i];
        }
        if (B[i] < min) {
            min = B[i];
        }
    }
    return min;
}

int average(int A[3], int B[3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += A[i] + B[i];
    }
    return sum / 6;
}

int Action(int* ptr_a, int* ptr_b, int(*mn)(int[3], int[3]), int(*mx)(int[3], int[3]), int(*ag)(int[3], int[3])) {
    int choice;
    cout << "--Menu--" << '\n';
    cout << "Your choice:" << '\n';
    cout << "1 - max" << '\n';
    cout << "2 - min" << '\n';
    cout << "3 - average" << '\n';
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        return mx(ptr_a, ptr_b);
    }
    if (choice == 2) {
        return mn(ptr_a, ptr_b);
    }
    if (choice == 3) {
        return ag(ptr_a, ptr_b);
    }
}

int main()
{
    int (*mx)(int, int);
    int A[3]{ 62,45,12 };
    int* ptr_a = nullptr;
    ptr_a = A;
    int B[3]{ 53,21,70 };
    int* ptr_b = nullptr;
    ptr_b = B;

    cout << Action(A, B, min, max, average);
}


