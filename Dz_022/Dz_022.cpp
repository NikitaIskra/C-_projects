#include <iostream>

using namespace std;

class Fraction {
private:
    int num1;
    int num2;
public:
    int res;
    void setn1(double a) {
        num1 = a;
    }

    int getn1() const {
        return num1;
    }

    void setn2(double b) {
        num2 = b;
    }

    int getn2() const {
        return num2;
    }

    void input() {
        int choice;
        cout << "Input operation 1 - +; 2 - -; 3 - *; 4 - /: " << endl;
        cin >> choice;
        cout << "Input n1: " << endl;
        cin >> num1;
        cout << "Input n2: " << endl;
        cin >> num2;
        if (choice == 1) {
            res = getn1() + getn2();
        }
        if (choice == 2) {
            res = getn1() - getn2();
        }
        if (choice == 3) {
            res = getn1() * getn2();
        }
        if (choice == 4) {
            res = getn1() / getn2();
        }
    }
    void print() {
        cout << res;
    }
};

int main()
{
    Fraction f;
    f.input();
    f.print();
}
