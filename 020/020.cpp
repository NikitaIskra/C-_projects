#include <iostream>

using namespace std;
#define LOG(msg) \
			cout << "[" << __DATE__ << " " << __TIME__ << " " << __FILE__ "]" << msg << endl;

int main()
{
	LOG("I start my program");
	LOG("I finished my program");
}

