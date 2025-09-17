#include <iostream>
#include <bitset>

using namespace std;

//union IntBytes {
//    int number;
//    bool bytes[sizeof(int)];
//
//};

void printBits(unsigned char byte) {
    for (int i = 7; i >= 0; --i) {
        cout << ((byte >> i) & 1);
    }
    cout << endl;
}

int main()
{
    //IntBytes data;
    //data.number = 0x12345678;
    //bitset<8> binary;
    //cout << "Number: " << hex << data.number << endl;
    //for (int i = 0; i < sizeof(int); ++i) {
    //    cout << hex << static_cast<int>(data.bytes[i]) << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < sizeof(int); ++i) {
    //    binary = data.bytes[i];
    //    cout << binary << " ";
    //}
    //cout << endl;

    //int count = 0;
    //int num;
    //cout << "Enter number: ";
    //cin >> num;
    //data.number = num;
    //for (int i = 0; i < sizeof(int); i++) {
    //    if (data.bytes[i] == 0x00) {
    //        count++;
    //        cout << "Null" << i << " ";
    //    }
    //    else {
    //        cout << "Not Zero" << i << " ";
    //    }
    //}
    //cout << "Zero Number" << count;

    unsigned int value = 8;
    cout << (value << 2) << endl;   
    unsigned char second = 0b10000000;
    unsigned char result;
    printBits(second);
    printBits(~second);
    result = second ^ second;
    printBits(result);
    string text = "Hello, user!";
    char key = 0x5A;
    for (char& c : text) {
        c ^= key;
    }
    cout << "Encrypted: " << text << endl;

    for (char& c : text) {
        c ^= key;
    }

    cout << "Decrypted: " << text << endl;
}

