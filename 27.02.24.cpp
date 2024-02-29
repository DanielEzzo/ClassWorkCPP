
#include <iostream>
using namespace std;

int main()
{
	/*int fac=1, chis1=1, chis;

	cin >>  chis;

	if (chis == 0) {
		cout << "1";
	}
	else if (chis < 0) {
		cout << "Error";
	}
	else {
		while (chis1 <= chis) {
			fac = fac * chis1;
			chis1++;

		}
		cout << fac;
	}

	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите границы диапозона: ";
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	cout << "числа в данном диапозоне: ";
	while (a <= b) {
		cout << a++<<" ";
	}
	cout << endl << "это все числа от " << a << " до " << b;

	int n, n1=0;
	cin >> n;
	for (int i = 1; n != 0; i *= 10) {
		n1 += (n % 10) * i;
		n /= 10;

	}
	cout << n1;

	char sim;
	int row, column;
	cin >> sim >> row >> column;
	for (int i = 0; i < row; i++) {
		cout << sim<<" ";
	}
	cout << endl;
	for (int i = 0; i < column - 2; i++) {
		cout << sim << " ";
		for (int j = 0; j < row  -2; j++) {
			cout << "  ";
		}
		cout << sim << " " <<endl;
	}
	for (int i = 0; i < row; i++) {
		cout << sim << " ";
	}
	cout << endl;
	*/

	int kol;
	cin >> kol;
	for (int i = 0; i < kol; i++)
	{
		for (int j = 0; j < kol - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	for (int i = kol; i >= 0; i--)
	{
		for (int j = 0; j < kol - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < kol; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "  ";
		}
		for (int j = 0; j < kol - i; j++)
		{
			cout << "g ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < kol + 1; i++)
	{
		for (int j = kol - i; j > 0; j--)
		{
			cout << "  ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "g ";
		}
		cout << endl;
	}
}
