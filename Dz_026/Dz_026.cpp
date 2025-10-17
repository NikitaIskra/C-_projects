#include <iostream>

using namespace std;

//1
//class Fraction {
//private:
//    int num1;
//    int num2;
//public:
//    Fraction(int num1, int num2) : num1{num1}, num2 {num2} {}
//
//    Fraction operator+(const Fraction& other) const {
//        int num = num1 * other.num2 + other.num1 * num2;
//        int den = num1 * other.num2;
//        return Fraction(num, den);
//    }
//
//    Fraction operator-(const Fraction& other) const {
//        int num = num1 * other.num2 - other.num1 * num2;
//        int den = num1 * other.num2;
//        return Fraction(num, den);
//    }
//
//    Fraction operator*(const Fraction& other) const {
//        int num = num1 * other.num2 * other.num1 * num2;
//        int den = num1 * other.num2;
//        return Fraction(num, den);
//    }
//
//    Fraction operator/(const Fraction& other) const {
//        int num = num1 * other.num2 / other.num1 * num2;
//        int den = num1 * other.num2;
//        return Fraction(num, den);
//    }
//
//    void print() {
//        cout << num1 << "/" << num2 << endl;
//    }
//};

//2
class Complex {
private:
    double num1;
    double num2;
public:
    Complex(double n1 = 0.0, double n2 = 0.0) : num1{ n1 }, num2{ n2 } {}

    Complex operator+(const Complex& other) const {
        return Complex(num1 + other.num1, num2 + other.num2);
    }

    Complex operator-(const Complex& other) const {
        return Complex(num1 - other.num1, num2 - other.num2);
    }

    Complex operator*(const Complex& other) const {
        double real = num1 * other.num1 - num2 * other.num2;
        double imag = num1 * other.num2 + num2 * other.num1;
        return Complex(real, imag);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.num1 * other.num1 + other.num2 * other.num2;
        double real = (num1 * other.num1 + num2 * other.num2) / denominator;
        double imag = (num2 * other.num1 - num1 * other.num2) / denominator;
        return Complex(real, imag);
    }

    void print() {
        cout << num1 << " " << num2 << endl;
    }
};

int main()
{
    //1
    //Fraction a(5, 3);
    //Fraction b(2, 7);
    //Fraction res = a + b;
    //res.print();
    //res = a - b;
    //res.print();
    //res = a * b;
    //res.print();
    //res = a / b;
    //res.print();
    //2
    Complex a(2, 3);     
    Complex b(1, -4);    

    Complex res = a + b;
    res.print();
    res = a - b;
    res.print();
    res = a * b;
    res.print();
    res = a / b;
    res.print();
}

