#include <iostream>

using namespace std;

class Box {
private:
    double width;
    double length;
    double height;

public:
    Box() {
        width = 0.0;
        length = 0.0;
        height = 0.0;
    }

    Box(double w, double b, double h) {
        width = w;
        length = b;
        height = h;
    }

    void input(double w, double b, double h) {
        width = w;
        length = b;
        height = h;
    }

    void print() {
        Box test;
        cout << "Width: " << width << endl;
        cout << "Length: " << length << endl;
        cout << "Height: " << height << endl;
    }

    void calculateVolume() {
        cout << "Volume of the box is " << width*length*height <<endl;
    }

    ~Box() {
        cout << "Object delete" << endl;
    }
};

class Point {
private:
    double x;
    double y;
    double z;
public:

    void setX(double a) {
        x = a;
    }

    double getX() const {
        return x;
    }

    void setY(double b) {
        y = b;
    }

    double getY() const {
        return y;
    }

    void setZ(double c) {
        z = c;
    }

    double getZ() const {
        return z;
    }

    void input() {
        cout << "Input x: " << endl;
        cin >> x;
        cout << "Input y: " << endl;
        cin >> y;
        cout << "Input z: " << endl;
        cin >> z;
    }

    void print() {
        cout << "Coordinates x: " << getX() << endl;
        cout << "Coordinates y: " << getY() << endl;
        cout << "Coordinates z: " << getZ() << endl;
    }
};

int main()
{
    cout << "Hello user!!!" << endl;
    cout << "I change my project" << endl;
    Box box;
    box.print();
    box.input(1.1, 1.2, 1.0);
    box.print();
    box.calculateVolume();
    Box boxnext;
    boxnext.print();
    Box box_3(2.1, 2.2, 2.3);
    box_3.print();
    Box box_4(3.1, 3.2, 3.3);
    box_4.print();
    Point p;
    p.input();
    p.print();
}

