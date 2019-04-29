#include <iostream>
#include <CTYPE.H>
using namespace std;

int main() {
	
	char symbol;
	cout << "גגוהטעו סטלגמכ ";
	cin >> symbol;
	if (!islower(symbol))
		cout << "0" << endl;
	else
		cout << "1" << endl;

	system("pause");
	return 0;
}