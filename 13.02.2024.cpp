#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int a ;
	int b = 9;
	a = 90;
	//числовые
	short a1 = 12;//2 байта
	cout << "типы данных\t| мин значение\t\t| макс значение\t\t| кол-во байт\t| описание"<<endl;
	cout<<"short\t\t";
	cout <<"| "<< SHRT_MIN <<"\t\t";
	cout <<"| " << SHRT_MAX<<"\t\t\t";
	cout <<"| " << "2\t\t";
	cout <<"| "<<"целые числа" << endl;


	cout<<"int\t\t";
	cout <<"| "<< INT32_MIN <<"\t\t";
	cout <<"| " << INT32_MAX <<"\t\t";
	cout <<"| " << "4\t\t";
	cout <<"| "<<"целые числа" << endl;

	cout << "llong\t\t";
	cout << "| " << LLONG_MIN << "\t";
	cout << "| " << LLONG_MAX << "\t";
	cout << "| " << "8\t\t";
	cout << "| " << "целые числа" << endl;

	cout << "float\t\t";
	cout << "| " << FLT_MIN << "\t\t";
	cout << "| " << FLT_MAX << "\t\t";
	cout << "| " << "4\t\t";
	cout << "| " << "ДРОБНЫЕ числа" << endl;

	cout << "double\t\t";
	cout << "| " << DBL_MIN << "\t\t";
	cout << "| " << DBL_MAX << "\t\t";
	cout << "| " << "8\t\t";
	cout << "| " << "ДРОБНЫЕ числа" << endl;

	cout << "char\t\t";
	cout << "| " << CHAR_MIN << "\t\t\t";
	cout << "| " << CHAR_MAX << "\t\t\t";
	cout << "| " << "1\t\t";
	cout << "| " << "Символы" << endl;

	cout << "bool\t\t";
	cout << "| " <<  "0\t" << "\t\t";
	cout << "| " << "1\t" << "\t\t";
	cout << "| " << "1\t\t";
	cout << "| " << "логические числа" << endl;
	
}
