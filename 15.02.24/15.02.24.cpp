

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	/* 
	cout << "input 1: ";
	cin >> a;
	cout << "input 2: ";
	cin >>  b;
	cout << "input 3: ";
	cin >> c;
	
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "/" << b << "=" << a / b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	
	
	cout << a << "+" << b << "+" << c << "=" << a + b + c << endl;
	cout << a << "-" << b << "-" << c << "=" << a - b - c << endl;
	cout << a << "/" << b << "/" << c << "=" << a / b / c << endl;
	cout << a << "*" << b << "*" << c << "=" << a * b * c << endl;
	

	double distance, size;
	
	cout << "Масштаб карты(кол-во км в одном см)-> ";
	cin >> distance;
	cout << "Растояние между точками, изображающими нас. пункты-> ";
	cin >> size;

	cout << "Расстояние между нас.пунктами:" << size * distance << endl;
	

	int a, b, c, chis;
	cin >> chis;
	a = (chis % 10);
	b = chis % 100/10;
	c = (chis % 1000)/100;
	cout << (a * 100 + b * 10 + c) * 2;
	

	double a, b, c;
	cout << "Вычисление объёма параллелепипида. \nВедите исходные данные: \n";
	cout << "длинна(см) ->" << endl;
	cin >> a;
	cout << "ширина(см) ->" << endl;
	cin >> b;
	cout << "высота(см) ->" << endl;
	cin >> c;
	cout << "объём: " << a * b * c << "куб. см." << endl;
	
	int num; 
	cin >> num;
	if (num % 2 == 0) {
		cout << "да";
	}
	else {
		cout << "нет";
	}
	cout <<((num%2)?"odd":"even");
	


	double num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << num1 << endl;
	}
	else if (num1 < num2) {
		cout << num2 << endl;
	}
	else {
		cout << "равны" << endl;
	}

	cout << ((num1>num2) ? num1 : num2);
	



	//3  
	double chis;
	cin >> chis;
	if (chis < 0) {
		cout << "меньше";
	}
	else if (chis > 0) {
		cout << "больше"<<endl;
	}
	else {
		cout << "равнo"<<endl;
	}
	//4
	double num1, num2;
	cin >> num1 >> num2;
	if (num1 == num2) {
		cout << "равны";
	}
	else
	{
		if (num1 < num2) {
			cout << num1 << num2;
		}
		if (num1 > num2) {
			cout << num2 << num1;
		}
	}
	*/
	//1
	double mark1, mark2, mark3, mark4, mark5;
	cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
	if ((mark1 + mark2 + mark3 + mark4 + mark5) / 5 > 4) {
		cout << "сдал" << endl;
	}
	//2
	int num;
	cin >> num;
	if (num % 2 == 0) {
		cout << num * 3<<endl;
	}
	else {
		cout << num / 2 << endl;
	}

	//3
	double num1, num2, dey;
	cout << "Введите 1 и 2 число, а затем действие(\"+\" - 1, \"-\" - 2, \"*\" - 3, \"/\" - 4"<<endl;
	cin >> num1 >> num2>>dey;
	if (dey == 1) {
		cout << num1 + num2 << endl;
	}
	else if (dey == 2) {
		cout << num1 - num2 << endl;
	}
	else if (dey == 3) {
		cout << num1 * num2 << endl;
	}
	else if (dey == 4) {
		if (num1 == 0) {
			cout << "нельзя" << endl;
		}
		else {
			cout << num1 / num2 << endl;
		}
		
	}
}

