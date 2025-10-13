#include <iostream>

using namespace std;

//class Simple {
//    string value;
//    char* data;
//public:
//    Simple(const string& v, const char* str):value(v){
//        data = new char[strlen(str) + 1];
//        strcpy_s(data, strlen(str) + 1, str);
//    }
//
//    void setValue(const string& number) {
//        value = number;
//    }
//
//    Simple& operator=(const Simple& other) {
//        if (this != &other) {
//            delete[] data;
//            data = new char[strlen(other.data) + 1];
//            strcpy_s(data, strlen(other.data) + 1, other.data);
//            value = other.value;
//        }
//        return *this;
//    }
//
//    Simple operator+(const Simple& other) {
//        return Simple(value+other.value, strcat(data,other.data));
//    }
//
//    void printValue() {
//        cout << "My value " << value << endl;
//        cout << "My data " << data << endl;
//    }
//
//    ~Simple() {
//        delete[] data;
//        cout << "Delete object" << endl;
//    }
//};

class Number {
    double number;
public:
    Number(double number) : number(number) {}

    void setNumber(double c) {
        number = c;
    }

    void add(const Number& other) {
        number += other.number;
    }

    void sub(const Number& other) {
        number -= other.number;
    }

    void mult(const Number& other) {
        number *= other.number;
    }

    void div(const Number& other) {
        number /= other.number;
    }

    double getNumber() {
        return number;
    }
};

int main()
{
    Number a(10); 
    Number b(5);

    a.add(b);             
    a.sub(b);            
    a.mult(b);            
    a.div(b);

    cout << "Result: " << a.getNumber() << endl;

    //Simple a("Hello", "123"), b("User", "456"), c("C++", "789");
    //a.printValue();
    //b.printValue();
    //a = b = c;
    //a.printValue();
    //c.setValue("Congratulate");
    //a.printValue();
    //b.printValue();
    //a = a;
    //a.printValue();

    //c = a + b;
    //c.printValue();
}

