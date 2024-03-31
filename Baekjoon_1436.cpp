#include <iostream>
#include <string>
using namespace std;

int main() {
	int input, apocalypse = 0, num = 0, temp = 0;
	cin >> input;
	
	while (num != input) {
		apocalypse++;
		temp = apocalypse;
		while (temp != 0) {
			if (temp % 1000 == 666) {
				num++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}
	
	cout << apocalypse;
}