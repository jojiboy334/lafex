#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int f = 7.481;
	int a;
	cout << "Введите кол-во в галлонах" << endl;
	cin >> a;
	cout << "Кол-во в футах\n" << a << endl;


	system("pause");
	return 0;
}