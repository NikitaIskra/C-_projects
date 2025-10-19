#include <iostream>

using namespace std;
//1
//class Overcoat {
//private:
//    string type;
//    string object;
//    int price;
//public:
//    Overcoat(const string& type, const string& object, int price) : type{type}, object{object}, price{price} {}
//
//    bool operator==(const string type2) const {
//        return type == type2;
//    }
//
//    Overcoat& operator=(const Overcoat& other) {
//        if (this != &other) {
//            type = other.type;
//            object = other.object;
//            price = other.price;
//        }
//        return *this;
//    }
//
//    bool operator>(const Overcoat& other) const {
//        if (this->type == other.type) {
//            return this->price > other.price;
//        }
//    }
//
//    void print() {
//        cout << "Type:" << type << endl;
//        cout << "Object:" << object << endl;
//        cout << "Price:" << price << endl;
//    }
//};
//2
class Flat {
    int area;
    string object;
    int price;
public:
    Flat(int area, const string& object, int price) : area{ area }, object{ object }, price{ price } {}

    bool operator==(int area2) const {
        return area == area2;
    }

    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            object = other.object;
            price = other.price;
        }
        return *this;
    }

        bool operator>(const Flat& other) const {
            return this->price > other.price;
    }

    void print() {
        cout << "Area:" << area << endl;
        cout << "Object:" << object << endl;
        cout << "Price:" << price << endl;
    }


};

int main()
{
    //Overcoat c1("Coat", "jacket", 1200);
    //if (c1 == "Coat") {
    //    cout << "c1 has type Coat" << endl;
    //}
    //else {
    //    cout << "c1 has different type" << endl;
    //}
    //c1.print();
    //Overcoat c2("Coat", "jacket", 1000);
    //c2 = c1;
    //c2.print();
    //Overcoat c3("Raincoat", "jacket", 1500);
    //if (c1 > c3) {
    //    cout << "c1 is more expensive than c3 and same type" << endl;
    //}
    //else {
    //    cout << "c1 is NOT more expensive than c3 or types differ" << endl;
    //}
    //c3.print();
    //2
    Flat f1(70, "apartment", 50000);
    Flat f2(60, "apartment", 45000);
    Flat f3(90, "loft", 70000);

    f1.print();
    f2.print();
    f3.print();

    if (f1 == 70) {
        cout << "f1 has area 70" << endl;
    }

    f2 = f3;
    cout << " f2 after assignment from f3 " << endl;
    f2.print();

    if (f1 > f3) {
        cout << "f1 is more expensive than f3" << endl;
    }
    else {
        cout << "f1 is NOT more expensive than f3" << endl;
    }


}


