
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char l;
	int m1, m2, m3, m4;
	cout << "������� ������ �����: " << endl;
	cin >> m1 >> l >> m2;
	cout << "������� ������ �����: " << endl;
	cin >> m3 >> l >> m4;
	cout << "����� ����� " << (m1 * m4 + m2 * m3) << "/" << m2 * m4 << endl;
	system("pause");
	return 0;
}