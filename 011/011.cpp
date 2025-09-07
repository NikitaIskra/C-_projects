#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    //string text;
    //cout << "Enter a text: " << endl;
    //cin >> text;
    //int size = sizeof(text);
    //for (int i = 0; i < size; i++) {
    //    cout << text[i] << endl;
    //}
    //1
    //string symbol = "/*% @!# &/-";
    //int size = symbol.size();
    //for (int i = 0; i < size; i++) {
    //    if (symbol[i] == ' ') {
    //        symbol[i] = '\t';
    //    }
    //}
    //for (int i = 0; i < size; i++) {
    //    cout << symbol[i];
    //}
    //2
    //int countl = 0;
    //int counts = 0;
    //int countn = 0;
    //string text = "He*l/2131sdg";
    //int size = text.size();
    //for (int i = 0; i < size; i++) {
    //    if (isalpha((text[i]))) {
    //        countl++;
    //    }
    //    else if (isdigit((text[i]))) {
    //        countn++;
    //    }
    //    else if (ispunct((text[i]))) {
    //        counts++;
    //    }
    //}
    //cout << "Letters: " << countl << endl;
    //cout << "Symbols: " << counts << endl;
    //cout << "Numbers: " << countn << endl;
    //3
    //int count = 0;
    //string text;
    //cout << "enter a text: ";
    //getline(cin, text);
    //int size = text.size();
    //for (int i = 0; i < size; i++) {
    //    if (text[i] != ' ' && (i + 1 == text.size() || text[i + 1] == ' ')) {
    //        count++;
    //    }
    //}
    //cout << "Words: " << count;
    //4
    //int i = 0;
    //string text = "bob";
    //int size = text.size() - 1;
    //bool palindrome = true;
    //while (i < size){
    //    if (text[i] != text[size]) {
    //        palindrome = false;
    //        break;
    //    }
    //    i++;
    //    size--;
    //}
    //if (palindrome) {
    //    cout << "Is palindrome!";
    //}
    //else {
    //    cout << "Is not palindrome!";
    //}
    //3.1
    int countw = 0;
    int countr = 0;
    int countc = 0;
    string text = "Hello, world sgesgs.Hello world aaabwgbf, jgbba ";
    string word;
    cout << "Enter the search word: ";
    cin >> word;
    int size = text.size();
    for (int i = 0; i < size; i++) {
        if (text.find(word) != string::npos) {
            countw++;
        }
        if (text[i] == '.') {
            countr++;
        }
        if (text[i] == '.' || text[i] == ',') {
            countc++;
        }
    }
    //for (int i = 0; i < size; i++) {
    //    cout << text;
    //}
    cout << "Words: " << countw << endl;
    cout << "Sentence: " << countr << endl;
    cout << "Dots and commas" << countc << endl;
}


