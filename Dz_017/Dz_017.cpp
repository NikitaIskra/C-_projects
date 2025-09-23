#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //1
    //const char* f1 = "example.txt";
    //const char* f2 = "text.txt";
    //FILE* file = fopen(f1, "w");
    //FILE* file2 = fopen(f2, "w");
    //fprintf(file, "Hello, file!\nThis is a new record in file.\n");
    //fprintf(file2, "Hello, file!\nThis is a new file\n");
    //fclose(file);
    //fclose(file2);
    //file = fopen(f1, "r");
    //file2 = fopen(f2, "r");
    //char buffer[100];
    //char buffer2[100];
    //while (true) {
    //    char* r1 = fgets(buffer, sizeof(buffer), file);
    //    char* r2 = fgets(buffer2, sizeof(buffer2), file2);

    //    if (!r1 && !r2) break;      
    //    if (!r1 || !r2) {           
    //        printf("%s", r1 ? buffer : buffer2);
    //        continue;
    //    }
    //    if (strcmp(buffer, buffer2) != 0) {
    //        printf("%s", buffer);   
    //    }
    //}

    //fclose(file);
    //fclose(file2);
    //2
    //const char* f1 = "text.txt";
    //const char* f2 = "result.txt";
    //FILE* file = fopen(f1, "w");
    //fprintf(file, "Hello, file!\nThi21 is a new re780ord in file.\n");
    //fclose(file);
    //FILE* file2 = fopen(f2, "w");
    //file = fopen(f1, "r");
    //if (file != nullptr) {
    //    char buffer[256];
    //    while (fgets(buffer, sizeof(buffer), file)) {
    //        int digits = 0;
    //        int vowels = 0;
    //        int consonants = 0;

    //        size_t length = strlen(buffer);

    //        for (size_t i = 0; i < length; i++) {
    //            char c = buffer[i];

    //            if (isdigit((c)))
    //                digits++;

    //            if (isalpha((c))) {
    //                char lower = (tolower((c)));

    //                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' || lower == 'y')
    //                    vowels++;
    //                else
    //                    consonants++;
    //            }
    //        }
    //            fprintf(file2, "Digits: %d\n", digits);
    //            fprintf(file2, "Vowels: %d\n", vowels);
    //            fprintf(file2, "Consonats: %d\n", consonants);
    //            fprintf(file2, "Length: %d\n", length);
    //    }
    //    fclose(file);
    //    fclose(file2);
    //}
    //file2 = fopen(f2, "r");
    //if (file2) {
    //    char line[256];
    //    while (fgets(line, sizeof(line), file2)) {
    //        printf("%s", line); 
    //    }
    //    fclose(file2);
    //}
    //3
    const char* f1 = "example.txt";
    const char* f2 = "cipher.txt";
    int shift = 3;
    FILE* file = fopen(f1, "w");
    fprintf(file, "Hello, file! This is a new record in file.");
    fclose(file);
    file = fopen(f1, "r");
    FILE* file2 = fopen(f2, "w");
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base;
        }
        fputc(c, file2); 
    }
    fclose(file);
    fclose(file2);
    file2 = fopen(f2, "r");
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file2)) {
        printf("%s\n", buffer);
    }
    fclose(file2);
}

