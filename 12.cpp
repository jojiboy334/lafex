
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double fu, shy, pens, pens2, shy2, drobchast;
	double desfu;
	cout << "������� ���-�� ���������� ������ => " << endl;
	cin >> desfu;
	fu = static_cast<int>(desfu);
	drobchast = desfu - fu;
	shy = drobchast * 20;
	cout << "������ �������: " << fu << "." << shy << endl;

	system("pause");
	return 0;
}