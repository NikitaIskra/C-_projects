#include <iostream>

using namespace std;

int main()
{
    //1
    //int num(0);
    //cout << "Enter a six-digit number: " << endl;
    //cin >> num;

    //if (num < 100000 || num > 999999) {
    //    cout << "The number is not six digits." << endl;
    //    return 1; 
    //}

    //int sumfirst = 0;
    //int sumlast = 0;

    //for (int i = 0; i < 6; i++) {
    //    int digit = num % 10;
    //    num /= 10;

    //    if (i < 3) {
    //        sumfirst += digit;
    //    }
    //    else {
    //        sumlast += digit;
    //    }
    //}
    //if (sumfirst == sumlast) {
    //        cout << "The number is lucky! " << endl;
    //    }
    //else {
    //        cout << "The number is not lucky" << endl;
    //    }
    //return 0;

    //2
    //int num(0);
    //cout << "Enter a four-digit number: " << endl;
    //cin >> num;

    //if (num < 1000 || num > 9999) { cout << "The number is not four significant." << endl; 
    //return 1;
    //}


    //int first_digit = num / 1000; 
    //int second_digit = (num / 100) % 10;   
    //int third_digit = (num / 10) % 10;     
    //int fourth_digit = num % 10;

    //int new_num = second_digit * 1000 + first_digit * 100 + fourth_digit * 10 + third_digit;

    //cout << new_num << endl;

    //return 0;

    //3
    //int num, max_num;
    //cout << "Enter 7 numbers: " << endl;
    //cin >> num;
    //max_num = num;
    //for (int i = 1; i < 7; ++i) {
    //    cin >> num;

    //    if (num > max_num) {
    //        max_num = num;
    //    }
    //}
    //cout << "Max number: " << max_num << endl;
    //return 0;

    //4
    int distance_a = 0;
    cout << "Enter the distance from point A to point B: ";
    cin >> distance_a;

    int distance_b = 0;
    cout << "Enter the distance from point B to point C: ";
    cin >> distance_b;

    int weight = 0;
    cout << "Enter the weight (kg): ";
    cin >> weight;

    int distance = distance_a + distance_b;

    int c_a = 0, c_b = 0, c = 0;

    if (weight < 500) {
        c_a = distance_a * 1;  
        c_b = distance_b * 1;  
    }
    else if (weight < 1000) {
        c_a = distance_a * 4; 
        c_b = distance_b * 4;  
    }
    else if (weight < 1500) {
        c_a = distance_a * 7;  
        c_b = distance_b * 7;  
    }
    else if (weight < 2000) {
        c_a = distance_a * 9;  
        c_b = distance_b * 9;  
    }
    else {
        cout << "Weight exceeds the limit for flight!" << endl;
        return 1;
    }

    c = c_a + c_b;

    if (c_a > 300 || c_b > 300 || weight > 2000 || c > 300) {
        cout << "Flight not possible!" << endl;
        return 1;
    }

    if (c > c_a) {
        int c_r = c - c_a;
        cout << "Refuel: " << c_r << " liters" << endl;
    }

    return 0;
}
