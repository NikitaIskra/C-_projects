#include <iostream>

using namespace std;

void hello() {
	cout << "Hello, user!" << endl;
}

void hello_admin() {
	cout << "Hello, admin!" << endl;
}

void hello_manager() {
	cout << "Hello, manager!" << endl;
}

double add(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mult(double a, double b) {
	return a * b;
}

double dil(double a, double b) {
	return a / b;
}

void calculate(double x, double y, double (*operation)(double, double)) {
	cout << "Result: " << operation(x, y) << endl;
}

double (*getOperation(char operation))(double, double) {
	if (operation == '+') {
		return add;
	}
	else if (operation == '-') {
		return sub;
	}
	else {
		return nullptr;
	}
}

void suma(int* ptr_a, int* ptr_b, int* ptr_c) {
	for (int i = 0; i < 3; i++) {
		*(ptr_c + i) = *(ptr_c + i) + *(ptr_b + i);
	}
}

int main()
{
	//int a = 10;
	//int* ptr = nullptr;
	//ptr = &a;
	//cout << *ptr << endl;
	//*ptr = 100;
	//cout << *ptr << endl;
	//hello();
	//cout << hello << endl;
	//void(*funcPointer)() = nullptr;
	//funcPointer = hello;
	//funcPointer();
	//funcPointer = hello_manager;
	//funcPointer();
	//funcPointer = hello_admin;
	//funcPointer();
	//double x;
	//double y;
	//char operation;
	//cout << "Enter operation: " << endl;
	//cin >> operation;
	//cout << "Enter x: " << endl;
	//cin >> x;
	//cout << "Enter y: " << endl;
	//cin >> y;
	//if (operation == '+') {
	//	calculate(x, y, add);
	//}
	//if (operation == '-') {
	//	calculate(x, y, sub);
	//}
	//if (operation == '*') {
	//	calculate(x, y, mult);
	//}
	//if (operation == '/') {
	//	calculate(x, y, dil);
	//}
	//int a, b;
	//int (*operation[3])(int, int) = {add, sub, mult};
	//cout << "Input numbers " << endl;
	//cin >> a >> b;
	//cout << "Mult " << operation[2](a, b) << endl;
	//cout << "Add " << operation[0](a, b) << endl;

	//auto operation = getOperation('+');
	//if (operation) {
	//	cout << "Result " << operation(5, 3) << endl;
	//}

	// operation = getOperation('-');
	//if (operation) {
	//	cout << "Result " << operation(5, 3) << endl;
	//}

	int* ptr_a = new int[3]{34,66,12};
	int* ptr_b = new int[3]{23, 35, 76};
	int* ptr_c = new int[3] {};

	suma(ptr_a, ptr_b, ptr_c);

	cout << "Result: ";
	for (int i = 0; i < 3; i++) {
		cout << *(ptr_c + i) << " ";
	}
}


