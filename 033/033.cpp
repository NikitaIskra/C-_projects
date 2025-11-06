#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual void draw() const = 0;
    virtual void print() const = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r){}
    double area() const override {
        return 3.14 * radius * radius;
    }
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
    void print() const override {
        cout << "Radius " << radius << endl;
    }

};

class Rectangle : public Shape {
    double radius;
public:
    Rectangle(double width, double height) : width(width), height(height) {}
    double area() const override {
        return width * height;
    }
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
    void print() const override {
        cout << "Width " << width << endl;
        cout << "Height " << height << endl;
    }

};

int main()
{
    Circle circle(4);
    cout << "Area: " << circle.area() << endl;
    circle.area();
    circle.draw();
    circle.print();

    Rectangle rect(2, 4);
    cout << "Area: " << rect.area() << endl;
    rect.area();
    rect.draw();
    rect.print();

    Shape* shape;
    shape = &circle;
    cout << "Area: " << shape->area() << endl;
    shape = &rect;
    cout << "Area: " << shape->area() << endl;
}
