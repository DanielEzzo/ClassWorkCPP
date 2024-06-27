#include <iostream>
#include <string>
#include <fstream>
#define end cout<<endl
#define random(a,b) a+rand()%(b-a+1)
using namespace std;

void show(int* arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size1; i++) {
			cout << arr[i] << " ";
	}
	end;
}

void filing(int*& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size1; i++) {
			arr[i] = random(1, 9);
	}
}

void show2d(int** arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		end;
	}
	end;
}

void filing2d(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = random(1, 9);
		}
	}
}

void copyArray2d(int**& arr1, int** arr2) {
	int size1 = _msize(arr1) / sizeof(arr1[0]);
	int size2 = _msize(arr1[0]) / sizeof(arr1[0][0]);
	//т.к. массивы одинаковы
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr1[i][j] = arr2[i][j];
		}
	}
}

void addNum(int*& arr, int num, int index) {
	int size = _msize(arr) / sizeof(arr[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	buf[index] = num;
	for (int i = index + 1; i < size + 1; i++) {
		buf[i] = arr[i - 1];
	}
	delete[]arr;
	arr = buf;
}

void addColumn(int**& arr1, int* arr2, int index) {
	int size1 = _msize(arr1) / sizeof(arr1[0]);
	int size2 = _msize(arr1[0]) / sizeof(arr1[0][0]);
	int size = _msize(arr2) / sizeof(arr2[0]);
	if (size != size1) {
		cout << "вставлен не верный длины массив";
	}
	else {
		int** buf = new int* [size1];
		for (int i = 0; i < size1; i++) {
			buf[i] = new int[size2 + 1];
			for (int j = 0; j < index; j++) {
				buf[i][j] = arr1[i][j];
			}
		}
		for (int i = 0; i < size1; i++) {
			buf[i][index] = arr2[i];
		}
		for (int i = 0; i < size1; i++) {
			for (int j = index + 1; j < size2 + 1; j++) {
				buf[i][j] = arr1[i][j - 1];
			}
		}
		for (int i = 0; i < size1; i++) {
			delete[]arr1[i];
		}
		delete[]arr1;
		arr1 = buf;
	}
}

void deleteColumns(int**& arr, int index, int count) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	if (index + count > size2) {
		cout << "вставлен не верный длины массив";
	}
	else {
		int** buf = new int* [size1];

		for (int i = 0; i < index; i++) {
			buf[i] = new int[size2 - count];
			for (int j = 0; j < index; j++) {
				buf[i][j] = arr[i][j];
			}
		}
		for (int i = 0; i < size1; i++) {
			for (int j = index; j < size2; j++) {
				buf[i][j] = arr[i][j + count - 1];
			}
		}

		for (int i = 0; i < size1; i++) {
			delete[]arr[i];
		}
		delete[]arr;
		arr = buf;
	}
}

int minSumm(int** arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int index = 0, sum = 0;

	for (int j = 0; j < size2; j++) {
		sum += arr[0][j];
	}
	for (int i = 1, sumBuf =0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			sumBuf += arr[i][j];
		}
		if (sumBuf < sum) {
			sum = sumBuf;
			index = i;
		}
		sumBuf = 0;
	}
	return index;
}

void seekMin(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int min = arr[0][0], index = 0;

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				index = i;
			}
		}
	}
	int** buf = new int* [size1 - 1];
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	for (int i = index; i < size1+1; i++) {
		buf[i] = arr[i + 1];
	}

	delete[] arr[index];
	arr = buf;
}

void deleteMinStr(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int index = 0;
	int** buf = new int* [size1 - 1];
	for (int i = 1, min = arr[0][0]; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (min < arr[0][0]) {
				min = arr[0][0];
				index = i;
			}
		}
		
	}

	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	for (int i = index + 1; i < size1; i++) {
		buf[i - 1] = arr[i];
	}
	delete[]arr[index];
	arr = buf;
}

int main()
{
	srand(time(NULL));
	//1
	/*int min;
	cin >> min;
	for (int i = 0, num; i < 3; i++) {
		cin >> num;
		if (min > num) {
			min = num;
		}
	}
	cout << min;
	end;*/

	//2
	/*for (int i = -3; i > -25; i -= 3) {
		cout << i << " ";
	}*/

	//3
	/*int str;
	cin >> str;
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = i; j < str; j++) {
			cout << "* ";
		}
		end;
	}*/

	//4
	/*int num, summ = 0, count = 0;
	cin >> num;
	while (num != 0) {
		summ += num;
		count++;
		cin >> num;
	}
	cout << summ / count;*/

	//5
	/*const int SIZE = 5;
	int min, max;
	cin >> min >> max;
	if (max < min) {
		swap(max, min);
	}
	int array1[SIZE];
	for (int i = 0; i < SIZE; i++) {
		array1[i] = random(min, max);
		cout << array1[i] << " ";
	}*/

	//6 todo
	
	/*int size1 = 4;
	int size2 = 4;
	int** array2 = new int* [size1];
	int min, max;
	cin >> min >> max;
	if (max < min) {
		swap(max, min);
	}

	for (int i = 0; i < size1; i++) {
		array2[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			array2[i][j] = random(min, max);
			cout << array2[i][j] << " ";
		}
		end;
	}
	cout<<minSumm(array2);*/

	//7
	/*
	int size1 = 4;
	int size2 = 5;
	int** arr1 = new int* [size1];
	int** arr2 = new int* [size1];

	for (int i = 0; i < size1; i++) {
		arr1[i] = new int[size2];
		arr2[i] = new int[size2];
	}

	filing2d(arr2);
	show2d(arr2);
	copyArray2d(arr1, arr2);
	show2d(arr1);
	*/


	//8
	/*int size = 4;
	int* arr = new int[size];

	filing(arr);
	show(arr);
	addNum(arr,99, 0);
	show(arr);*/

	////9
	//int size1 = 4;
	//int size2 = 5;
	//int** arr1 = new int* [size1];
	//for(int i=0;i<size1;i++){
	//	arr1[i] = new int[size2];
	//}
	//int* arr2 = new int[size1]{7,7,7,7};
	//filing2d(arr1);
	//show2d(arr1);
	//addColumn(arr1, arr2, 2);
	//show2d(arr1);
	// 
	//10
//todo
	/*int size1 = 4;
	int size2 = 10;
	int** arr1 = new int* [size1];
	for(int i=0;i<size1;i++){
		arr1[i] = new int[size2];
	}
	filing2d(arr1);
	show2d(arr1);
	deleteColumns(arr1, 2, 5);	
	show2d(arr1);*/
	//11
	/*int size1 = 4;
	int size2 = 2;
	int** arr1 = new int* [size1];
	for (int i = 0; i < size1; i++) {
		arr1[i] = new int[size2];
	}
	filing2d(arr1);
	show2d(arr1);
	seekMin(arr1);
	show2d(arr1);*/
	//11
	int size1 = 4;
	int size2 = 2;
	int** arr1 = new int* [size1];
	for (int i = 0; i < size1; i++) {
		arr1[i] = new int[size2];
	}
	filing2d(arr1);
	show2d(arr1);
	deleteMinStr(arr1);
	show2d(arr1);

}