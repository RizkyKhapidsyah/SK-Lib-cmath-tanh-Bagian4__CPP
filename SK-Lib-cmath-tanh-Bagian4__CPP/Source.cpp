// CPP program to demonstrate the tanh()
// function when a string is passed as argument
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	string x = "gfg";
	double result;

	result = tanh(x);
	cout << "tanh(x) = " << result << endl;

	_getch();
	return 0;
}
