
#include <iostream>
using namespace std;
int main()
{/*
	srand(time(NULL));
	int array[10]{};
	for (int i = 0; i < 10; i++) {
		array[i] = 1 + rand() % 9;
		cout << array[i] << " ";
	}
	cout << endl;
	int array1[10]{};
	for (int i = 0; i < 10; i++) {
		array1[i] = 1 + rand() % 9;
		cout << array1[i] << " ";
	}
	cout << endl;
	
	for (int i = 0, flag ; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[i] == array_1[j]) {
				flag = true;
				for (int k = 0; k < 10; k++) {
					if (array[i] == array[k]) {
						flag = false;
						break;
					}
				}
				if (flag) {
					cout << array[i]<< " " ;
					break;
				}
				else break
				}
			}
		}
		
	}
 for (int i = 0, flag; i < SIZE; i++) {
		flag = true;
		for (int j = 0; j < SIZE; j++) {
			if (array[i] == array2[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			for (int k = 0; k < i; k++) {
				if (array[k] == array[i]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				for (int k = i+1; k < SIZE; k++) {
					if (array[k] == array[i]) {
						flag = false;
						break;
					}
				}
				if (flag) cout << array[i]<<" ";
			}
		}
	}

	for (int i = 0, flag; i < SIZE; i++) {
		flag = true;
		for (int j = 0; j < SIZE; j++) {
			if (array2[i] == array[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			for (int k = 0; k < i; k++) {
				if (array2[k] == array2[i]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				for (int k = i + 1; k < SIZE; k++) {
					if (array2[k] == array2[i]) {
						flag = false;
						break;
					}
				}
				if (flag) cout << array2[i]<<" ";
			}
		}
	}
			
	const int s1 = 5;
	const int s2 = 8;
	const int s3 = s1 + s2;
	int arr1[s1], arr2[s2], arr3[s3], n;


	srand(time(NULL));
	for (int i = 0; i < s1; i++) {
		arr1[i] = 1 + rand() % 9;
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < s2; i++) {
		arr2[i] = 1 + rand() % 9;
		cout << arr2[i] << " ";
	}
	cout << endl;


	
	do {
		cin >> n;
	} while ((n < 0) || (s1 < n));

	for (int i = 0; i < n; i++) {
		arr3[i] = arr1[i];
	}
	for (int i = n, j = 0; j < s2; i++, j++) {
		arr3[i] = arr2[j];
	}
	for (int i = n + s2, j = n; j < s1; j++, i++) {
		arr3[i] = arr1[j];
	}
	for (int i = 0; i < s3; i++) {
		cout << arr3[i] << " ";
	}
	*/

	int poz, kolvo;
		cout << "*** ";
		cin >> poz;
		cout << "***";
		cin >> kolvo;
		cout << endl;
	int arr1[20], arr2[20];


	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		arr1[i] = 1 + rand() % 9;
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < poz; i++) {
		arr2[i] = arr1[i];
	}
	for (int i = kolvo + poz, j = poz; i < 20; i++, j++) {
		arr2[j] = arr1[i];
	}
	for (int i = 0; i < 20 - kolvo; i++) {
		cout << arr2[i] << " ";
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         