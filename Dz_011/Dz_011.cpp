#include <iostream>
#include <string>

using namespace std;

//1
//string delet(string text, int del) {
//        text.erase(del, 1);
//        return text;    
//}
//2
//string delet(string text, char del) {
//    string result;
//    for (int i = 0; i < text.size(); i++) {
//        if (text[i] != del) {
//            result += text[i];
//        }
//    }
//        return result;    
//}
//3
//string ins(string text, char in, int s) {
//    text.insert(s, 1, in);
//    return text;
//}

int main()
{
    //1
    //string text = "Hello world!";
    //int del;
    //cout << "Enter symbol: ";
    //cin >> del;
    //cout << delet(text, del);
    //2
    //string text = "Hello world!";
    //char del;
    //cout << "Enter symbol: ";
    //cin >> del;
    //cout << delet(text, del);
    //3
    //string text = "Hello world!";
    //char in;
    //cout << "Enter symbol: ";
    //cin >> in;
    //int s;
    //cout << "Enter position: ";
    //cin >> s;
    //cout << ins(text, in, s);
    //4
    //string res;
    //string text;
    //cout << "Enter a text: ";
    //cin >> text;
    //for (int i = 0; i < text.size(); i++) {
    //    if (text[i] == '.') {
    //        text[i] = '!';
    //    }
    //}
    //cout << text;
    //5
    //string text;
    //char s;
    //int counts = 0;
    //cout << "Enter a text: ";
    //getline(cin, text);
    //cout << "Enter wanted symbol: ";
    //cin >> s;
    //for (int i = 0; i < text.size(); i++) {
    //    if (text[i] == s) {
    //        counts++;
    //    }
    //}
    //cout << counts;
    //6
    string text;
    int countn = 0;
    int countl = 0;
    int counts = 0;
    cout << "Enter a text: ";
    getline(cin, text);
    for (int i = 0; i < text.size(); i++) {
        if (isalpha(text[i])) countl++;
        else if (isdigit(text[i])) countn++;
        else counts++;
    }
    cout << "Letters: " << countl << endl;
    cout << "Numbers: " << countn << endl;
    cout << "Symbols: " << counts << endl;
}

