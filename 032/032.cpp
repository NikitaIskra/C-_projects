#include <iostream>

using namespace std;

//double Divide(int a, int b) {
//    try {
//        int a = 10;
//        int b = 0;
//        if (b == 0)
//            throw runtime_error("Divide by zero!!!");
//        return static_cast<double> (a / b);
//    }
//    catch (const exception& e) {
//        cerr << "We have an error in main(). " << e.what() << endl;
//        return 0.0;
//    }
//}

//double Korin() {
//    int a;
//    try {
//        cout << "Enter number 10-100: ";
//        cin >> a;
//        if (a < 10 || a>100) {
//            throw runtime_error("number is out of range!");
//        }
//        else {
//            double result = sqrt(a);
//            return result;
//        }
//    }
//    catch (const exception& e) {
//        cout << e.what() << endl;
//    }
//}

//class ArrayException :public exception {
//    string msg;
//public:
//    ArrayException(int index, int size) {
//        msg = "ArrayException: Index " + to_string(index) +
//            " out of range " + to_string(size);
//    }
//    const char* what()const override {
//        return msg.c_str();
//    }
//};


//int getElement(int* arr, int size, int index) {
//    try {
//        if (index < 0 || index >= size)
//            throw out_of_range("Your index is not correct");
//        return arr[index];
//    }
//    catch (const out_of_range& e) {
//        cerr << "Error in function " << e.what() << endl;
//        return -1;
//    }
//}
//
//int getElement_new(int* arr, int size, int index) {
//    try {
//        if (index < 0 || index >= size)
//            throw ArrayException(index, size);
//        return arr[index];
//    }
//    catch (const ArrayException& e) {
//        cerr << "Error!!! " << e.what() << endl;
//        return -1;
//    }
//}


int main()
{
    try {
        size_t size = static_cast<size_t>(1111);
        int* arr = new int[size];
        delete[] arr;
        string input = "abc";
        int value = stoi(input);
        cout << value << endl;
    }
    catch (const bad_alloc& e) {
        cerr << "Error with new operator. " << e.what() << endl;;
    }
    catch (const invalid_argument& e) {
        cerr << "Error with stoi. " << e.what() << endl;;
    }
    catch (const out_of_range& e) {
        cerr << "Error with stoi range. " << e.what() << endl;;
    }
}
//try {
//     double result = Korin();
//     cout << "Result = " << result << endl;
//}
//    catch (const exception& e) {
//        cout << e.what() << endl;
//}
    //try {
    //    double result = Divide(10, 0);
    //    cout << "Result = " << result << endl;
    //}
    ////try {}- визначити проблему
    //// if(a>b)   throw об'єкт, повідомлення
    //// catch(obj e)
    //catch (const exception& e) {
    //    cerr << "We have an error in main(). " << e.what() << endl;
    //    return 0.0;
    //}