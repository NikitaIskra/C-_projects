#include <iostream>
#include <cstring>
    
using namespace std;
//1
//union Num {
//    char number8[9];
//    int number5;
//};
//
//struct Car {
//private:
//    string color;
//    string model;
//    int choice;
//public:
//    Num num;
//    void filling() {
//        cout << "Enter the car color ";
//        cin >> color;
//        cout << "Enter the machine model: ";
//        cin >> model;
//        cout << "Enter the vehicle number 1 - 5 digit number 2 - 8 word up to 8 characters: ";
//        cin >> choice;
//        if (choice == 1) {
//            cout << "Enter 5 digit number: ";
//            cin >> num.number5;
//        }
//        if (choice == 2) {
//            cout << "Enter 8 word up to 8 characters: ";
//            for (int i = 0; i < 8; i++) {
//                cin >> num.number8[i];
//            }
//            num.number8[8] = '\0';
//        }
//    }
//    void display() {
//        if (choice == 1) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number5 << endl;
//        }
//        if (choice == 2) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number8 << endl;
//        }
//    }
//
//    string getModel() const { return model; }
//
//    void edit() {
//        cout << "Enter new model: ";
//        cin >> model;
//        cout << "Enter new color: ";
//        cin >> color;
//        cout << "Enter a new vehicle number 1 - 5 digit number 2 - 8 word up to 8 characters: ";
//        cin >> choice;
//        if (choice == 1) {
//            cout << "Enter 5 digit number: ";
//            cin >> num.number5;
//        }
//        if (choice == 2) {
//            cout << "Enter 8 word up to 8 characters: ";
//            for (int i = 0; i < 8; i++) {
//                cin >> num.number8[i];
//            }
//            num.number8[8] = '\0';
//
//        }
//        if (choice == 1) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number5 << endl;
//        }
//        if (choice == 2) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number8 << endl;
//        }
//    }
//
//    void scar() {
//        if (choice == 1) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number5 << endl;
//        }
//        if (choice == 2) {
//            cout << "Color: " << color << ", Model: " << model << ", Number: " << num.number8 << endl;
//        }
//    }
//
//};

union Char {
    int speed;
    int iq;
};

enum Type {
    Bird = 1,
    Cattle = 2,
    Man = 3
};

struct Essence {
    Type choice;
    Char c;
    string color;
    string catl;
    void filling() {
        int input;
        cout << "Enter entity type 1 - Bird, 2 - Cattle, 3 - Man: ";
        cin >> input;

        switch (input) {
        case 1: choice = Bird; break;
        case 2: choice = Cattle; break;
        case 3: choice = Man; break;
        default:
            cout << "Invalid choice, defaulting to Bird.\n";
            choice = Bird;
        }
        if (choice == Bird) {
            cout << "Enter color: ";
            cin >> color;
            cout << "Enter flight speed: ";
            cin >> c.speed;
        }
        if (choice == Cattle) {
            cout << "Enter color: ";
            cin >> color;
            cout << "Enter the view: ";
            cin >> catl;
        }
        if (choice == Man) {
            cout << "Enter your IQ level: ";
            cin >> c.iq;
        }
    }

    void display() {
        if (choice == 1) {
            cout << "Type: " << choice << "\n" << "Color: " << color << "\n" << "Speed: " << c.speed << endl;
        }
        if (choice == 2) {
            cout << "Type: " << "\n" << choice << "Color: " << color << "\n" << "View: " << catl << endl;
        }
        if (choice == 3) {
            cout << "Type: " << choice << "\n" << "IQ level: " << c.iq << endl;
        }
    }

    void edit() {
        int edit;
        cout << "Enter the type you want to edit: ";
        cin >> edit;
        if (edit == 1) {
            cout << "Enter new color: ";
            cin >> color;
            cout << "Enter new flight speed: ";
            cin >> c.speed;
            cout << "Type: " << choice << "\n" << "Color: " << color << "\n" << "Speed: " << c.speed << endl;
        }

        if (edit == 2) {
            cout << "Enter new color: ";
            cin >> color;
            cout << "Enter new view: ";
            cin >> catl;
            cout << "Type: " << "\n" << choice << "Color: " << color << "\n" << "View: " << catl << endl;
        }

        if (edit == 3) {
            cout << "Enter new IQ: ";
            cin >> c.iq;
            cout << "Type: " << choice << "\n" << "IQ level: " << c.iq << endl;
        }
   }

    void schar(Essence E[]) {
        int chara;
        cout << "Enter the type of feature you are looking for: ";
        cin >> chara;
        string scolor;
        string scatle;
        int sspeed;
        int siq;
        if (chara == 1) {
            cout << "Enter flight speed: ";
            cin >> sspeed;
            for (int i = 0; i < 10; i++) {
                if (E[i].c.speed == sspeed && E[i].choice == Bird) {
                    E[i].display();
                }
            }
        }

        if (chara == 2) {
            cout << "Enter view: ";
            cin >> scatle;
            for (int i = 0; i < 10; ++i) {
                if (E[i].choice == Cattle && E[i].color == scolor && E[i].catl == scatle) {
                    E[i].display();
                }
            }
        }

        if (chara == 3) {
            cout << "Enter IQ: ";
            cin >> siq;
            for (int i = 0; i < 10; ++i) {
                if (E[i].choice == Man && E[i].c.iq == siq) {
                    E[i].display();
                }
            }
        }
    }
};

int main()
{
    //Car cars[10];

    //for (int i = 0; i < 10; i++) {
    //    cars[i].filling();
    //}

    //for (int i = 0; i < 10; i++) {
    //    cars[i].display();
    //}
    //string smodel;
    //cout << "Enter the car model you want to change: ";
    //cin >> smodel;

    //int sn5;
    //char sn8[9];
    //int newchoice;
    //cout << "Enter the number of the car you are looking for 1 - 5 digit number 2 - 8 word: ";
    //cin >> newchoice;
    //if (newchoice == 1) {
    //    cout << "Enter 5 digit number: ";
    //    cin >> sn5;
    //    for (int i = 0; i < 10; i++) {
    //        if (cars[i].num.number5 == sn5) {
    //            cars[i].scar();
    //        }
    //    }
    //}
    //if (newchoice == 2) {
    //    cout << "Enter 8 words number: ";
    //    for (int i = 0; i < 8; i++) {
    //        cin >> sn8[8];
    //    }
    //    sn8[8] = '\0';
    //    for (int i = 0; i < 10; i++) {
    //        if (strcmp(cars[i].num.number8, sn8) == 0) {
    //            cars[i].scar();
    //        }
    //    }
    //}
    //for (int i = 0; i < 10; i++) {
    //    if (cars[i].getModel() == smodel) {
    //        cars[i].edit();
    //    }
    //}

    //delete [] cars;
    //2
    Essence ess;
    Essence E[10];
    ess.filling();
    ess.display();

    for (int i = 0; i < 10; ++i) {
        cout << "\nFilling entity " << i + 1 << "\n";
        E[i].filling();  
    }

    for (int i = 0; i < 10; ++i) {
        E[i].display();
    }

    int index;
    cout << "Enter index of entity to edit (0-9): ";
    cin >> index;
    E[index].edit();

    ess.schar(E);
}


