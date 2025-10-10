#include <iostream>

using namespace std;

class Phonebook {
private:
    char* name;
    char* surname;
    char* mname;
    int homephone;
    int workphone;
    int phone;
    char* info;
public:
    Phonebook() : name{ nullptr }, surname{ nullptr }, mname{ nullptr }, homephone{ 0 }, workphone{ 0 }, phone{ 0 }, info{ nullptr } {
        
    }

    Phonebook(const char* na, const char* sn, const char* mn, int hp, int wp, int p, const char* i) : homephone{ hp }, workphone{ wp }, phone{ p } {
		name = new char[strlen(name) + 1];
		strcpy_s(name, sizeof(name), na);

		surname = new char[strlen(surname) + 1];
		strcpy_s(surname, sizeof(surname), sn);

		mname = new char[strlen(mname) + 1];
		strcpy_s(mname, sizeof(mname), mn);

		info = new char[strlen(info) + 1];
		strcpy_s(info, sizeof(info), i);
	}

	void input() {

		if (name) delete[] name;
		if (surname) delete[] surname;
		if (mname) delete[] mname;
		if (info) delete[] info;

        char buffer[100];

        cout << "Name: ";
        cin >> buffer;
        if (name) delete[] name;
        name = new char[strlen(buffer) + 1];
        strcpy_s(name, strlen(buffer) + 1, buffer);

        cout << "Surname: ";
        cin >> buffer;
        if (surname) delete[] surname;
        surname = new char[strlen(buffer) + 1];
        strcpy_s(surname, strlen(buffer) + 1, buffer);

        cout << "Middle name: ";
        cin >> buffer;
        if (mname) delete[] mname;
        mname = new char[strlen(buffer) + 1];
        strcpy_s(mname, strlen(buffer) + 1, buffer);

        cout << "Home phone: ";
        cin >> homephone;

        cout << "Work phone: ";
        cin >> workphone;

        cout << "Phone: ";
        cin >> phone;

        cout << "Information: ";
        cin.ignore(); 
        cin.getline(buffer, 100);
        if (info) delete[] info;
        info = new char[strlen(buffer) + 1];
        strcpy_s(info, strlen(buffer) + 1, buffer);
	}

	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Middle name: " << mname << endl;
		cout << "Home phone: " << homephone << endl;
		cout << "Work phone: " << workphone << endl;
		cout << "Phone: " << phone << endl;
		cout << "Information: " << info << endl;
	}

    void deleteabonent() {
        string abonent;
        cout << "Enter the name of the subscriber you want to delete: ";
        cin >> abonent;
        for (int i = 0; i < 10; i++) {
            if (buffer[i])
        }
    }

	~Phonebook() {
		delete[] name;
		delete[] surname;
		delete[] mname;
		delete[] info;
	}
};

int main()
{
    int choice;
	Phonebook p;
	p.input();
	p.print();
    cout << "1 - add new phone: " << endl;

}

