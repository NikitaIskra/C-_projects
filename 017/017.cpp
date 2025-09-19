#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    //const char* filename = "example.txt";
    //FILE* file = fopen(filename, "w");
    //if (file != nullptr) {
    //    fprintf(file, "Hello, file!\nThis is a new record in file.\n");
    //    fclose(file);
    //}

    //file = fopen(filename, "r");
    //if (file != nullptr) {
    //    char buffer[256];
    //    while (fgets(buffer, sizeof(buffer), file)) {
    //        printf("Read: %s", buffer);
    //    }
    //    fclose(file);
    //}

    //FILE* in, * out;
    //char f1[] = "example.txt";
    //char f2[] = "OUTPUT.txt";
    //in = fopen(f1, "rt");
    //out = fopen(f2, "wt");

    //while (!feof(in)) 
    //    fputc(fgetc(in), out);
    //fclose(in);
    //fclose(out);

    FILE* file;
    int count3 = 0;
    int count10 = 0;
    srand(1);
    const char* f1 = "example.txt";
    file = fopen(f1, "w");
    if (file != nullptr) {
        for (int i = 0; i < 100; ++i) {
            int r = rand();
            fprintf(file, "%d ", r);
        }
    }
    fclose(file);


    file = fopen(f1, "r");
    int num;
    while (fscanf(file, "%d", &num) == 1) {
        cout << num << "\t";
        if (num == 3) {
            count3++;
        }
        if (num > 10) {
            count10++;
        }
    }

    cout << "==3: " << count3;
    cout << endl;
    cout << ">10: " << count10;
    cout << endl;
    cout << endl;

    fclose(file);
}

