#include <iostream>

using namespace std;

//++i -префіксна 1+і = і;
//i++ -постфіксна i = i+1;


//class Counter {
//private:
//    int value;
//public:
//    Counter(int v = 0) :value(v) {}
//    Counter operator++() {
//        ++value;
//        return *this;
//    }
//    Counter operator++(int) {
//        Counter temp = *this;
//        value++;
//        return temp;
//    }
//    Counter operator+=(int x) {
//        value += x;
//        return *this;
//    }   
//
//    void print() const {
//        cout << "Value: " << value << endl;
//    }
//    //&c = c
//    //*p = &c
//    friend Counter& operator+(int x, const Counter& object) {}
//
//    friend ostream& operator<<(ostream& out, const Counter& object) {} 
//};
    
//Counter& operator+(int x, const Counter& object) {
//    Counter temp;
//    temp.value = x + object.value;
//    return temp;
//}
//ostream& operator<<(ostream& out, const Counter& object) {
//    out << "My_value: " << object.value << endl;
//    return out;
//}

//class A {
//
//public:
//    virtual void print() {
//        cout << "Hello" << endl;
//    }
//};
//
//class B :public A {
//
//public:
//    void print() override {
//        cout << "Hello, i from B class" << endl;
//    }
//};

//class Airplane {
//private:
//    string name;
//    string name2;
//    int passengers;
//    int max;
//    int value;
//public:
//    Airplane(const string& name, int pas, int max) : name{ name }, passengers{pas}, max{max} {}
//
//    bool operator==(const string name2) const {
//        return name == name2;
//    }
//
//    Airplane operator++(int) {
//        Airplane temp = *this;
//        passengers++;
//        return temp;
//    }
//
//    Airplane operator--(int) {
//        Airplane temp = *this;
//        passengers--;
//        return temp;
//    }
//
//    bool operator>(int value) const {
//        return max > value;
//    }
//
//    void print() const {
//        cout << "Name: " << name << ", Passengers: " << passengers << ", Max: " << max << endl;
//    }
//};
//

class Student {
    string name;
    int grade;
public:
    Student(const string& name_, int g) : name{name_}, grade{g} {}
    friend class Teacher;
};

class Teacher {
public:
    void evaluate(const Student& s) {
        if (s.grade >= 90) {
            cout << s.name << " get exellent grade" << endl;
        }
        else {
            cout << s.name << " need add scores for better grade" << endl;
        }
    }
};
int main()
{
    Teacher teacher;
    Student student("Bob", 100);
    teacher.evaluate(student);





//    Airplane a1("Boeing", 100, 150);
//
//    a1.print();
//
//    if (a1 == "Boeing") {
//        cout << "Name is Boeing ✅" << endl;
//    }
//    else {
//        cout << "Name is not Boeing ❌" << endl;
//    }
//
//
//    a1++;
//    a1.print(); 
//
//    a1--;
//    a1.print();
//
//    if (a1 > 120) {
//        cout << "Max capacity is greater than 120" << endl;
//    }
//    else {
//        cout << "Max capacity is not greater than 120" << endl;
//    }


    //Counter c(5);
    //++c;
    //c.print();
    //c++;
    //c.print();
    //c += 10;
    //c.print();
    //c = 1 + c;
    //c.print();
    //cout << c << endl;

    //A a;
    //B b;
    //a.print();
    //b.print();
    
}
