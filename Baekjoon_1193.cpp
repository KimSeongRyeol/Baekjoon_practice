#include <iostream>
# define CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	int num, numerator = 1, denominator = 1;
	cin >> num;
	bool temp = true;

	for (int i = 1; i < num; i++) {
		if (temp == true) {
			if (numerator == 1) {
				denominator++;
				temp = false;
			}
			else {
				denominator++;
				numerator--;
			}
		}
		else {
			if (denominator == 1) {
				numerator++;
				temp = true;
			}
			else {
				denominator--;
				numerator++;
			}
		}
	}
	
	cout << numerator << '/' << denominator;
}