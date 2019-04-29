#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const double f = 7.481;
	int a;
	cout << "Введите кол-во в галлонах" << endl;
	cin >> a;
	cout << "Кол-во в футах\n" << a / f << endl;


	system("pause");
	return 0;
}