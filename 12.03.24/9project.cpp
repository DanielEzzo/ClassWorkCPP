#include <iostream>
using namespace std;
int main()
{
	const int SIZE1 = 4;
	const int SIZE2 = 4;

	int st[SIZE1][SIZE2];
	/*
	srand(time(NULL));
	int bstindex;
	double sum = 0, counter = 0, bstsumm = 0, bstcounter = 0, bstavg = 0;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			st[i][j] = 2 + rand() % 4;
			sum += st[i][j];
			counter++;
			cout << st[i][j] << " ";
			bstsumm += st[i][j];
			bstcounter++;
		}
		if (bstavg < bstsumm / bstcounter) {
			bstavg = bstsumm / bstcounter;
			bstindex = i;
		}
		cout << endl;
	}

	cout << sum << " " << sum / counter << " " << bstindex<<endl;


	for (int i = 0; i < 8; i++) {
		cout << st[bstindex][i]<<" ";
	}
	*/

	cout << "\teng\t|\tlit|\trus|\tmath|" << endl;
	srand(time(NULL));
	int gst, bst, jk = -1, ik = -1;
	double sum = 0;
	double sumvse = 0, gsum = 0, bsum = 0;
	for (int i = 0; i < SIZE1; i++) {
		cout << "  ";
		cout << "st" << i;
		for (int j = 0; j < SIZE2; j++) {
			st[i][j] = 2 + rand() % 4;
			cout << "\t|" << st[i][j];
			sum += st[i][j];
			sumvse += st[i][j];
			
		}
		cout << "\t| " << sum / SIZE2;
		if (sum > gsum) {
			gsum = sum;
			gst = i;
		}

		else if (bsum<sum) {
			bsum = sum;
			bst = i;
		}

		sum = 0;
		cout << endl;
	}
	sum = 0;
	cout << "      ";
	for (int i = 0; i < SIZE2; i++) {
		for (int j = 0; j < SIZE1; j++) {
			sum += st[j][i];
		}
		cout << "\t|" << sum / SIZE1;
		sum = 0;
	}
	cout << "\t|";
	cout << sumvse / (SIZE1 * SIZE2);

	cout << endl << endl;
	cout << "good st" << gst << " " << gsum / 4 << endl;

	cout << "bad st" << bst << " " << bsum / 4;

	for (int i = 0, flag = false; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			if (st[i][j] == 5) {
				jk = j;
				ik = i;
				flag = true;
				break;
			}
		}
		if (flag) break;
	}
	cout<<endl << ik << " " << jk;
}
