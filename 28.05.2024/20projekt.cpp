#include <iostream>
#include<fstream>
#include <string>

using namespace std;

void seekWord(string path, string word) {
	ifstream in(path);
	if (in.is_open()) {
		string str;
		int count = 0;
		int size = 0;
		for(;word[size]!='\0';size++){}
		while (getline(in, str)) {

			for (int i = 0; str[i] != '\0';i++) {
				for (int j = 1, i2 = i + 1; word[j] != '\0'; j++, i2++) {
					if (str[i2] == word[j]) {
						if (size - 1 == j) {
							count++;
						}
					}
					else {
						break;
					}
				}
			}
		}
		cout << count;
	}
}

void copy(string path) {
	string path_out = "", str;

	for (int i = 0; i < path.length() - 4; i++) {
		path_out += path[i];
	}
	path_out += "(copy).txt";

	ifstream in(path);
	ofstream out(path_out);

	if (in.is_open()) {
		while (getline(in, str)) {
			out << str << '\n';
		}
	}

	out.close();
	in.close();
}

void cezar(string path, int sdvig) {
	string path_out = "", str;

	for (int i = 0; i < path.length() - 4; i++) {
		path_out += path[i];
	}
	path_out += "(code).txt";

	ifstream in(path);
	ofstream out(path_out);

	if (in.is_open()) {
		while (getline(in, str)) {
			for (int i = 0; str[i] != '\0'; i++) {
				str[i] += sdvig;
				
			}
			out << str << '\n';
		}
	}

	out.close();
	in.close();
}

int main()
{
	string buf;
	
	ifstream in("saved\\input.txt");
	if (in.is_open()) {
		/*int count = 0;
		while (getline(in, buf)) {
			cout << buf << endl;
			for (int i = 0; buf[i] != '\0'; i++) {
				count++;
			}
		}
		cout << count;*/
		/*int count = 0;
		while (getline(in, buf)) {
			int start = 0; 

			for (; buf[start] == ' ' && buf[start]; start++) {}

			for (int i = start; buf[i] != '\0'; i++) {
				if (buf[i] != ' ' && buf[i + 1] == '\0') count++;
				if (buf[i] != ' ' && buf[i + 1] == ' ') count++;
			}
		}
		cout << count;*/

		//seekWord("saved\\input.txt", "qwerg");

		copy("saved\\input.txt");
		cezar("saved\\input.txt", 3);
	}
	else {
		cout << "fole not found";
	}

	in.close();


}