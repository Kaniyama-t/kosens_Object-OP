#include <string>
#include <iostream>

using namespace std;

int main() {
	int i, j, ret;
	cout << "i = " << endl;
	cin >> i;
	cout << "j = " << endl;
	cin >> j;
	ret = i + j;
	string retmsg = i + "と" + j + "の和は" + ret + "です";
	cout << retmsg << endl;
	return 0;
} 
