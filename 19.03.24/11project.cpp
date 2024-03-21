#include <iostream>
using namespace std;

int main()
{

	
	//1
	srand(time(NULL));
	const int SIZE = 10, MAX = 99;
	int array[SIZE];
	int min = 10;

	for (int i = 0; i < SIZE; i++) {
		array[i] = min + rand() % (MAX + 1 - min);
		cout << array[i] << " ";
	}
	cout << endl;

	/*
	int count1 = 0;

	for (int i = 0, flag, min, max ; i < SIZE; i++) {
		flag = true;

		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (array[j] > array[j+1]) {
				swap(array[j + 1], array[j]);
				count1++;
				flag = false;
			}
		}

		if (flag) break;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}

	cout << endl << count1 << endl;

	//2
	int count = 0;

	for (int i = 0, min, max; i < SIZE; i++) {
		max = SIZE - 1 - i;
		min = i;

		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (array2[j] > array2[j + 1]) {
				swap(array2[j + 1], array2[j]);
				count++;
			}
		}

		for (int j = SIZE - 1 - i; j > i + 1; j--) {
			if (array2[j] < array2[j - 1]) {
				swap(array2[j - 1], array2[j]);
				count++;
			}
		}
		if (min >= max) break;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}

	cout << endl << count;
	

	for (int i = 1; i < SIZE; i++) {
		for (int j = i; j>0; j--) {
			if (array[j] < array[j - 1]) swap(array[j], array[j - 1]);

			else break;
		}
	}
	

	int array4[MAX+1]{};

	for (int i = 0; i < SIZE; i++) {
		array4[array[i]]++;

	}

	
 
	for (int i = 1, n = 0; i <= MAX; i++) {
		while (array4[i] > 0) {
			array[n++];
			array4[i]--;
		}
	}
	//for(int i = MAX; i<SIZE)

	for (int i = 0; i < MAX; i++) {
		cout << array[i] << " ";
	}

	cout << endl;
	*/

	for (int i = 0; i <= SIZE / 2; i++) {
		swap(array[i], array[SIZE - i - 1]);
	}

	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}

}
