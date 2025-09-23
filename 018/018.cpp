#include <iostream>
#include <cstdio>

using namespace std;

//struct A {
//	int x;
//	char ch;
//};

struct Rabbit {
	int id;
	int age;
	int m;
};

int main()
{

	int w = 256, h = 256; // Розмір зображення
	int cellSize = 32;    // Розмір клітинки шахматки

	unsigned int** color = new unsigned int* [h];
	for (int i = 0; i < h; i++)
		color[i] = new unsigned int[w];

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int row = i / cellSize;
			int col = j / cellSize;
			if ((row + col) % 2 == 0)
				color[i][j] = 0xFFFFFF; // білий
			else
				color[i][j] = 0x000000; // чорний
		}
	}
	//FILE* f;
	//fopen_s(&f, "rabbit.dat", "wb");
	//Rabbit r, rab[5]; 
	//for (int i = 0; i < 5; i++) {
	//	cout << "Enter id rabbit: " << endl;
	//	cin >> r.id;
	//	cout << "Enter age rabbit: " << endl;
	//	cin >> r.age;
	//	cout << "Enter m(kg) rabbit: " << endl;
	//	cin >> r.m;
	//	fwrite(&r, sizeof(Rabbit), 1, f);
	//}
	//fclose(f);

	//fopen_s(&f, "rabbit.dat", "rb");
	//fread(rab, sizeof(Rabbit), 5, f);
	//fclose(f);

	//int maxage = rab[0].age;
	//int maxm = rab[0].m;

	//for (int i = 0; i < 5; i++) {
	//	cout << rab[i].id << " " << rab[i].age << " " << rab[i].m << endl;
	//	if (rab[i].age > maxage) maxage = rab[i].age;
	//	if (rab[i].m > maxm)   maxm = rab[i].m;
	//}

	//cout << "Max age: " << maxage << endl;
	//cout << "Max m: " << maxm << endl;
	//fclose(f);
	//FILE* f;
	//fopen_s(&f, "file1.dat", "wb");
	//A ob, spis[3]; //об'єкт та масив об'єктів типу структура
	//ob.x = 10;
	//ob.ch = 's';
	//fwrite(&ob, sizeof(A), 1, f); //запис об'єкта
	//for (int i = 0; i < 3; i++) {
	//	spis[i].x = i; spis[i].ch = 'a' + i;
	//	fwrite(&spis[i], sizeof(A), 1, f); //запис масиву
	//}
	//fclose(f);

	//fopen_s(&f, "file1.dat", "rb");
	//A ob1, spis1[3];
	//fread(&ob1, sizeof(A), 1, f); //читання об'єкту
	//cout << "ob1 -> \n" << ob1.x << " " << ob1.ch << endl;
	//cout << "spis1 -> " << endl;
	//fread(spis1, sizeof(A), 3, f); // читання всього масиву
	//for (int i = 0; i < 3; i++)
	//	cout << spis1[i].x << " " << spis1[i].ch << endl;
	//fclose(f);


	//FILE* f;
	//fopen_s(&f, "t2.txt", "w"); //відкриття файлу на запис
	//char s[10];
	//for (int i = 0; i < 5; i++) {
	//	cout << "String -> ";
	//	cin.getline(s, 10);
	//	fputs(s, f); // запис строк в файл
	//	fputs("\n", f); // cin.getline() - не записує в
	//	// рядок перехід на новий рядок
	//}
	//fclose(f);
	//fopen_s(&f, "t2.txt", "r"); //відкриття файлу на читання
	//for (int i = 0; i < 5; i++) {
	//	fgets(s, 10, f); // читання строк из файлу
	//	cout << s;
	//}
	//fclose(f);

	//FILE* f;
	//fopen_s(&f, "text.dat", "wb");
	//int mas[5] = { 0, 1, 2, 3, 4 };
	//fwrite(mas, sizeof(int), 5, f);
	//fclose(f);
	//fopen_s(&f, "text.dat", "rb");
	//int mas2[5];
	//cout << "Array: ";
	//for (int i = 0; i < 5; i++) {
	//	fread(&mas2[i], sizeof(int), 1, f);
	//	cout << mas2[i] << " ";
	//}
	//fclose(f);

	//string name;
	//cout << "Enter name file: ";
	//cin >> name;
 //   FILE* f;
	//fopen_s(&f, name.c_str(), "wb");
	//int mas[5] = { 34, 12, 52, 42, 95 };
	//fwrite(mas, sizeof(int), 5, f);
	//fclose(f);
	//fopen_s(&f, name.c_str(), "rb");
	//int max = mas[0];
	//for (int i = 0; i < 5; i++) {
	//	fread(&mas[i], sizeof(int), 1, f);
	//	if (mas[i] > max) {
	//		max = mas[i];
	//	}
	//}
	//cout << max;
}
