#include<iostream>

using namespace std;

//class Box {
//private:
//	double width;
//	double length;
//	double height;
//	char* title;
//
//public:
//	Box() :width{ 0.0 }, length{ 0.0 }, height{ 0.0 }, title { nullptr } {
//
//	}
//
//	Box(double w, double l, double h, const char* t) :width{ w }, length{ l } {
//		height = h;
//		title = new char[strlen(t) + 1];
//		strcpy_s(title, sizeof(title), t);
//	}
//
//	void setWidth(double w) {
//		width = w;
//	}
//	double getWidth() {
//		return width;
//	}
//
//
//	void input(double w, double l, double h) {
//		width = w;
//		length = l;
//		height = h;
//	}
//
//	void print() {
//		Box test;
//		cout << "Title: " << title << endl;
//		cout << "Width: " << width << endl;
//		cout << "Length: " << length << endl;
//		cout << "Height: " << height << endl;
//	}
//	void calculateVolume() {
//		cout << "Volume of the box is " << width * length * height << endl;
//	}
//	~Box() {
//		delete[] title;
//		cout << "Object deleted" << endl;
//	}
//};

//class Ball {
//private:
//	char* color;
//	double radius;
//	char* name;
//public:
//	Ball() : color{ nullptr }, radius{ 0.0 }, name{nullptr} {
//
//	}
//
//	Ball(const char* c, double r, const char* n) : radius{ r } {
//		color = new char[strlen(c) + 1];
//		strcpy_s(color, sizeof(color), c);
//
//		name = new char[strlen(n) + 1];
//		strcpy_s(name, sizeof(name), n);
//	}
//
//	void input(const char* c, double r, const char* n) {
//
//		if (color) delete[] color;
//		if (name) delete[] name;
//
//		color = new char[strlen(c) + 1];
//		strcpy_s(color, strlen(color), c);
//		radius = r;
//		name = new char[strlen(n) + 1];
//		strcpy_s(name, strlen(name), n);
//	}
//
//	void print() {
//		cout << "Name: " << name << endl;
//		cout << "color: " << color << endl;
//		cout << "radius: " << radius << endl;
//	}
//};

//class Circle {
//	double radius;
//	static double scale;
//	static int count;
//public:
//	Circle(double r) : radius(r) {
//		count++;
//	}
//	double calculateScaleArea() {
//		return 3.14 * radius * radius * scale;
//	}
//	static void setScale(double s) {
//		scale = s;
//	}
//	static void getCount() {
//		cout << "Number of objects" << count << endl;
//	}
//	~Circle() {
//		count--;
//	}
//};

//double Circle::scale = 1.0;
//int Circle:: count = 0;

class Area {
	double square;
	static double width;
	static double height;
	static double length;
	static int count;
public:
	Area(double s) : square(s) {
		count++;
	}
	static double rectangleSquare() {
		return width * length;
	}
	static double squareSquare() {
		return width * width;
	}
	static double diamondSquare() {
		return width * height;
	}
	static void getCount() {
		cout << "Number of objects" << count << endl;
	}
	~Area() {
		count--;
	}
};

int Area::count = 0;

int main() {
	Area::diamondSquare();
	Area::rectangleSquare();
	Area::squareSquare();
	Area::getCount();
	//Circle::setScale(2);
	//Circle::getCount();
	//Circle c1(2.0), c2(3.0);
	//Circle::getCount();
	//cout << "Area c1: " << c1.calculateScaleArea() << endl;
	//cout << "Area c2: " << c2.calculateScaleArea() << endl;
	//Circle::setScale(3.0);
	//cout << "Area c1: " << c1.calculateScaleArea() << endl;
	//cout << "Area c2: " << c2.calculateScaleArea() << endl;
	//Circle::getCount();
	//cout << "Hello, user!!!" << endl;
	//cout << "I change my project" << endl;
	//Ball ball("red", 4.7, "ball1");
	//ball.print();
}	