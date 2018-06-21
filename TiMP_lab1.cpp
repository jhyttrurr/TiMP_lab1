#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[], char* arge[])

{
	setlocale(LC_ALL, "Russian");
	double x, y, sum;
	if (argc != 4) {
		cout << "Введено неверное количество параметров.";
	}
	else {
		char a = *argv[1];
		char d = *argv[2];
		char b = *argv[3];
		if ((a == '+') || (a == '=') || (a == '*') || (a == '/') || (b == '+') || (b == '=') || (b == '*') || (b == '/') || isdigit(d) || (d == '/')) {
			cout << "Неправильно введено значение";
		}

		else {
			x = atof(argv[1]);
			y = atof(argv[3]);
			char c = *argv[2];
			if (c == '+') {
				sum = x + y;
				cout << x << "+" << y << "=" << sum;
			}
			if (c == '-') {
				sum = x - y;
				cout << x << "-" << y << "=" << sum;
			}
			if (c == '*') {
				sum = x * y;
				cout << x << "*" << y << "=" << sum;
			}
			if (c == '/') {
				sum = x / y;
				cout << x << "/" << y << "=" << sum;
			}
		}
	}
	return 0;
}