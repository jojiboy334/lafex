
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double fu, shy, pens, pens2, shy2;
	double desfu;
	cout << "������� ���-�� ������, ��������� � ������ => " << endl;
	cin >> fu >> shy >> pens;
	pens2 = pens / 12;
	shy2 = (pens2 + shy) / 20;
	desfu = fu + shy2;

	cout << "���������� ������: " << desfu << endl;

	system("pause");
	return 0;
}