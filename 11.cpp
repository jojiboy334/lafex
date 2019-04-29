#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{

	setlocale(0, "");
	cout << setiosflags(ios::left) << setw(12) << "Last Name" << setw(12) << "First Name"
		<< setw(20) << "Adress" << setw(12) << "City" << endl;
	cout << setfill('-') << setw(60) << "-" << endl;
	cout << setfill(' ') << setw(12) << "Petrov" << setw(12) << "Vasiliy" << setw(20)
		<< "Klenova 16" << setw(12) << "St-Petersburg" << endl
		<< setw(12) << endl
		<< setw(12) << "Sidorov" << setw(12) << "Ivan" << setw(20) << "Berezova 21"
		<< setw(12) << "Kaliningrad" << endl;
	system("pause");
}