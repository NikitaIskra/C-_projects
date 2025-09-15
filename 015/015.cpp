#include <iostream>

using namespace std;

//struct Student {
//private:
//	string name;
//	int grades[5];
//	string names[5];
//public:
//
//	Student() {
//		name = "liceist";
//	}
//	Student(const string& newName) {
//		name = newName;
//	}
//
//	void setName(const string& newName) {
//		if (newName.empty()) return;
//		else {
//			name = newName;
//		};
//	}
//
//	void setGrades() {
//		int grade = 0;
//		cout << "Enter grades: ";
//		for (int i = 0; i < 5; i++) {
//			cin >> grade;
//			grades[i] = grade;
//		}
//	}
//
//	string getName() {
//		return name;
//	}
//
//	double getAverage() {
//		int sum = 0;
//		for (int g : grades) {
//			sum += g;
//		}
//		return (double)sum / 5;
//	}
//		
//	void printInfo() {
//		cout << "Student: " << name <<", Avg: " << getAverage() << endl;
//	}
//};
//
//struct Group {
//
//private: 
//	string name;
//	int grades[5][10];;
//	string names[5];
//public:
//	void studentName() {
//		cout << "Enter name student: ";
//		for (int i = 0; i < 5; i++) {
//			cin >> names[i];
//		}
//	}
//	void setGrades() {
//		int grade = 0;
//		for (int i = 0; i < 5; i++) {
//			cout << "Enter grades: " << names[i] << ":";
//			for (int j = 0; j < 10; j++) {
//				cin >> grade;
//				grades[i][j] = grade;
//			}
//		}
//	}
//
//	double getAverage(int sdi) {
//		int sum = 0;
//		for (int i = 0; i < 10; i++) {
//			sum += grades[sdi][i];
//		}
//
//		return (double)sum / 10;
//	}
//
//	void sort() {
//		for (int i = 0; i < 5 - 1; i++) {
//			for (int j = 0; j < 5 - i - 1; j++) {
//				if (names[j] > names[j + 1]) { 
//					string temp = names[j];
//					names[j] = names[j + 1];
//					names[j + 1] = temp;
//				}
//			}
//		}
//	}
//
//	void printInfo() {
//		for (int i = 0; i < 5; i++) {
//			double avg = getAverage(i);
//			if (avg > 80) {
//				cout << "Student: " << names[i] << ", Avg: " << avg << endl;
//			}
//		}
//	}
//};
	//Student student("Nick");
	//Student liceist();
	//student.setGrades();
	//Group group;
	//group.studentName();
	//group.setGrades();
	//group.sort();
	//group.printInfo();
	//Student* pStudent = &student;
	//(*pStudent).name = "Nicklaus";
	//student.printInfo();
	//pStudent->name = "Nicklasus";
	//student.printInfo();
	//cout << sizeof(student) << endl;

enum DataType { INT, FLOAT, CHAR };

struct SensorData {
    DataType type;
    union {
        int iVal;
        float fVal;
        char cVal;
    } data;


    void print() const {
        switch (type) {
        case INT: cout << "Integer: " << data.iVal << endl; break;
        case FLOAT: cout << "Float: " << data.fVal << endl; break;
        case CHAR: cout << "Char: " << data.cVal << endl; break;

        }
    }
    void size_union() {
        cout << sizeof(data) << endl;
    }
};

struct UserPermissions {
    unsigned int read:1;
    unsigned int write:1;
    unsigned int execute:1;

    void print() const {
        cout << "Read: " << read << ", Write: " << write << ", Execute: " << execute <<endl;
    }
};


int main()
{
    UserPermissions admin = { 1, 1, 1 };
    UserPermissions guest = { 1, 0, 0 };
    cout << "Admin permissions: " << endl;
    admin.print();
    cout << "Guest permissions: " << endl;
    guest.print();
    cout << sizeof(admin);

    //SensorData sensors[3];
    //sensors[0].type = INT;
    //sensors[0].data.iVal = 42;
    //sensors[1].type = FLOAT;
    //sensors[1].data.fVal = 3.14f;
    //sensors[2].type = CHAR;
    //sensors[2].data.cVal = 'A';



    //for (const auto& s : sensors) {
    //    s.print();
    //}

}
