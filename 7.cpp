#include <iostream>
#include <CTYPE.H>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int cel;
	int far;
	cout << "Введите значение в градусах цельсия => " << endl;
	cin >> cel;
	far = (cel * 9 / 5) + 32;
	cout << "В фаренгейтах => " << far << endl;
	system("pause");
	return 0;
}