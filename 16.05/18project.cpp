
#include <iostream>
using namespace std;



int main()
{
	srand(time(NULL));

	//int a = 4;
	//cout << a; // 4
	//cout << &a; // адрес

	//int& la = a;// к значению ячейки "a" можем обращаться используя "a" "la"
	//la += 2; //a =6 la=6
	//int* pa = &la;
	//cout << pa; // фдрес
	//cout << *pa;// 6
	//cout << &pa;// адрес pa

	//int* array = new int[4]{ 1,2,3,4 };

	//cout << sizeof(array);//8 - размер памяти занимающий указателем
	//cout << endl << _msize(array);//общий размер занимающий в масиве
	//cout << endl << sizeof(array[0]);//размер памяти занимающий 1 элементом массива

	//int size = _msize(array) / sizeof(array[0]);//колво элементов в массиве
	//

	//int* buf = new int[size + 1];
	//for (int i = 0; i < size + 1; i++) {
	//	buf[i] = array[i];
	//}
	//buf[size] = 5;
	//delete[]array;
	//array = buf;

	//
	//int* buf1 = new int[size - 1];
	//for (int i = 0; i < size - 1; i++) {
	//	buf[i] = array[i];
	//}

	//delete[]array;
	//array = buf1;
	/*int size = 10;
	int* array = new int[size];

	for (int i = 0; i < size; i++) {
		array[i] = 1 + rand() % 9;
		cout << array[i] << " ";
	}
	cout << endl;

	int n, it;
	cin >> n >> it;
	int size2 = size - n;
	int* buf = new int[size2];

	for (int i = 0; i < it; i++) {
		buf[i] = array[i];
	}

	for (int i = it + n; i < size; i++) {
		buf[i-n] = array[i];
	}

	delete[]array;
	array = buf;
	cout << endl;

	for (int i = 0; i < size2; i++) {
		cout << array[i] << " ";
	}*/
	int size1 = 3;
	int size2 = 2;
	int** array = new int*[size1];
	for (int i = 0; i < size1; i++) {
		array[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			array[i][j] = 1 + rand() % 9;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	//+str
	/*int** buf = new int* [size1 + 1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			buf[i][j] = array[i][j];
		}
	}
	
	buf[size1] = new int[size2];
	for (int j = 0; j < size2; j++) {
		buf[size1][j] = 1 + rand() % 9;
	}
	

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = buf;
	cout << endl;
	for (int i = 0; i < size1 + 1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}*/

	//+столбец
	
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2 + 1];
		for (int j = 0; j < size2; j++) {
			buf[i][j] = array[i][j];
		}
	}

	for (int i = 0; i < size1; i++) {
		buf[i][size2] = 1 + rand() % 9;
	}

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = buf;
	cout << endl;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2+1; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	////-str
	//int** buf2 = new int* [size1 - 1];
	//for (int i = 0; i < size1 - 1; i++) {
	//	buf2[i] = new int[size2];
	//	for (int j = 0; j < size2; j++) {
	//		buf2[i][j] = array[i][j];
	//	}
	//}

	//for (int i = 0; i < size1; i++) {
	//	delete[]array[i];
	//}
	//delete[]array;
	//array = buf2;
	//cout << endl;
	//for (int i = 0; i < size1 - 1; i++) {
	//	for (int j = 0; j < size2; j++) {
	//		cout << array[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}