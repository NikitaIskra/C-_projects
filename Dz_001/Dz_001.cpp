#include <iostream>
using namespace std;
int main()
{
    //1
    //int a;
    //int h = 0;
    //int m = 0;
    //cout << "Enter time in seconds: " << endl;
    //cin >> a;
    //h = a / 3600;
    //m = (a % 3600) / 60;
    //cout << "In hours: " << h << endl;
    //cout << "In minutes: " << m << endl;
    //return 0;

    //2
    //double r;
    //cout << "Enter a fractional number: " << endl;
    //cin >> r;
    //int h = (int)r;
    //int k = (int)((r - h) * 100 + 0.5);
    //cout << h << " grn " << k << " kop" << endl;
    //return 0;

    //3
    //int m;
    //double time_input;
    //int min, sec;
    //int r = 0;
    //int c = 0;
    //int speed = 0;
    //cout << "Enter the distance length (meters): " << endl;
    //cin >> m;
    //cout << "Enter time (min.sec): " << endl;
    //cin >> time_input;
    //min = (int)time_input;
    //sec = (int)((time_input - min) * 100 + 0.5);
    //c = min * 60 + sec;
    //speed = (double)m / c * 3.6;
    //cout << "Distance: " << m << " m" << endl;
    //cout << "Time: " << min << " min " << sec << " sec " << " = " << c << " sec " << endl;
    //cout << "You ran at speed: " << speed << " km/h" << endl;
    //return 0;

    //4
    int day;
    cout << "Enter the number of days: " << endl;
    cin >> day;
    int weeks = day / 7;
    int days = day % 7;
    cout << weeks << " weeks " << days << " days " << endl;
    return 0;
}

