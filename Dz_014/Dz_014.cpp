#include <iostream>

using namespace std;

//2
struct Car {
    double length;
    double clearance;
    double volume;
    double power;
    double diameter;
    string color;
    string box;
};

void Parameters(Car &p) {
    cout << "Enter length: ";
    cin >> p.length;
    cout << "Enter clearence: ";
    cin >> p.clearance;
    cout << "Enter engine displacement: ";
    cin >> p.volume;
    cout << "Enter engine power: ";
    cin >> p.power;
    cout << "Enter wheel diameter: ";
    cin >> p.diameter;
    cout << "Enter car color: ";
    cin >> p.color;
    cout << "Enter the gearbox type: ";
    cin >> p.box;

    cout << "Car parametres: " << "Length: " << p.length << " Clearence: " << p.clearance << " Volume: " << p.volume << " Power: " << p.power << " Wheel diameter: " << p.diameter << " Color: " << p.color << " Gearbox type: " << p.box;

}

int main()
{
    Car p = {};
    Parameters(p);
}


