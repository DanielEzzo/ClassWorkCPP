

#include <iostream>
using namespace std;

int main()
{
	/*
	int a, b, c, d, e, f, g, h, j, k, max ;

	cin >> a >> b >> c >> d >> e >> f >> g >> h >> j >> k;
	max = a;
	if (max < b) 
		max = b;
	if(max <c)
		max = c;
	if (max < d)
		max = d;
	if (max < e)
		max = e;
	if (max < f)
		max = f;
	if (max < h)
		max = h;
	if (max < j)
		max = j;
	if (max < k)43
		max = k;
	cout << max;

	
	int array[10]{}, min, sum = 0;
	for (int i = 0; i < 10; i++)  cin >> array[i]; 
	for (int i = 9; i > 0; i--) {
		cout << array[i];
	}
	*/

	srand(time(NULL));
	int min = 10, max = 99;
	//1
	int array[10]{1,1};
	for (int i = 2; i < 10; i++) {
		array[i]= 10 + rand() % 90;
		cout << array[i] << " ";
	}
	
	//2
	double sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += array[i];
	}
	cout << endl << sum / 10;

	//3
	for (int i = 0; i < 10; i++) {
		if (array[i] % 5 == 0) {
			cout <<endl<< i;
			break;
		}
	}

	//4
	int sum1 = 0;
	for (int i = 0; i < 10; i++) {
		sum1 += array[i];
	}
	if ((sum1 % 2) == 0) cout << endl << "odd";

	//5
	for (int i = 0, index = -1; i < 10; i++) {
		if (((array[i] + array[i + 1]) % 10)) {}
		else {
			index = i;
			cout << endl << index;
		}
	}

	//6
	cout << endl;
	int array_1[10]{1,1};
	for (int i = 2; i < 10; i++) {
		array_1[i] = 10 + rand() % 90;
		cout << array_1[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[i] == array_1[j]) {
				cout << endl << array[i];
				break;
			}
		}
	}
}

