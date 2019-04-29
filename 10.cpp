
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double fu, shy, pens, pens2, shy2;
	double desfu;
	cout << "Введите кол-во фунтов, шиллингов и пенсов => " << endl;
	cin >> fu >> shy >> pens;
	pens2 = pens / 12;
	shy2 = (pens2 + shy) / 20;
	desfu = fu + shy2;

	cout << "Десятичных фунтов: " << desfu << endl;

	system("pause");
	return 0;
}