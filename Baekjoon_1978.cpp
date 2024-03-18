#include <iostream>
#include <string>
using namespace std;

int main() {
	int input, count = 0;
	cin >> input;

	for (int i = 0; i < input; i++) {
		int num;
		int val = 0;
		cin >> num;
		for (int j = 1; j <= num; j++) {
			if (num % j == 0) {
				val++;
			}
		}
		if (val == 2) {
			count++;
		}
	}

	cout << count;
}