
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	char ch;
	int num;
	cout << "Enter the number: " << endl;
	cin >> num;

	for (int j = 0; j < 200; j++)
	{
		ch = (j % 10) ? ' ' : '\n';
		cout << setiosflags(ios::left) << setw(6) << num * j << ch;

	}
	cout << endl << endl;

	system("pause");
}