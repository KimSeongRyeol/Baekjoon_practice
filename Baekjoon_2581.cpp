#include <iostream>
using namespace std;

int main() {
	int up, down, min, sum = 0;
	cin >> up;
	cin >> down;

	for (int i = down; i >= up; i--) {
		int count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			sum += i;
			min = i;
		}
	}

	if (sum != 0) {
		cout << sum << endl << min << endl;
	}
	else {
		cout << "-1" << endl;
	}
}