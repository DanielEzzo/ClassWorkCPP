

#include <iostream>
using namespace std;

int main()
{

	/*
	int num1;
	cin >> num1;
	for (int i = 0, num2; i < 3; i++) {
		cin >> num2;

		if (num1 < num2) {
			num1 = num2;
		}
	}
	cout << num1;
	

	int a, b, n;
	cin >> a >> b >> n;
	if (a > b) swap(a, b);
	for (int counter = 0; counter < n && a<=b; counter++, a++) {
		cout << a;
	}
	

	double max, zero = 0;
	cin >> max;

	while (zero <= max) {
		cout << zero<<endl;
		zero += 0.25;
	}
	

	double num, sum=0, count=0;
	cin >> num;
	
	while (num != 0) {
		sum += num;
		count++;
		cin >> num;
	}
	cout << sum / count;
	

	int num;
	char sim;
	cin >> sim;
	num = int(sim);
	if (((65 <= sim) && (sim <= 90)) || ((97 <= sim) && (sim <= 122))) {
		cout << "bukva";
	}
	else cout << "Error";
	

	
	if (min > max) swap(min, max);
	int min1, max1, min2, max2;
	cin >> min1 >> max1 >> min2 >> max2;

	if (min1 > max1) swap(min1, max1);

	if (min2 > max2) swap(min2, max2);

	if ((min1 > min2) && (max1 > max2)) {
		swap(min1, min2);
		swap(max1, max2);
	}

	for (int i = min1; i < min2 && i <= max1; i++) {
		cout << i << endl;

	}
	cout << endl;
	if (min2 < max1) {
		min2 = ++max1;
	}
	for (int i = min2; i <= max2 ; i++) {
		cout << i << endl;

	}
	
	

	int min, max, n, count = 0, proverka = 0;
	cin >> min >> max >> n;

	proverka = n - (min % n);
	if (proverka != 0) {
		min += proverka;
	}

	for (int i = min; i <= max; i += n) {
		count++;
	}
	cout << count;
	*/

	int n = 8, n1;cin >> n;n1 = n / 2;for (int i = 0; i < n; i++) {for (int j = 0; j <= n1; j++) {cout << "* _ ";}cout << endl;}}
