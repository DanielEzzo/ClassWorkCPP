#include <iostream>
using namespace std;



int main()
{
	/*
	int a = 8;
	int* pa = &a;
	cout << pa;
	cout << *pa;*/

	/*int a = 8, b = -9;
	int* pa = &a;
	int* pb = &b;

	cout << ((*pa > *pb) ? *pa : *pb);*/

	/*int chis = 9;
	int* pChis = &chis;
	cout << ((*pChis >= 0) ? ">0" : "<0");*/

	/*int num1 = 19, num2 = 8;
	int* p1 = &num1;
	int* p2 = &num2;
	swap(*p1, *p2);
	cout << *p1 << " " << *p2;*/

	/*char  dey;
	float num1, num2;
	cin >> num1 >> num2 >> dey;

	float* p1 = &num1;
	float* p2 = &num2;
	char* pDey = &dey;

	switch (*pDey) {
	case '+':
		cout << *p1 + *p2;
		break;
	case '-':
		cout << *p1 - *p2;
		break;
	case '*':
		cout << *p1 * *p2;
		break;
	case '/':
		cout << *p1 / *p2;
		break;
	}*/


	srand(time(NULL));
	/*const int SIZE = 10;
	int arr[SIZE]{};
	int* pArr = arr;
	for (int i = 0; i < SIZE; i++) {
		*(pArr + i) = 10 + rand() % 90;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << *(pArr + i) << endl;
	}
	cout << endl;

	int sum = 0;
	int* pSum = &sum;

	for (int i = 0; i < SIZE; i++) {
		*pSum += *(pArr + i);
	}
	cout << *pSum;*/

	/*const int SIZE = 10;
	int array[SIZE];

	for (int i = 0; i < SIZE; i++) {
		array[i] = 1 + rand() % 9;
		cout << array[i] << " ";
	}
	cout << endl;
	int size = 0;
	int* arr = new int[size];
	
	for (int i = 0; i < SIZE; i++) {
		if(array[i] % 2 == 0){
			size++;
			arr[size] = array[i];
		}
		else {
			
		}
	}
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}*/

	const int SIZE = 10;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++) {
		arr[i] = 10 + rand() % 90;
		cout << arr[i];
	}

	int size2 = 0 + rand() % SIZE + 1;
	cout << size2;
	int* arr2 = new int[size2];

	for (int i = 0; i < size2; i++) {
		for (int j = 1; j < size2; j++) {
			if (arr2[i] == arr2[j]) {
				arr2[j] = -1;
			}
			
		}
	}

	int size3 = SIZE - size2;
	int* arr3 = new int[size3];

	for (int i = 0; i < size2; i++) {
		arr3[i] = arr[arr2[i]];
	}
	cout << endl;
	for (int i = 0; i < size3; i++) {
		cout << arr3;
	}
}