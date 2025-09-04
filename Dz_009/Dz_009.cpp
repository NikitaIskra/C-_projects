#include <iostream>
#include <cmath>

using namespace std;
//1
//int* size(int a) {
//    return new int[a];
//}
//
//void initArray(int* ptr, int a) {
//    for (int i = 0; i < a; i++)
//        ptr[i] = 0; 
//}
//
//void dryk(int* ptr, int a) {
//    for (int i = 0; i < a; i++) {
//        cout << ptr[i] << endl;
//    }
//}
//
//void delet(int* ptr) {
//    delete[] ptr;
//}
//
//void insert(int*& ptr, int& a, int index, int value) {
//    int* newArr = new int[a + 1];
//
//    for (int i = 0; i < index; i++)
//        newArr[i] = ptr[i];
//    newArr[index] = value;
//    for (int i = index; i < a; i++)
//        newArr[i + 1] = ptr[i];
//    delete[] ptr;
//    ptr = newArr;
//    a++;
//}
//
//void deletindex(int*& ptr, int& a, int index) {
//    int* newArr = new int[a - 1];
//    for (int i = 0, j = 0; i < a; i++) {
//        if (i != index) {          
//            newArr[j] = ptr[i];
//            j++;
//        }
//    }
//    delete[] ptr;
//    ptr = newArr;
//    a--;
//}
//2
//int proste(int n) {
//    for (int i = 2; i < n; i++) { 
//        if (n % i == 0) {
//            return false; 
//        }
//    }
//
//    return true;
//}

void rospodil(int* ptr) {
    int zerocount = 0;
    int dcount = 0;
    int mcount = 0;

    for (int i = 0; i < 5; i++) {
        if (ptr[i] == 0) {
            zerocount++;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (ptr[i] > 0) {
            dcount++;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (ptr[i] < 0) {
            mcount++;
        }
    }
    int j = 0;
    int* zero = new int[zerocount];
    int g = 0;
    int* a = new int[dcount];
    int d = 0;
    int* b = new int[mcount];
    for (int i = 0; i < 5; i++) {
        if (ptr[i] == 0) {
            zero[j] = ptr[i];
            j++;
        }
    }
    for (int i = 0; i < zerocount; i++) {
        cout << "Zero " << zero[i] << ' ';
    }

    for (int i = 0; i < 5; i++) {
        if (ptr[i] > 0) {
            a[g] = ptr[i];
            g++;
        }
    }
    for (int i = 0; i < dcount; i++) {
        cout << "Positive " << a[i] << ' ';
    }
    for (int i = 0; i < 5; i++) {
        if (ptr[i] < 0) {
            b[d] = ptr[i];
            d++;
        }
    }
    for (int i = 0; i < mcount; i++) {
        cout << "Negative " << b[i] << ' ';
    }
}

int main()
{
    //int a = 5;
    //int index = 2;
    //int value;
    //cout << "Input number: " << endl;
    //cin >> value;
    //int* ptr = new int[a] {23, 45, 89, 21, 12};
    //dryk(ptr, a);
    //insert(ptr,a,index,value);
    //dryk(ptr, a);
    //deletindex(ptr, a, index);
    //dryk(ptr, a);
    //delet(ptr);

    //2
    //int size = 5;
    //int* ptr = new int[size] {23, 5, 89, 21, 12};

    //for (int i = 0; i < size; i++) {
    //    if (proste(ptr[i])) {
    //        cout << "Is Prime! " << ptr[i] << endl;
    //    }
    //    else {
    //        cout << "Is not Prime! " << ptr[i] << endl;
    //    }
    //}
    //3
    int a[5]{ -23, 0, -89, 12, 232 };
    int* ptr = a;
    rospodil(ptr);
}

