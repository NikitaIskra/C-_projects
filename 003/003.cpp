#include <iostream>

using namespace std;

//int time;
//cout << "Input time: " << endl;
//cin >> time;
//
//switch (time) {
//
//case 12:
//case 1:
//case 2:
//    cout << "Time: Winter " << endl;
//    break;
//case 3:
//case 4:
//case 5:
//    cout << "Time: Spring " << endl;
//    break;
//case 6:
//case 7:
//case 8:
//    cout << "Time: Summer " << endl;
//    break;
//case 9:
//case 10:
//case 11:
//    cout << "Time: Autumn " << endl;
//    break;
//default: cout << "no actual operation" << endl;
//
//}


//char currency;
//const double d_ua = 41;
//const double e_ua = 48;
//const float j_ua = 0.28;
//int sum;
//cout << "Enter a sum: " << endl;
//cin >> sum;
//cout << "Input currency to convert to uan(d - dollar, e - euro, j - jpy): " << endl;
//cin >> currency;
//    
//    switch (currency) {
//
//    case 'd':
//        cout << currency * d_ua << endl;
//        break;
//    case 'e':
//        cout << currency * e_ua << endl;
//        break;
//    case 'j':
//        cout << currency * j_ua << endl;
//        break;
//    default: cout << "no actual operation" << endl;
//
//    }

//string password = "secure123";
//string input;
//int attempts = 3;
//while (attempts > 0) {
//	cout << "Enter a password: " << endl;
//	cin >> input;
//	if (input == password) {
//		cout << "You have access" << endl;
//		break;
//	}
//	else {
//		attempts--;
//		cout << "Your password not correct. You have " << attempts << endl;
//	}
//	if (attempts == 0) {
//		cout << "Access denied" << endl;
//	}
//}



int main()
{
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    int i = num1;
    while (i <= num2) {
        cout << i << " ";
        if (i % 2 == 0) {
            cout << "Parne: " << i << " ";
    }
        if (i % 2 != 0) {
            cout << "Neparne: " << i << " ";
        }
        if (i % 7 == 0) {
            cout << "Kratne: " << i << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
}
