#include <iostream>

using namespace std;

class Man {
    string name;
    int age;
public:
    Man(const string n = "Noname", int a = 0) : name(n), age(a) {

    }

    void print() const {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

class Apartament {
    Man* mes;
    int count;
    int numc;
public:

    Apartament(int c = 0, int nc = 0) : count(c), numc(nc) {
        mes = new Man[count];
    }

    Apartament(const Apartament& other) : count(other.count), numc(other.numc) {
        mes = new Man[count];
        for (int i = 0; i < count; ++i) {
            mes[i] = other.mes[i];
        }
    }

    Apartament& operator=(const Apartament& other) {
        delete[] mes; 

        count = other.count;
        numc = other.numc;
        mes = new Man[count];
        for (int i = 0; i < count; ++i) {
            mes[i] = other.mes[i];
        }

        return *this;
    }

    void setResident(int index, const Man& person) {
        mes[index] = person;
    }

    void printm() {
        for (int i = 0; i < count; ++i) {
            mes[i].print();
        }
    }

    ~Apartament() {
        delete[] mes;
    }
};

class House {
    Apartament* ap;
    int countk;
    int num;
public:
    House(int nu = 0, int ku = 0) : num{ nu }, countk{ ku } {
        ap = new Apartament[countk];
    }

    void setHouse(int index, const Apartament& k) {
        ap[index] = k;
    }

    void printk() {
        for (int i = 0; i < countk; ++i) {
            ap[i].printm();
        }
    }

    ~House() {
        delete[] ap;
    }
};

int main()
{
    Apartament a1(2, 1);
    a1.setResident(0, Man("Ivan", 25));
    a1.setResident(1, Man("Oleksandr", 30));

    Apartament a2(1, 2);
    a2.setResident(0, Man("Artem", 45));

    House h(2, 3);
    h.setHouse(0, a1);
    h.setHouse(1, a2);

    h.printk();
}

