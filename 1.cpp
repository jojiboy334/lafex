#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const double f = 7.481;
	int a;
	cout << "������� ���-�� � ��������" << endl;
	cin >> a;
	cout << "���-�� � �����\n" << a / f << endl;


	system("pause");
	return 0;
}