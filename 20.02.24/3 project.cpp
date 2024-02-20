

#include <iostream>
using namespace std;
int main()
{
	//cout << (( % 2) ? "odd" : "even");
	/*double a, b;
	char dei;
	cin >> a >> b >> dei;
	switch (dei) {
	case '*':
		cout << a * b;
		break;
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;
	case '/':
		if (b == 0) {
			cout << "Error";
		}
		else cout << a / b;
		break;
	//нам ещё что-то нужно?
	}
	

	int num;
	cin >> num;
	if (num % 2 == 0) {
		cout << "even";
	}
	else cout << "odd";
	if ((10 < num) && (num < 20)) {
		cout << num << ">10" << "<20";
	}
	else cout << num << "<10" << ">20";


	int gran_a1, gran_a2, gran_b1, gran_b2, chet;
	cin >> gran_a1 >> gran_a2 >> gran_b1 >> gran_b2;

	if (gran_a1 > gran_a2) {
		gran_a1, gran_a2 = gran_a2, gran_a1;
	}
	if (gran_b1 > gran_b2) {
		gran_b1, gran_b2 = gran_b2, gran_b1;
	}

	if ((gran_a1 < num) && (gran_a2)) {
		chet++ ;
	}
	if ((gran_b1 < num) && (gran_b2)) {
		chet++ ;
	}

	switch (chet){
	case 0:
		cout << "no one";
	case 1:
		cout << "one";
	case 2:
		cout << "everuone";
	}
	*/

	int vremigoda, max, dengi;
	cout << "input zima";
	cin >> dengi;
	for (int i = 0; i < 2; i++) {
		cin >> max;
		if (max < dengi) {
			max = dengi;
			vremigoda = 1;
		}
		
	}

	cout << "input vesna";
	cin >> dengi;
	for (int i = 0; i < 2; i++) {
		cin >> max;
		if (max < dengi) {
			max = dengi;
			vremigoda = 2;
		}

	}

	cout << "input vesna";
	cin >> dengi;
	for (int i = 0; i < 2; i++) {
		cin >> max;
		if (max < dengi) {
			max = dengi;
			vremigoda = 2;
		}

	}

	cout << "input leto";
	cin >> dengi;
	for (int i = 0; i < 2; i++) {
		cin >> max;
		if (max < dengi) {
			max = dengi;
			vremigoda = 3;
		}
	}
	cout << "input vesna";
	cin >> dengi;
	for (int i = 0; i < 2; i++) {
		cin >> max;
		if (max < dengi) {
			max = dengi;
			vremigoda = 4;
		}
	}
	switch (vremigoda) {
	case 1:
		cout << "zima";
		break;
	case 2:
		cout << "vesna";
		break;
	case 3:
		cout << "leto";
		break;
	case 4:
		cout << "osen";
		break;
	}
}

