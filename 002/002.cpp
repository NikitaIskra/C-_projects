#include <iostream>

using namespace std;

int main()
{
    //short a = 0;
    //unsigned int b = 0UL;
    //long c = 0;
    //long long d = 0;
    //float e = 0.0f;
    //long double g = 0.0;
    //char ch = 'a';
    //bool bo = true;
    //string str = "string";
    //int chislo(10);
    //cout <<"Value: " << chislo << endl;
    //int example('C');
    //cout << "Char1: " << example << endl;
    //int count{ 'c' };  
    //cout << "Char2: " << count << endl;
    //unsigned int error (-123);
    //cout << "Error: " << error << endl;


    //short a = 1001;
    //int b = 200;

    //float c = 10.5f;
    //double d = 2.0;

    //int sum = a + b;
    //double div = c / d;

    //cout << "Sum: " << sum << endl;
    //cout << "Div: " << div << endl;

    //int h = 10;
    //int v = 3;

    //int ost = h % v;

    // 4000 сек 
    // sec = 4000%60 = 
    // min = (4000/60)%60
    // hour = 4000%3600


    //int size = 0;
    //int width = 1;
    //size = size + 1;
    //width++;
    //++width;
    //int current = 6*width++;// current = width +1 => 3 => width = 4
    //int next = ++width*6;// next = 1+width => 5 => width = 5


    //cout << "Size = " << size << endl;
    //cout << "Width = " << width << endl;

    //cout << "Current = " << current << endl;
    //cout << "Current = " << next << endl;

    //double sum = 0.0;
    //cout << "Vvedit sumu prodashiv: " << endl;
    //cin >> sum;
    //double res = sum*double(0.05)+100;

    //cout << "Sarplata: " << res << "$" << endl;


    //double size_file;
    //cout << "Enter a size file: " << endl;
    //cin >> size_file;
    //double byte = size_file * 1024 * 1024 * 1024;
    //double speed;
    //cout << "Enter a speed download (b/s): " << endl;
    //cin >> speed;
    //int sec = double(size_file) / double(speed);
    //int min = (sec / 60) % 60;
    //int hour = sec % 3600;
    //int seconds = sec % 60;
    //cout << "Sec: " << seconds << endl;
    //cout << "Min: " << min << endl;
    //cout << "Hour: " << hour << endl;

    int num(0);
    cout << "Enter a num: " << endl;
    cin >> num;
    if (num > 0) { cout << "Chuslo posutuvne" << endl; }
    else if (num<0) { cout << "Chuslo negatuvne" << endl; }
    else { cout << "Chuslo dorivnue 0" << endl; }
    return 0;
}