#include <iostream>
#include <CTYPE.H>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double fu = 1.487;
	double fr = 0.172;
	double grm = 0.584;
	double japy = 0.00955;
	int doll;
	cout << "¬ведите сумму в долларах => " << endl;
	cin >> doll;
	cout << "fu = " << doll / fu << endl;
	cout << "fr = " << doll / fr << endl;
	cout << "grm = " << doll / grm << endl;
	cout << "japy = " << doll / japy << endl;
	system("pause");
	return 0;
}