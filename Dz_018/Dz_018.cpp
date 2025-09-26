#include <iostream>
#include <fstream>

using namespace std;

struct Employee {
	char name[10];
	char surname[10];
	int age;
};

int main()
{
	FILE* f;
	FILE* d;
	Employee e, emp[5];
	fopen_s(&f, "employes.dat", "wb");
	for (int i = 0; i < 5; i++) {
		cout << "Employee " << i + 1 << ": " << endl;
		cout << "Name: ";
		cin >> e.name;
		cout << "Surname: ";
		cin >> e.surname;
		cout << "Age: ";
		cin >> e.age;
		fwrite(&e, sizeof(Employee), 1, f);
	}
	fclose(f);
	int index = 1;
	fopen_s(&f, "employes.dat", "rb");
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		cout << index++ << ". "
			<< e.name << " "
			<< e.surname << " "
			<< e.age << endl;
	}
	fclose(f);

	fopen_s(&f, "employes.dat", "r+b");
	cout << "Enter the employee number to edit: ";
	cin >> index;
	fseek(f, (index - 1) * sizeof(Employee), SEEK_SET);
	cout << "Enter new name: " << endl;
	cin >> e.name;
	cout << "Enter new surname: " << endl;
	cin >> e.surname;
	cout << "Enter new age: " << endl;
	cin >> e.age;
	fwrite(&e, sizeof(Employee), 1, f);
	fclose(f);

	fopen_s(&f, "employes.dat", "rb");
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		cout << e.name << " "
			<< e.surname << " "
			<< e.age << endl;
	}
	fclose(f);

	int dline;
	cout << "Enter the employee number to delete: ";
	cin >> dline;

	fopen_s(&f, "employes.dat", "rb");
	fopen_s(&d, "delete.dat", "wb");

	int cline = 1;
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		if (cline != dline) {
			fwrite(&e, sizeof(Employee), 1, d);
		}
		++cline;
	}
	fclose(f);
	fclose(d);

	remove("employes.dat");
	rename("delete.dat", "employes.dat");

	fopen_s(&f, "employes.dat", "rb");
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		printf("%d. %s %s %d\n", index++, e.name, e.surname, e.age);
	}
	fclose(f);

	string sn;
	cout << "Enter the last name of the employee you are looking for: ";
	cin >> sn;

	fopen_s(&f, "employes.dat", "rb");
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		if (sn == e.surname) {
			printf("%d. %s %s %d\n", index++, e.name, e.surname, e.age);
		}
	}
	fclose(f);


	int newage;
	cout << "Enter the age of the employees: ";
	cin >> newage;

	fopen_s(&f, "employes.dat", "rb");
	while (fread(&e, sizeof(Employee), 1, f) == 1) {
		if (newage == e.age) {
			printf("%d. %s %s %d\n", index++, e.name, e.surname, e.age);
		}
	}
	fclose(f);

}


