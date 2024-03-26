#include <iostream>
using namespace std;

void showArr(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}

int Min(int array[], int size) {
	int min = array[0];
	for (int i = 1; i < size; i++) {
		if (min > array[i]) min = array[i];
	}
	return min;
}

int indexMin(int array[], int size) {
	int min = array[0], index = 0;
	for (int i = 1; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}
	return index;
}

int copyArr(int arr1[], int arr2[], int size) {
	for (int i = 0; i < size; i++) {
		arr2[i] = arr1[i];
	}
	return 0;
}

void copyArr2(int arr1[], int arr2[], int size) {
	for (int i = 0; i < size; i++) {
		arr2[size - i - 1] = arr1[i];
	}

}

float Avg(int arr[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

void fullCopy(int arr1[], int arr2[], int size1, int size2) {
	if (size1 > size2) swap(size1, size2);
	for (int i = 0; i < size1; i++) {
		arr2[i] = arr1[i];
		cout << arr2[i] << " ";
	}
	for (int i = size1; i < size2; i++) {
		arr2[i] = 0;
		cout << arr2[i] << " ";
	}
}

void zero(int arr1[], int arr2[], int size1, int size2) {
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) arr1[i] = 0;
		}
	}

	for (int i = 0; i < size1; i++) {
		cout << arr1[i] << " ";
	}
}

int main()
{
	/*int arr[6] = { 2,1,10,9,8,7 };
	int h;
	int size = sizeof(arr) / sizeof(arr[0]);
	int arr1[8] = {4, 6, 8, 6,3,10, 7,-9};*/
	//showArr(arr, size);
	//cout << Min(arr, size);
	//cout << endl << indexMin(arr, size);
	//cout << Avg(arr, size);

	//fullCopy(arr, arr1, 6, 8);
	//zero(arr, arr1, 6, 8);
	char field[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == j % 2) {
				field[i][j] = 219;
			}
			else {
				field[i][j] = '  ';
			}
		}
	}
	cout << "  abcdefgh" << endl;
	for (int i = 1; i <= 8; i++) {
		cout << i << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i - 1][j];
		}
		cout << endl;
	}

	int koorI, koorJ;
	cin >> koorI >> koorJ;
	field[koorI][koorJ] = 64;

	

	for (int i = koorI - 1, j = koorJ - 1; 0 <= i && j >= 0; i--, j--) {
		field[i][j] = 43;
	}

	for (int i = koorI - 1, j = koorJ + 1; 0 <= i && j< 8; i--, j++) {
		field[i][j] = 43;
	}

	for (int i = koorI + 1, j = koorJ + 1; i<8 && j < 8; i++, j++) {
		field[i][j] = 43;
	}

	for (int i = koorI + 1, j = koorJ - 1; i < 8 && j >= 0; i++, j--) {
		field[i][j] = 43;
	}

	for (int i = 1; i <= 8; i++) {
		cout << i << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i - 1][j] << field[i - 1][j];
		}
		cout << endl;
	}
}